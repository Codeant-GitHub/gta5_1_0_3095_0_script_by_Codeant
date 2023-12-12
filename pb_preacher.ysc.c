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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	SYSTEM::WAIT(0);
	uLocal_43 = { uScriptParam_0.f_1[0 /*3*/] };

	if (unk_0x96CFB880BAC634CE(11))
		func_23();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x173751E886F8E9AB())
		{
			if (func_3(3))
			{
				switch (iLocal_41)
				{
					case 0:
						if (iLocal_42 == 1)
							iLocal_41 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (iLocal_49 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}

	return;
}

void func_1() // Position - 0xEC
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_50, 10f, 10f, 10f, 0, 1, 0) && iLocal_52 == 0)
			{
				SYSTEM::SETTIMERB(0);
				uLocal_46 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				unk_0xB5396F1FB088FE38(&uLocal_53);
				unk_0xCD76801E1106CABE(0, uLocal_46, 0);
				unk_0x10425721983AE158(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_53);
			
				if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
					unk_0x4BD42B0527065BB6(uLocal_50, uLocal_53);
			
				unk_0xD0557B139A542F12(&uLocal_53);
				iLocal_52 = 1;
			}
		
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_50, 3f, 3f, 3f, 0, 1, 0) && iLocal_51 == 0)
			{
				uLocal_46 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				SYSTEM::SETTIMERB(0);
				unk_0xB5396F1FB088FE38(&uLocal_53);
				unk_0xCD76801E1106CABE(0, uLocal_46, 0);
				unk_0x10425721983AE158(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_53);
				unk_0x4BD42B0527065BB6(uLocal_50, uLocal_53);
			}
		
			unk_0xD0557B139A542F12(&uLocal_53);
			iLocal_51 = 1;
		}
	}

	return;
}

void func_2() // Position - 0x1FE
{
	unk_0xEC9DAA34BBB4658C(joaat("S_M_M_StrPreach_01"));
	unk_0x80813AC549A1E8AE("amb@PREACHER");

	while (!unk_0x6252BC0DD8A320DB(joaat("S_M_M_StrPreach_01")) || !unk_0xE100DD4F82A51BDE("amb@PREACHER"))
	{
		SYSTEM::WAIT(0);
	}

	uLocal_46.f_2 = uLocal_43.f_2 - 1f;
	uLocal_50 = unk_0xB1DBFEB95C0EFB88(19, joaat("S_M_M_StrPreach_01"), uLocal_43, uLocal_43.f_1, uLocal_46.f_2, 0f, 1, 1);

	if (!unk_0x1C2F771CDC87A3A5(uLocal_50, 0))
	{
		unk_0xB5396F1FB088FE38(&uLocal_53);
		unk_0xCD76801E1106CABE(0, uLocal_46, 0);
		unk_0x10425721983AE158(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
		unk_0x93C0674FC00824D0(uLocal_53);
		unk_0x4BD42B0527065BB6(uLocal_50, uLocal_53);
		unk_0xD0557B139A542F12(&uLocal_53);
	}

	iLocal_42 = 1;
	return;
}

BOOL func_3(int iParam0) // Position - 0x2A7
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x319
{
	eCharacter character;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_14(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_113417 || Global_32831 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_13() || Global_32831 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_113417 || Global_32831 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114370.f_7691.f_919[character] == 5 || Global_44469 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_13() || Global_113417 || Global_32831 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
							if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_13() || Global_32831 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_114370.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_13() || func_9() || Global_113417 || Global_32831 || func_12() || Global_45122 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_13() || Global_113417 || Global_32831 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0xA36
{
	return Global_101431.f_1;
}

BOOL func_6() // Position - 0xA44
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 13);

	return false;
}

BOOL func_7() // Position - 0xA67
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_8() // Position - 0xA81
{
	if (Global_79509)
		return true;
	else if (Global_64032 && !Global_64038)
		return true;

	return false;
}

BOOL func_9() // Position - 0xAAB
{
	return Global_101444.f_394 > 0;
}

BOOL func_10() // Position - 0xABC
{
	return Global_101444.f_393 > 0;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xACD
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668317.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668317.f_1048, iParam0);
}

BOOL func_12() // Position - 0xB05
{
	return Global_1575079;
}

BOOL func_13() // Position - 0xB11
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

BOOL func_14(eCharacter echParam0) // Position - 0xB2D
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xB39
{
	func_16();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_16() // Position - 0xB52
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_14(character) && !func_22(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_14(Global_114370.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xC4F
{
	eCharacter i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xC8C
{
	if (func_14(character))
		return func_19(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_19(eCharacter echParam0) // Position - 0xCB1
{
	return Global_2139[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xCC0
{
	return func_21(iParam0, Global_43922);
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xCD1
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_22(int iParam0) // Position - 0xEB2
{
	return Global_43922 == iParam0;
}

void func_23() // Position - 0xEC0
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

