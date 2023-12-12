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
	BOOL bLocal_26 = 0;
#endregion

void main() // Position - 0x0
{
	BOOL flag;

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
	bLocal_26 = true;

	if (unk_0x96CFB880BAC634CE(18))
		func_43();

	func_42(20);
	func_41();
	func_40(1);
	func_40(0);
	func_40(2);
	func_40(13);
	func_40(12);
	Global_8688 = 1;
	func_39();

	if (!func_38(-1615086084))
		func_37(-1615086084, 2, 2, 2, 1, -1, 5);

	if (!func_38(-1970925435))
		func_37(-1970925435, 2, 0, 0, 1, -1, 5);

	if (!func_38(-1817481777))
		func_37(-1817481777, 2, 12, 3, 1, -1, 5);

	flag = false;

	while (func_36(23) && !func_35(134))
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		{
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) && !unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()) && !unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
					{
						if (!flag)
						{
							if (!(func_29() || unk_0x3555462DB47B7AB1() || func_28()))
								if (func_13())
									flag = true;
						}
						else
						{
							if (bLocal_26)
							{
								unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 384);
								unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 0f);
								unk_0xB211E45F1FE1ED2D(0, 173, 1);
								unk_0xB211E45F1FE1ED2D(0, 172, 1);
								unk_0xB211E45F1FE1ED2D(0, 174, 1);
								unk_0xB211E45F1FE1ED2D(0, 175, 1);
								unk_0xB211E45F1FE1ED2D(0, 176, 1);
								unk_0xB211E45F1FE1ED2D(0, 177, 1);
								unk_0xB211E45F1FE1ED2D(0, 178, 1);
								unk_0xB211E45F1FE1ED2D(0, 179, 1);
								unk_0xB211E45F1FE1ED2D(0, 180, 1);
								unk_0xB211E45F1FE1ED2D(0, 181, 1);
							}
							else
							{
								unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
							}
						
							switch (func_12())
							{
								case -1615086084:
									if (!func_38(-1989308064))
										func_8(-1989308064, 0, 1, CHAR_MICHAEL, 1, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0x1164A75E490C27B6(joaat("SP_FINAL_DECISION"), 2, 1);
									break;
							
								case -1970925435:
									if (!func_38(-1060930305))
										func_8(-1060930305, 0, CHAR_FRANKLIN, 2, 2, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1060930305:
									func_7(12, 1);
									func_6(134, true);
									unk_0x1164A75E490C27B6(joaat("SP_FINAL_DECISION"), 1, 1);
									break;
							
								case -1817481777:
									func_7(12, 2);
									func_6(134, true);
									unk_0x1164A75E490C27B6(joaat("SP_FINAL_DECISION"), 3, 1);
									break;
							
								default:
									if (!func_5(0))
										flag = false;
									else if (bLocal_26)
										if (func_4())
											bLocal_26 = false;
									break;
							}
						}
					}
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_3(20);
	Global_101431 = false;
	func_1();
	func_43();
	return;
}

int func_1() // Position - 0x2F3
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101431.f_8)
		if (Global_101431.f_10 > 0)
			return 0;
	else if (Global_101431.f_10 > 1)
		return 0;

	Global_101431.f_10 = Global_101431.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x33E
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

int func_3(int iParam0) // Position - 0x366
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], num2))
	{
		unk_0x8744D2E3FC95740E(&Global_114370.f_9088.f_99.f_219[num], num2);
		return 1;
	}

	return 0;
}

BOOL func_4() // Position - 0x3BD
{
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		return true;

	return false;
}

BOOL func_5(int iParam0) // Position - 0x3E6
{
	if (iParam0 == 1)
		if (Global_20813.f_1 > 3)
			if (IS_BIT_SET(Global_8683, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20813.f_1 > 3)
		return true;

	return false;
}

void func_6(int iParam0, BOOL bParam1) // Position - 0x43D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114370.f_9088.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114370.f_9088.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x482
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_114370.f_9088.f_99.f_205[iParam0] == iParam1)
		return;

	Global_114370.f_9088.f_99.f_205[iParam0] = iParam1;
	return;
}

int func_8(int iParam0, int iParam1, eCharacter echParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x4C7
{
	int num;
	int num2;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 == 76)
		return 0;

	if (iParam8 == 235)
		return 0;

	if (iParam3 == echParam2)
		return 0;

	if (echParam2 != _CHAR_VIRTUAL_MP && echParam2 != CHAR_MICHAEL && echParam2 != CHAR_FRANKLIN && echParam2 != CHAR_TREVOR)
		return 0;

	if (Global_114370.f_7691.f_136 < CHAR_MIKE_TREV_CONF)
	{
		num = iParam0;
	
		if (Global_114370.f_7691.f_911 == num)
			Global_114370.f_7691.f_911 = -1;
	
		num.f_3 = func_11(iParam1);
		num.f_5 = iParam6;
		num.f_4 = unk_0x1DD05E817C89C737() + iParam5;
		num.f_1 = iParam10;
		num2 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&num2, echParam2);
		num.f_2 = num2;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_7 = iParam7;
		num.f_8 = iParam8;
		num.f_9 = iParam9;
		unk_0x0B0C9A0F9AAEB7F0(&(num.f_1), 0);
		unk_0x8744D2E3FC95740E(&(num.f_1), 1);
	
		if (iParam1 == 0)
			unk_0x0B0C9A0F9AAEB7F0(&(num.f_1), 10);
	
		Global_114370.f_7691[Global_114370.f_7691.f_136 /*15*/] = { num };
		Global_114370.f_7691.f_136 = Global_114370.f_7691.f_136 + 1;
		func_9(echParam2);
		return 1;
	}

	return 0;
}

void func_9(eCharacter echParam0) // Position - 0x618
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_10(echParam0))
		return;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_7691[i /*15*/].f_2, echParam0))
			if (Global_114370.f_7691[i /*15*/].f_3 > num)
				num = Global_114370.f_7691[i /*15*/].f_3;
	}

	for (j = CHAR_MICHAEL; j < Global_114370.f_7691.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114370.f_7691.f_651[j /*14*/].f_2, echParam0))
			if (Global_114370.f_7691.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114370.f_7691.f_919[echParam0] = num;
	return;
}

BOOL func_10(eCharacter echParam0) // Position - 0x6D6
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_11(int iParam0) // Position - 0x6E2
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_12() // Position - 0x74C
{
	return Global_114370.f_7691.f_911;
}

BOOL func_13() // Position - 0x75E
{
	if (Global_20813.f_1 > 3)
	{
		unk_0x8744D2E3FC95740E(&Global_8684, 0);
		func_23(0);
		return false;
	}

	unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 0);

	if (func_14(0, 0, 1, true))
		return true;

	unk_0x8744D2E3FC95740E(&Global_8684, 0);
	return false;
}

BOOL func_14(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7A3
{
	if (Global_79248)
	{
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 23 && iParam0 != 1)
			return false;
	
		if (!IS_BIT_SET(Global_4542983, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 16);
			}
		
			if (iParam0 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 15);
			}
		
			if (iParam0 == 23)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 27);
			}
		
			if (iParam0 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 29);
			}
		}
	
		if (Global_8690[iParam0 /*15*/].f_9 == 0)
			func_20();
	
		if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x8744D2E3FC95740E(&Global_4542983, 14);
			unk_0x8744D2E3FC95740E(&Global_4542983, 16);
			unk_0x8744D2E3FC95740E(&Global_4542983, 15);
			unk_0x8744D2E3FC95740E(&Global_4542983, 27);
			unk_0x8744D2E3FC95740E(&Global_4542983, 29);
			return true;
		}
		else
		{
			return false;
		}
	}

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_20813.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_5(0) == true)
			return false;

	if (Global_20779 == 1)
		return false;

	if (Global_20813.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!unk_0xF40767E41852FB72(Global_20810))
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20813.f_1 < 4)
			{
				func_18("cellphone_flashhand");
			
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
					Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				unk_0xFD49725F3FE7EE13("cellphone_flashhand");
			}
		}
	}

	while (!Global_20795)
	{
		SYSTEM::WAIT(0);
	}

	func_20();
	func_15();

	if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
	{
		Global_9289 = 0;
		Global_20813.f_1 = 7;
		func_18(&(Global_8690[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
				Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
			Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CELLPHONE);
	
		unk_0xFD49725F3FE7EE13(&(Global_8690[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_15() // Position - 0x9DE
{
	if (Global_79248 == false)
	{
		Global_8690[14 /*15*/].f_4 = -99;
		Global_8690[4 /*15*/].f_4 = -99;
	
		if (Global_2695946)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA62
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8690[iParam0 /*15*/], sParam1, 16);
	Global_8690[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8690[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8690[iParam0 /*15*/].f_9 = unk_0x70E57E9927B6BA58(sParam3);
	Global_8690[iParam0 /*15*/].f_10 = iParam4;
	Global_8690[iParam0 /*15*/].f_11 = iParam5;
	Global_8690[iParam0 /*15*/].f_12 = iParam6;
	Global_8690[iParam0 /*15*/].f_13 = iParam7;
	Global_8690[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8690[iParam0 /*15*/].f_12 == 0)
		Global_8690[iParam0 /*15*/].f_12 = 0;

	if (Global_8690[iParam0 /*15*/].f_13 == 0)
		Global_8690[iParam0 /*15*/].f_13 = 0;

	if (Global_8690[iParam0 /*15*/].f_14 == 0)
		Global_8690[iParam0 /*15*/].f_14 = 0;

	return;
}

BOOL func_17(int iParam0) // Position - 0xB18
{
	return Global_43922 == iParam0;
}

void func_18(char* sParam0) // Position - 0xB26
{
	unk_0x97A5024CE91641F1(sParam0);

	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xB46
{
	if (func_17(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[0 /*29*/])
				Global_20813 = CHAR_MICHAEL;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[1 /*29*/])
				Global_20813 = CHAR_FRANKLIN;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[2 /*29*/])
				Global_20813 = CHAR_TREVOR;
			else
				Global_20813 = CHAR_MICHAEL;
	}
	else
	{
		Global_20813 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20813 == _CHAR_NULL)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_79248)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_20813 > CHAR_MULTIPLAYER)
			Global_20813 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_20() // Position - 0xBE8
{
	int i;
	int num;
	eCharacter character;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8690[i /*15*/].f_4 = -99;
	}

	if (Global_79248 == false)
	{
		num = 0;
	
		while (character < _CHAR_DUMMY_1)
		{
			if (func_22(character, Global_20813) == 1)
				num = 1;
		
			character = character + 1;
		}
	
		func_16(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43922 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8688 == 0)
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 0;
			Global_8689 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 1;
			Global_8689 = 42;
		}
	
		if (num == 1)
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_89 == true)
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_88 == 1)
			func_16(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_16(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == true)
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_16(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542983, 4) == true)
			if (Global_1836171)
				func_16(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 20) == true)
				func_16(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 22) == true)
				func_16(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 26) == true)
				if (func_21())
					func_16(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_16(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false && IS_BIT_SET(Global_4542983, 20) == false && IS_BIT_SET(Global_4542983, 22) == false && IS_BIT_SET(Global_4542983, 26) == false)
			if (func_21())
				func_16(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_16(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_21() // Position - 0x111A
{
	if (Global_79248)
		if (Global_1836571 || Global_1836572 == 1)
			return true;

	return false;
}

int func_22(eCharacter echParam0, eCharacter echParam1) // Position - 0x1141
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_19[echParam1];
}

void func_23(int iParam0) // Position - 0x116B
{
	if (func_27())
		return;

	if (Global_21025)
		if (func_26())
			func_25(true, true);
		else
			func_25(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_24())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_24() // Position - 0x11F5
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_25(BOOL bParam0, BOOL bParam1) // Position - 0x121C
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_21025 = true;
		
			if (bParam1)
				unk_0x78C4EBB0251847E2(&Global_20750);
		
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20741);
		}
	}
	else if (Global_21025 == true)
	{
		Global_21025 = false;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
	
		if (bParam1)
			unk_0x6B7EA0158D00C600(Global_20750);
		else
			unk_0x6B7EA0158D00C600(Global_20741);
	}

	return;
}

BOOL func_26() // Position - 0x1290
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_27() // Position - 0x129E
{
	return IS_BIT_SET(Global_1956030, 19);
}

BOOL func_28() // Position - 0x12AD
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

int func_29() // Position - 0x12C9
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return 1;

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x12E3
{
	func_31();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_31() // Position - 0x12FC
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_10(character) && !func_17(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_10(Global_114370.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x13F9
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1436
{
	if (func_10(character))
		return func_34(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_34(eCharacter echParam0) // Position - 0x145B
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_35(int iParam0) // Position - 0x146A
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_99.f_58[iParam0];
}

BOOL func_36(int iParam0) // Position - 0x1497
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

int func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x14C3
{
	int num;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam2 < 3)
		if (IS_BIT_SET(iParam1, iParam2))
			return 0;

	if (iParam1 < 1 || iParam1 > 7)
		return 0;

	if (iParam4 <= 0)
		return 0;

	if (Global_114370.f_7691.f_650 < CHAR_DAVE)
	{
		num = iParam0;
	
		if (Global_114370.f_7691.f_911 == num)
			Global_114370.f_7691.f_911 = -1;
	
		num.f_1 = 0;
		num.f_6 = iParam2;
		num.f_2 = iParam1;
		num.f_14 = iParam3;
		num.f_3 = iParam6;
		num.f_7 = -1;
		num.f_8 = 0;
		num.f_9 = -1;
		num.f_4 = unk_0x1DD05E817C89C737() + iParam4;
		num.f_9 = iParam5;
		num.f_10 = -1;
		num.f_11 = -1;
		unk_0x0B0C9A0F9AAEB7F0(&(num.f_1), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(num.f_1), 6);
		Global_114370.f_7691.f_199[Global_114370.f_7691.f_650 /*15*/] = { num };
		Global_114370.f_7691.f_650 = Global_114370.f_7691.f_650 + 1;
		return 1;
	}

	return 0;
}

BOOL func_38(int iParam0) // Position - 0x15C6
{
	eCharacter i;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_136; i = i + 1)
	{
		if (Global_114370.f_7691[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_650; i = i + 1)
	{
		if (Global_114370.f_7691.f_199[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_764; i = i + 1)
	{
		if (Global_114370.f_7691.f_651[i /*14*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_866; i = i + 1)
	{
		if (Global_114370.f_7691.f_765[i /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_39() // Position - 0x16C2
{
	Global_101431 = true;
	return;
}

void func_40(int iParam0) // Position - 0x16CF
{
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 161 || iParam0 == 202 || iParam0 == 201 || iParam0 == 162)
		return;

	Global_44474[iParam0] = unk_0x1DD05E817C89C737();
	return;
}

void func_41() // Position - 0x1724
{
	Global_44473 = unk_0x1DD05E817C89C737();
	return;
}

int func_42(int iParam0) // Position - 0x1733
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], num2))
		return 0;

	unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_9088.f_99.f_219[num], num2);
	return 1;
}

void func_43() // Position - 0x178A
{
	func_44(-1615086084);
	func_44(-1989308064);
	func_44(-1970925435);
	func_44(-1060930305);
	func_44(-1817481777);
	Global_8688 = 0;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_44(int iParam0) // Position - 0x17D6
{
	eCharacter i;
	int num;

	num = 0;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_136; i = i + 1)
	{
		if (Global_114370.f_7691[i /*15*/] == iParam0)
		{
			if (Global_44469 != i)
			{
				func_55(i);
				func_48(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_48(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_650; i = i + 1)
	{
		if (Global_114370.f_7691.f_199[i /*15*/] == iParam0)
		{
			func_47(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_764; i = i + 1)
	{
		if (Global_114370.f_7691.f_651[i /*14*/] == iParam0)
		{
			func_46(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_866; i = i + 1)
	{
		if (Global_114370.f_7691.f_765[i /*10*/] == iParam0)
		{
			func_45(i);
			num = 1;
		}
	}

	return num;
}

void func_45(eCharacter echParam0) // Position - 0x18FD
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114370.f_7691.f_866)
		return;

	if (Global_114370.f_7691.f_866 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114370.f_7691.f_866 - 2; i = i + 1)
		{
			Global_114370.f_7691.f_765[i /*10*/] = { Global_114370.f_7691.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114370.f_7691.f_866 > CHAR_MICHAEL)
	{
		Global_114370.f_7691.f_765[Global_114370.f_7691.f_866 - 1 /*10*/] = { unk };
		Global_114370.f_7691.f_866 = Global_114370.f_7691.f_866 - 1;
	}

	return;
}

void func_46(eCharacter echParam0) // Position - 0x19B6
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114370.f_7691.f_764)
		return;

	if (Global_114370.f_7691.f_764 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114370.f_7691.f_764 - 2; i = i + 1)
		{
			Global_114370.f_7691.f_651[i /*14*/] = { Global_114370.f_7691.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114370.f_7691.f_764 > CHAR_MICHAEL)
	{
		Global_114370.f_7691.f_651[Global_114370.f_7691.f_764 - 1 /*14*/] = { unk };
		Global_114370.f_7691.f_764 = Global_114370.f_7691.f_764 - 1;
	}

	func_9(CHAR_MICHAEL);
	func_9(CHAR_FRANKLIN);
	func_9(CHAR_TREVOR);
	return;
}

void func_47(int iParam0) // Position - 0x1A7E
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_650; i = i + 1)
	{
		if (Global_114370.f_7691.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_114370.f_7691.f_650 - 2; j = j + 1)
			{
				Global_114370.f_7691.f_199[j /*15*/] = { Global_114370.f_7691.f_199[j + 1 /*15*/] };
			}
		
			Global_114370.f_7691.f_199[Global_114370.f_7691.f_650 - 1 /*15*/] = { unk };
			Global_114370.f_7691.f_650 = Global_114370.f_7691.f_650 - 1;
			return;
		}
	}

	return;
}

void func_48(int iParam0) // Position - 0x1B2B
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_49(Global_114370.f_7691.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_114370.f_7691.f_198 - 2; j = j + 1)
			{
				Global_114370.f_7691.f_137[j /*15*/] = { Global_114370.f_7691.f_137[j + 1 /*15*/] };
			}
		
			Global_114370.f_7691.f_137[Global_114370.f_7691.f_198 - 1 /*15*/] = { unk };
			Global_114370.f_7691.f_198 = Global_114370.f_7691.f_198 - 1;
			return;
		}
	}

	return;
}

int func_49(eCharacter echParam0) // Position - 0x1BE7
{
	eCharacter character;

	if (Global_118[echParam0 /*10*/].f_8 != 178)
	{
		if (func_22(echParam0, Global_20813) == 1)
		{
			func_54(echParam0, Global_20813, 0);
		
			if (func_53(echParam0, Global_20813) == 0)
			{
				character = Global_20813;
				func_50(echParam0, character);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_50(eCharacter echParam0, eCharacter echParam1) // Position - 0x1C3D
{
	eCharacter character;

	if (Global_118[echParam0 /*10*/].f_8 != 178)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_52(echParam0, character, 0);
			func_51(echParam0, character, 0);
		}
	}

	return;
}

void func_51(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1C72
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_52(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1CB7
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_53(eCharacter echParam0, eCharacter echParam1) // Position - 0x1CFC
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_24[echParam1];
}

void func_54(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1D26
{
	Global_2139[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

void func_55(eCharacter echParam0) // Position - 0x1D57
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114370.f_7691.f_136)
		return;

	num = Global_114370.f_7691[echParam0 /*15*/].f_2;

	if (Global_114370.f_7691.f_136 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114370.f_7691.f_136 - 2; i = i + 1)
		{
			Global_114370.f_7691[i /*15*/] = { Global_114370.f_7691[i + 1 /*15*/] };
		}
	}

	if (Global_114370.f_7691.f_136 > CHAR_MICHAEL)
	{
		Global_114370.f_7691[Global_114370.f_7691.f_136 - 1 /*15*/] = { unk };
		Global_114370.f_7691.f_136 = Global_114370.f_7691.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_9(i);
	}

	return;
}

