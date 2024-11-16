Route2_MapScripts::
	.byte 0

Route2_EventScript_LittleBoy::
	msgbox Route2_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route2_EventScript_RouteSignOldale::
	msgbox Route2_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route2_EventScript_RouteSignPetalburg::
	msgbox Route2_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route2_EventScript_Boy::
	msgbox Route2_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route2_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route2_Text_CalvinIntro, Route2_Text_CalvinDefeated, Route2_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route2_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route2_EventScript_CalvinTryRegister
	msgbox Route2_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route2_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route2_EventScript_CalvinRegisterMatchCall
	release
	end

Route2_EventScript_CalvinRegisterMatchCall::
	msgbox Route2_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route2_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route2_EventScript_CalvinRegister
	msgbox Route2_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route2_EventScript_CalvinRegister::
	msgbox Route2_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route2_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route2_Text_CalvinRematchIntro, Route2_Text_CalvinRematchDefeated
	msgbox Route2_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route2_Text_RickIntro, Route2_Text_RickDefeated
	msgbox Route2_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route2_Text_TianaIntro, Route2_Text_TianaDefeated
	msgbox Route2_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route2_Text_AllenIntro, Route2_Text_AllenDefeated
	msgbox Route2_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route2_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route2_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route2_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route2_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route2_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route2_Text_RouteSignOldale:
	.string "ROUTE 2\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route2_Text_RouteSignPetalburg:
	.string "ROUTE 2\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"