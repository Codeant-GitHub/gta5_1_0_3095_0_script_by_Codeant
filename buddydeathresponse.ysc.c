#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	eCharacter echLocal_17 = CHAR_MICHAEL;
	var uLocal_18 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;

	if (unk_0x96CFB880BAC634CE(2) || unk_0xD5FD8DD00FB16F99())
		unk_0xBBC29EBE6E1A48FA();

	func_1();
	return;
}

void func_1() // Position - 0x4F
{
	var unk;
	var unk4;

	while (!func_9(&uLocal_18))
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x4FAFF4BCB7633475(uLocal_18))
	{
		if (!Global_97867)
		{
			unk_0xEE0BCDB1B5E36BCB(uLocal_18, 1, 1);
		
			if (unk_0x9B5C1660CCDF7189(uLocal_18, joaat("SCRIPT_TASK_ANY")) != 7)
				unk_0x974022927CB47E68(uLocal_18);
		
			unk = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
			unk_0xAAA71DD7E9059338(uLocal_18, 1);
			unk_0xB5396F1FB088FE38(&unk4);
		
			if (!unk_0x7F420695E3F776FB(uLocal_18, 0))
				if (!unk_0x1B32E388988DD296(uLocal_18, 0) && !unk_0x7F420695E3F776FB(uLocal_18, 0))
					unk_0xCD76801E1106CABE(0, unk, 6000);
		
			unk_0xE237FA90A8AFEE59(0, unk, 6000, 0, 2);
			unk_0x93C0674FC00824D0(unk4);
			unk_0x4BD42B0527065BB6(uLocal_18, unk4);
		}
	
		func_2(uLocal_18);
	}

	while (!unk_0x15CCE8886267624F())
	{
		SYSTEM::WAIT(0);
	}

	if (unk_0xFC8BFE4B41177C22(uLocal_18))
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_18))
			unk_0x44FB298D6382876D(uLocal_18, 1);
	
		unk_0xF09E30AF1B8FB379(&uLocal_18);
	}

	Global_97867 = false;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_2(var uParam0) // Position - 0x13C
{
	int num;

	num = unk_0x1DD05E817C89C737() + 1000;

	while (unk_0x1DD05E817C89C737() < num && !unk_0x15CCE8886267624F())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (echLocal_17 == CHAR_FRANKLIN)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D()))
			{
				case CHAR_TREVOR:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			
				case CHAR_MICHAEL:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (echLocal_17 == CHAR_TREVOR)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D()))
			{
				case CHAR_FRANKLIN:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
			
				case CHAR_MICHAEL:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (echLocal_17 == CHAR_MICHAEL)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D()))
			{
				case CHAR_TREVOR:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
			
				case CHAR_FRANKLIN:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
			}
		}
	}

	return;
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x234
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_4(iParam3), 0);
	return;
}

char* func_4(int iParam0) // Position - 0x24D
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(int iParam0) // Position - 0x43C
{
	eCharacter i;
	int num;

	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(iParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x479
{
	if (func_8(character))
		return func_7(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_7(eCharacter echParam0) // Position - 0x49E
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_8(eCharacter echParam0) // Position - 0x4AD
{
	return echParam0 < CHAR_MULTIPLAYER;
}

BOOL func_9(var uParam0) // Position - 0x4B9
{
	var unk;

	for (iLocal_16 = 0; iLocal_16 < 9; iLocal_16 = iLocal_16 + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98741[iLocal_16]) && !unk_0x4FAFF4BCB7633475(Global_98741[iLocal_16]))
		{
			if (Global_98741[iLocal_16] != unk_0x4A8C381C258A124D())
			{
				if (!unk_0x110821AE6C63DD4F(Global_98741[iLocal_16]))
				{
					if (unk_0x7F420695E3F776FB(Global_98741[iLocal_16], 0) || !unk_0xA3736D76B0E93E93(Global_98741[iLocal_16]))
					{
						if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(Global_98741[iLocal_16], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1) < 10f)
						{
							echLocal_17 = _GET_PLAYER_CHARACTER_FROM_PED(Global_98741[iLocal_16]);
						
							if (echLocal_17 == CHAR_MICHAEL || echLocal_17 == CHAR_TREVOR || echLocal_17 == CHAR_FRANKLIN)
							{
								if (echLocal_17 != _GET_CURRENT_PLAYER_CHARACTER())
								{
									if (unk_0xAD915B5E38F323E5(Global_98741[iLocal_16], unk_0x4A8C381C258A124D(), 17))
									{
										if (unk_0x7F420695E3F776FB(Global_98741[iLocal_16], 0))
											unk = unk_0x6EF03BE64E058E2F(Global_98741[iLocal_16], 0);
									
										if (unk_0xFC8BFE4B41177C22(unk) && unk_0xD9F5E1FEFD1329E4(unk, 0) || !unk_0xFC8BFE4B41177C22(unk))
										{
											*uParam0 = Global_98741[iLocal_16];
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (unk_0x15CCE8886267624F())
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5FE
{
	func_11();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_11() // Position - 0x617
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_8(character) && !func_12(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_8(Global_114370.f_2366.f_539.f_4321))
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
			
				Global_114370.f_2366.f_539.f_4323 = character;
				Global_114370.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_12(int iParam0) // Position - 0x714
{
	return Global_43922 == iParam0;
}

