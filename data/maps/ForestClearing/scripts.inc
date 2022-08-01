ForestClearing_MapScripts::
	.byte 0

ForestClearing_EventScript_RouteSign::
	msgbox Forest_Clearing_Text_RouteSign, MSGBOX_SIGN
	end

Forest_Clearing_Text_RouteSign:
	.string "FOREST CLEARING\n"
	.string "{UP_ARROW} ROUTE 103\n"
	.string "{DOWN_ARROW} ROUTE 101$"
