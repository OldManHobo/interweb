.set LOCALID_RIVAL, 1
.set LOCALID_WALLY, 2

ForestClearing_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ForestClearing_OnTransition
	.byte 0

ForestClearing_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

ForestClearing_EventScript_ComeOverHere1::
	lockall
	msgbox ForestClearing_Test_ComeOverHere, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, ForestClearing_Movement_GetsCloser1
	waitmovement 0
	goto ForestClearing_EventScript_Rival
	end

ForestClearing_EventScript_ComeOverHere2::
	lockall
	msgbox ForestClearing_Test_ComeOverHere, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, ForestClearing_Movement_GetsCloser2
	waitmovement 0
	goto ForestClearing_EventScript_Rival
	end

ForestClearing_EventScript_ComeOverHere3::
	lockall
	msgbox ForestClearing_Test_ComeOverHere, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, ForestClearing_Movement_GetsCloser3
	waitmovement 0
	goto ForestClearing_EventScript_Rival
	end

ForestClearing_EventScript_ComeOverHere4::
	lockall
	msgbox ForestClearing_Test_ComeOverHere, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, ForestClearing_Movement_GetsCloser4
	waitmovement 0
	goto ForestClearing_EventScript_Rival
	end			 	

ForestClearing_EventScript_Rival::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, ForestClearing_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, ForestClearing_EventScript_RivalBrendan
	end	

ForestClearing_EventScript_RivalMay::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox ForestClearing_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, ForestClearing_EventScript_StartMayBattleTreecko
	case 1, ForestClearing_EventScript_StartMayBattleTorchic
	case 2, ForestClearing_EventScript_StartMayBattleMudkip
	end

ForestClearing_EventScript_RivalBrendan::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox ForestClearing_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, ForestClearing_EventScript_StartBrendanBattleTreecko
	case 1, ForestClearing_EventScript_StartBrendanBattleTorchic
	case 2, ForestClearing_EventScript_StartBrendanBattleMudkip
	end

ForestClearing_EventScript_StartMayBattleTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, ForestClearing_Text_MayDefeated
	goto ForestClearing_EventScript_AfterMayBattle
	end

ForestClearing_EventScript_StartMayBattleTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, ForestClearing_Text_MayDefeated
	goto ForestClearing_EventScript_AfterMayBattle
	end

ForestClearing_EventScript_StartMayBattleMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, ForestClearing_Text_MayDefeated
	goto ForestClearing_EventScript_AfterMayBattle
	end

ForestClearing_EventScript_StartBrendanBattleTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, ForestClearing_Text_BrendanDefeated
	goto ForestClearing_EventScript_AfterBrendanBattle
	end

ForestClearing_EventScript_StartBrendanBattleTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, ForestClearing_Text_BrendanDefeated
	goto ForestClearing_EventScript_AfterBrendanBattle
	end

ForestClearing_EventScript_StartBrendanBattleMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, ForestClearing_Text_BrendanDefeated
	goto ForestClearing_EventScript_AfterBrendanBattle
	end	
	
ForestClearing_EventScript_AfterMayBattle::
	msgbox ForestClearing_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	special HealPlayerParty
	goto ForestClearing_EventScript_RichRivalInterrupts
	end

ForestClearing_EventScript_AfterBrendanBattle::
	msgbox ForestClearing_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	goto ForestClearing_EventScript_RichRivalInterrupts
	end

ForestClearing_EventScript_David::
	lock
	faceplayer
	msgbox ForestClearing_Text_DontTalktoMe, MSGBOX_DEFAULT
	release
	end	

ForestClearing_EventScript_RichRivalInterrupts::
	playbgm MUS_ENCOUNTER_MALE, TRUE
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_WALLY, ForestClearing_Movement_BattleStart
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	msgbox ForestClearing_Text_DavidWantstoBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, ForestClearing_EventScript_StartDavidBattleTreecko
	case 1, ForestClearing_EventScript_StartDavidBattleTorchic
	case 2, ForestClearing_EventScript_StartDavidBattleMudkip
	end 

ForestClearing_EventScript_StartDavidBattleTreecko::
	trainerbattle_no_intro TRAINER_DAVID_ROUTE_103_TREECKO, ForestClearing_Text_DavidDefeated
	goto ForestClearing_EventScript_AfterDavidBattle
	end

ForestClearing_EventScript_StartDavidBattleTorchic::
	trainerbattle_no_intro TRAINER_DAVID_ROUTE_103_TORCHIC, ForestClearing_Text_DavidDefeated
	goto ForestClearing_EventScript_AfterDavidBattle
	end

ForestClearing_EventScript_StartDavidBattleMudkip::
	trainerbattle_no_intro TRAINER_DAVID_ROUTE_103_MUDKIP, ForestClearing_Text_DavidDefeated
	goto ForestClearing_EventScript_AfterDavidBattle
	end

ForestClearing_EventScript_AfterDavidBattle::
	msgbox ForestClearing_Text_DavidCries, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, ForestClearing_Movement_DavidRunsAway
	waitmovement 0
	removeobject LOCALID_WALLY
	special HealPlayerParty
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ForestClearing_Text_RivalGoBacktoLab, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setvar VAR_BIRCH_LAB_STATE, 4
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	savebgm MUS_DUMMY
	fadedefaultbgm
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 12
	setflag FLAG_HIDE_ROUTE_103_RIVAL
	releaseall
	end

ForestClearing_Test_ComeOverHere:
	.string "Hey, {PLAYER}{KUN}!\p"
	.string "Over here!$"

ForestClearing_Movement_GetsCloser1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

ForestClearing_Movement_GetsCloser2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

ForestClearing_Movement_GetsCloser3:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

ForestClearing_Movement_GetsCloser4:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end				

ForestClearing_Text_MayLetsBattle:
	.string "Hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a Pokémon as a gift.\p"
	.string "I was just battling with David,\n"
	.string "but now we can have a quick battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a Trainer is like.$"

ForestClearing_Text_MayDefeated:
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

ForestClearing_Text_MayTimeToHeadBack:
	.string "I think I know why the prof has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that Pokémon,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of Pokémon easily.$"

ForestClearing_Text_DontTalktoMe::
	.string "Aaaaah, can't you see I'm busy?\p"
	.string "I can't talk to you now, I'm\n"
	.string "too focused on this match!$"	

ForestClearing_Text_BrendanLetsBattle:
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Prof. Tamba gave you\n"
	.string "a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "Now that I'm done battling David,\n"
	.string "I'll be sure to teach you what\p"
	.string "being a Trainer's about!$"

ForestClearing_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

ForestClearing_Text_BrendanTimeToHeadBack:
	.string "BRENDAN: I think I get it.\n"
	.string "I think I know why the prof has his eye\l"
	.string "out for you now.\p"
	.string "Look, your Pokémon already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any Pokémon with ease.\p"
	.string "We should head back to the lab.$"

ForestClearing_Movement_BattleStart:
	walk_down
	face_left
	step_end	

ForestClearing_Text_DavidWantstoBattle:
	.string "Hey, you're the new guy, right?\p"
	.string "I'm sure that I'm better than you\n"
	.string "at Pokémon battles! I just lost to\p"
	.string "{RIVAL} but they cheated!\p"
	.string "Let's fight!$"

ForestClearing_Text_DavidDefeated:
	.string "H-how come...? I had a strong\n"
	.string "Pokémon!$"

ForestClearing_Text_DavidCries:
	.string "You're just a bunch of cheaters!\n"
	.string "I'll tell my parents about that!!$"

ForestClearing_Movement_DavidRunsAway:
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ForestClearing_Text_RivalGoBacktoLab:
	.string "What a sore loser...\p"
	.string "Well, let's get back to the lab.$"											

ForestClearing_EventScript_RouteSign::
	msgbox Forest_Clearing_Text_RouteSign, MSGBOX_SIGN
	end

Forest_Clearing_Text_RouteSign:
	.string "FOREST CLEARING\n"
	.string "{UP_ARROW} POND JUNCTION\p"
	.string "{DOWN_ARROW} BEGINNING PATH$"

	 
