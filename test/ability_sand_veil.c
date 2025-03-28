#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Sand Veil prevents damage from sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_CACNEA) { Ability(ABILITY_SAND_VEIL); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); }
        TURN {}
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Sand Veil increases evasion during sandstorm")
{
    PASSES_RANDOMLY(4, 5, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_POUND].accuracy == 100);
        PLAYER(SPECIES_RUMOSS) { Ability(ABILITY_SAND_VEIL); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); }
        TURN { MOVE(opponent, MOVE_POUND); }
    } SCENE {
        HP_BAR(player);
    }
}
