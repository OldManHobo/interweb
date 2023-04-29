 
LittleSquare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittleSquare_OnTransition
	.byte 0

LittleSquare_OnTransition:
	call LittleSquare_EventScript_ShowOrHideWhiteHerbFlorist
	end

LittleSquare_EventScript_ShowOrHideWhiteHerbFlorist::
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, LittleSquare_EventScript_HideWhiteHerbFlorist
	goto_if_unset FLAG_BADGE03_GET, LittleSquare_EventScript_HideWhiteHerbFlorist
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	return

LittleSquare_EventScript_HideWhiteHerbFlorist::
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	return

LittleSquare_EventScript_WhiteHerbFlorist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WHITE_HERB, LittleSquare_EventScript_ReceivedWhiteHerb
	msgbox LittleSquare_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WHITE_HERB
	release
	end

LittleSquare_EventScript_ReceivedWhiteHerb::
	msgbox LittleSquare_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
	release
	end

LittleSquare_EventScript_RouteSignRustboro::
	msgbox LittleSquare_Text_RouteSignRustboro, MSGBOX_SIGN
	end

LittleSquare_EventScript_FlowerShopSign::
	msgbox LittleSquare_Text_PrettyPetalFlowShop, MSGBOX_SIGN
	end			

LittleSquare_EventScript_Ivan::
	trainerbattle_single TRAINER_IVAN, LittleSquare_Text_IvanIntro, LittleSquare_Text_IvanDefeat
	msgbox LittleSquare_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

LittleSquare_EventScript_Darian::
	trainerbattle_single TRAINER_DARIAN, LittleSquare_Text_DarianIntro, LittleSquare_Text_DarianDefeat
	msgbox LittleSquare_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end	

LittleSquare_EventScript_Winston::
	trainerbattle_single TRAINER_WINSTON_1, LittleSquare_Text_WinstonIntro, LittleSquare_Text_WinstonDefeat, LittleSquare_EventScript_TryRegisterWinstonAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, LittleSquare_EventScript_RematchWinston
	setvar VAR_0x8004, TRAINER_WINSTON_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, LittleSquare_EventScript_TryRegisterWinston
	msgbox LittleSquare_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

LittleSquare_EventScript_TryRegisterWinstonAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, LittleSquare_EventScript_RegisterWinstonAfterBattle
	release
	end

LittleSquare_EventScript_RegisterWinstonAfterBattle::
	msgbox LittleSquare_Text_WinstonRegister2, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

LittleSquare_EventScript_TryRegisterWinston::
	goto_if_set FLAG_HAS_MATCH_CALL, LittleSquare_EventScript_RegisterWinston
	msgbox LittleSquare_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release
	end

LittleSquare_EventScript_RegisterWinston::
	msgbox LittleSquare_Text_WinstonRegister1, MSGBOX_DEFAULT
	register_matchcall TRAINER_WINSTON_1
	release
	end

LittleSquare_EventScript_RematchWinston::
	trainerbattle_rematch TRAINER_WINSTON_1, LittleSquare_Text_WinstonRematchIntro, LittleSquare_Text_WinstonRematchDefeat
	msgbox LittleSquare_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
	end

LittleSquare_Text_DontNeedThisTakeIt:
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping.\p"
	.string "I don't need this WHITE HERB anymore.\n"
	.string "Would you take it, please?$"

LittleSquare_Text_FlowerShopSellingSaplings:
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping. Where should I put them?$"

LittleSquare_Text_RouteSignRustboro:
	.string "ROUTE 1O4\n"
	.string "{UP_ARROW} RUSTBORO CITY$"

LittleSquare_Text_PrettyPetalFlowShop:
	.string "PRETTY PETAL FLOWER SHOP$"	
 
