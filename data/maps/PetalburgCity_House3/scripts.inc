PetalburgCity_House3_MapScripts::
	.byte 0

PetalburgCity_House3_EventScript_Hiker::
	msgbox PetalburgCity_House3_Text_TraveledALot, MSGBOX_NPC
	end

PetalburgCity_House3_EventScript_ExpertF::
	msgbox PetalburgCity_House3_Text_DataTypes, MSGBOX_NPC
	end

PetalburgCity_House3_Text_TraveledALot:
	.string "I traveled a lot in my life but\n"
	.string "I always come back here where I\p"
	.string "grew up. When your journey will be\n"
	.string "over, you should do the same.$"

PetalburgCity_House3_Text_DataTypes:	
	.string "Data-type Pokémon only exist here,\n"
	.string "in Werkai. I guess they're some sort\l"
	.string "of endemic species.$"	
