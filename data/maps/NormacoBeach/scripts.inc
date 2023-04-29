.set LOCALID_RIVAL, 1

NormacoBeach_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NormacoBeach_OnTransition
	.byte 0

NormacoBeach_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

NormacoBeach_EventScript_GameboyKid::
	msgbox NormacoBeach_Text_GameboyKid, MSGBOX_NPC
	end

NormacoBeach_EventScript_TuberF::
	msgbox NormacoBeach_Text_TuberF, MSGBOX_NPC
	end

NormacoBeach_EventScript_TuberM::
	msgbox NormacoBeach_Text_TuberM, MSGBOX_NPC
	end

NormacoBeach_EventScript_Fisherman::
	msgbox NormacoBeach_Text_Fisherman, MSGBOX_NPC
	end

NormacoBeach_EventScript_Tourist::
	lock
	msgbox NormacoBeach_Text_Tourist, MSGBOX_DEFAULT
	release
	end

NormacoBeach_EventScript_Rival::
	lockall
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_PlayRivalMusic::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, NormacoBeach_EventScript_PlayMayMusic
	goto_if_eq VAR_RESULT, FEMALE, NormacoBeach_EventScript_PlayBrendanMusic
	return

NormacoBeach_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

NormacoBeach_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return	

NormacoBeach_EventScript_RivalTrigger0::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger1::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger2::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger3::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger4::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger5::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger6::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer6
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter

NormacoBeach_EventScript_RivalTrigger7::
	lockall
	call NormacoBeach_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, NormacoBeach_Movement_RivalApproachPlayer7
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto NormacoBeach_EventScript_RivalEncounter	

NormacoBeach_EventScript_RivalEncounter::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, NormacoBeach_EventScript_MayEncounter
	goto_if_eq VAR_RESULT, FEMALE, NormacoBeach_EventScript_BrendanEncounter
	end

NormacoBeach_EventScript_MayEncounter::
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, NormacoBeach_EventScript_MayContinueAdventure
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, NormacoBeach_EventScript_MayAskToBattle
	setflag FLAG_MET_RIVAL_RUSTBORO
	setvar VAR_RUSTBORO_CITY_STATE, 2
	setvar VAR_ROUTE104_STATE, 2
	setvar VAR_0x8008, 0
	msgbox NormacoBeach_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NormacoBeach_EventScript_BattleMay
	msgbox NormacoBeach_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
	call NormacoBeach_EventScript_RestoreBgm
	releaseall
	end

NormacoBeach_EventScript_MayAskToBattle::
	setvar VAR_0x8008, 1
	msgbox NormacoBeach_Text_MayWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NormacoBeach_EventScript_BattleMay
	msgbox NormacoBeach_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
	releaseall
	end

NormacoBeach_EventScript_BattleMay::
	msgbox NormacoBeach_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, NormacoBeach_EventScript_BattleMayTreecko
	case 1, NormacoBeach_EventScript_BattleMayTorchic
	case 2, NormacoBeach_EventScript_BattleMayMudkip
	end

NormacoBeach_EventScript_RestoreBgm::
	savebgm MUS_DUMMY
	fadedefaultbgm
	return

NormacoBeach_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, NormacoBeach_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, NormacoBeach_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, NormacoBeach_Text_MayDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_BrendanEncounter::
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, NormacoBeach_EventScript_BrendanContinueAdventure
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, NormacoBeach_EventScript_BrendanAskToBattle
	setflag FLAG_MET_RIVAL_RUSTBORO
	setvar VAR_RUSTBORO_CITY_STATE, 2
	setvar VAR_ROUTE104_STATE, 2
	msgbox NormacoBeach_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NormacoBeach_EventScript_BattleBrendan
	msgbox NormacoBeach_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
	call NormacoBeach_EventScript_RestoreBgm
	releaseall
	end

NormacoBeach_EventScript_BrendanAskToBattle::
	msgbox NormacoBeach_Text_BrendanWantToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NormacoBeach_EventScript_BattleBrendan
	msgbox NormacoBeach_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
	releaseall
	end

NormacoBeach_EventScript_BattleBrendan::
	msgbox NormacoBeach_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, NormacoBeach_EventScript_BattleBrendanTreecko
	case 1, NormacoBeach_EventScript_BattleBrendanTorchic
	case 2, NormacoBeach_EventScript_BattleBrendanMudkip
	end

NormacoBeach_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, NormacoBeach_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, NormacoBeach_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, NormacoBeach_Text_BrendanDefeat
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
	end

NormacoBeach_EventScript_MayContinueAdventure::
	msgbox NormacoBeach_EventScript_MayContinueAdventure, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, NormacoBeach_EventScript_RestoreBgm
	releaseall
	end

NormacoBeach_EventScript_BrendanContinueAdventure::
	msgbox NormacoBeach_EventScript_BrendanContinueAdventure, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, NormacoBeach_EventScript_RestoreBgm
	releaseall
	end		

NormacoBeach_Movement_RivalApproachPlayer0:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer1:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer2:
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer3:
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer4:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer5:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer6:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Movement_RivalApproachPlayer7:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

NormacoBeach_Text_MayPassedBrineyWantToBattle:
	.string "May: Oh, hey {PLAYER}{KUN}, nice\n"
	.string "to see you! I happened to pass\l"
	.string "our dear David in Cerplas Woods.\p"
	.string "I guess he's on his way to meet\n"
	.string "you again and battle you.\p"
	.string "How's your Pokédex coming along,\n"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
	.string "So…\n"
	.string "How about a little battle?$"

NormacoBeach_Text_MayOhHaventRaisedPokemonEnough:
	.string "May: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "Pokémon very much?\p"
	.string "That's not very good for a Trainer!$"

NormacoBeach_Text_MayWantToBattle:
	.string "May: So, what do you think?\n"
	.string "How about a little battle here?$"

NormacoBeach_Text_MayImNotGoingToLose:
	.string "May: You just became a Trainer,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

NormacoBeach_Text_MayDefeat:
	.string "Yikes!\n"
	.string "You're better than I expected!$"

NormacoBeach_Text_BrendanPassedBrineyWantToBattle:
	.string "Brendan: Hello, {PLAYER}, long time\n" 
	.string "no see! I just happened to walk\l"
	.string "by that jerk David in Cerplas Woods.\p"
	.string "I bet he was on his way to find you\n"
	.string "and battle you again.\p"
	.string "{PLAYER}, how's your Pokédex?\n"
	.string "Have you filled in any pages yet?\p"
	.string "Mine rules.\p"
	.string "Want to have a battle to test how\n"
	.string "far you've progressed?$"

NormacoBeach_Text_BrendanNoConfidenceInPokemon:
	.string "Brendan: What's the matter? Don't have\n"
	.string "any confidence in your Pokémon?$"

NormacoBeach_Text_BrendanWantToBattle:
	.string "Brendan: What's up?\n"
	.string "Want to have a battle with me?$"

NormacoBeach_Text_BrendanIWontGoEasy:
	.string "Brendan: I know you just became\n"
	.string "a Trainer, but I won't go easy!$"

NormacoBeach_Text_BrendanDefeat:
	.string "Hmm…\n"
	.string "You're pretty good.$"

NormacoBeach_Text_MayContinueAdventure:
	.string "I hope you're gonna continue your\n"
	.string "adventure, {PLAYER}{KUN}!$"

NormacoBeach_Text_BrendanContinueAdventure:
	.string "You're only starting your own\n"
	.string "journey, don't get too proud yet!$"

NormacoBeach_EventScript_Jose::
	trainerbattle_single TRAINER_JOSE, NormacoBeach_Text_JoseIntro, NormacoBeach_Text_JoseDefeat
	msgbox NormacoBeach_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

NormacoBeach_EventScript_Jerry::
	trainerbattle_single TRAINER_JERRY_1, NormacoBeach_Text_JerryIntro, NormacoBeach_Text_JerryDefeat, NormacoBeach_EventScript_TryRegisterJerryAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, NormacoBeach_EventScript_RematchJerry
	setvar VAR_0x8004, TRAINER_JERRY_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, NormacoBeach_EventScript_TryRegisterJerry
	msgbox NormacoBeach_Text_JerryPostBattle, MSGBOX_DEFAULT
	release
	end

NormacoBeach_EventScript_TryRegisterJerryAfterBattle::
	goto_if_set FLAG_HAS_MATCH_CALL, NormacoBeach_EventScript_RegisterJerryAfterBattle
	release
	end

NormacoBeach_EventScript_RegisterJerryAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox NormacoBeach_Text_JerryRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JERRY_1
	release
	end

NormacoBeach_EventScript_TryRegisterJerry::
	goto_if_set FLAG_HAS_MATCH_CALL, NormacoBeach_EventScript_RegisterJerry
	msgbox NormacoBeach_Text_JerryPostBattle, MSGBOX_DEFAULT
	release
	end

NormacoBeach_EventScript_RegisterJerry::
	msgbox NormacoBeach_Text_JerryRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JERRY_1
	release
	end

NormacoBeach_EventScript_RematchJerry::
	trainerbattle_rematch TRAINER_JERRY_1, NormacoBeach_Text_JerryRematchIntro, NormacoBeach_Text_JerryRematchDefeat
	msgbox NormacoBeach_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
	end	

NormacoBeach_EventScript_Janice::
	trainerbattle_single TRAINER_JANICE, NormacoBeach_Text_JaniceIntro, NormacoBeach_Text_JaniceDefeat
	msgbox NormacoBeach_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end

NormacoBeach_EventScript_Karen::
	trainerbattle_single TRAINER_KAREN_1, NormacoBeach_Text_KarenIntro, NormacoBeach_Text_KarenDefeat, NormacoBeach_EventScript_TryRegisterKarenAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, NormacoBeach_EventScript_RematchKaren
	setvar VAR_0x8004, TRAINER_KAREN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, NormacoBeach_EventScript_TryRegisterKaren
	msgbox NormacoBeach_Text_KarenPostBattle, MSGBOX_DEFAULT
	release
	end

NormacoBeach_EventScript_TryRegisterKarenAfterBattle::
	goto_if_set FLAG_HAS_MATCH_CALL, NormacoBeach_EventScript_RegisterKarenAfterBattle
	release
	end

NormacoBeach_EventScript_RegisterKarenAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox NormacoBeach_Text_KarenRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_KAREN_1
	release
	end

NormacoBeach_EventScript_TryRegisterKaren::
	goto_if_set FLAG_HAS_MATCH_CALL, NormacoBeach_EventScript_RegisterKaren
	msgbox NormacoBeach_Text_KarenPostBattle, MSGBOX_DEFAULT
	release
	end

NormacoBeach_EventScript_RegisterKaren::
	msgbox NormacoBeach_Text_KarenRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_KAREN_1
	release
	end

NormacoBeach_EventScript_RematchKaren::
	trainerbattle_rematch TRAINER_KAREN_1, NormacoBeach_Text_KarenRematchIntro, NormacoBeach_Text_KarenRematchDefeat
	msgbox NormacoBeach_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
	end

NormacoBeach_Text_GameboyKid:
	.string "Hehehe… I installed a backlit\n"
	.string "screen on my handheld. Now I can\l"
	.string "go outside and keep playing!$"

NormacoBeach_Text_TuberF:
	.string "Going on the beach is so cool!\n"
	.string "The water is warm too!$"

NormacoBeach_Text_TuberM:
	.string "I like going on the beach with\n"
	.string "my little sister.$"

NormacoBeach_Text_Fisherman:
	.string "I like fishing on this little\n"
	.string "creek… Sure, it's not biting\l"
	.string "a lot but sometimes fishing is\n"
	.string "just about the journey, y'know?$"

NormacoBeach_Text_Tourist:
	.string "ZZZZZZZ…\p"
	.string "He's sleeping like a log!$"				

							
 
