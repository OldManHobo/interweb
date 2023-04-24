 
RichRivalsHouse_1F_MapScripts::
	.byte 0

RichRivalsHouse_1F_EventScript_RichRivalsMom::
lock
faceplayer
call_if_lt VAR_LITTLEROOT_TOWN_STATE, 3, RichRivalsHouse_1F_EventScript_RichRivalisOutside
msgbox RichRivalsHouse_1F_Text_WereRich, MSGBOX_DEFAULT
release
end

RichRivalsHouse_1F_EventScript_RichRivalisOutside::
msgbox RichRivalsHouse_1F_Text_MySonisOutside
release
end

RichRivalsHouse_1F_Text_WereRich:
	.string "We can afford to live comfortably\n"
	.string "as we do thanks to my husband's job.\p"
	.string "I do wonder if we didn't spoil\n"
	.string "our son too much…$"

RichRivalsHouse_1F_Text_MySonisOutside:
	.string "Oh, are you the kid from our\n"
	.string "new neighbours?\p"
	.string "Welcome to Libassem Town. It's a very\n"
	.string "calm town where nothing happens.\p"
	.string "Our son is probably playing\n"
	.string "in the clearing.$" 	
