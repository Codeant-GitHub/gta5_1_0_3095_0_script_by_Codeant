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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 15;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
	var unk4;

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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	func_35(29);

	if (unk_0x96CFB880BAC634CE(210))
		func_34();

	iLocal_35 = 0;
	func_33(&uLocal_36);
	func_32(&uLocal_36, 1701.7803f, 3225.1482f, 40.0202f);
	func_32(&uLocal_36, 1678.909f, 3287.6023f, 39.9648f);
	func_32(&uLocal_36, 1710.4376f, 3326.4993f, 40.1797f);
	func_32(&uLocal_36, 1738.8787f, 3335.25f, 40.1493f);
	func_32(&uLocal_36, 1768.3873f, 3312.1008f, 40.2875f);
	func_32(&uLocal_36, 1819.2413f, 3225.4495f, 42.9019f);
	func_31(&uLocal_36);

	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (func_23())
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						unk4 = { 1749.71f, 3267.83f, 40.24f };
					
						if (func_22(unk, unk4, 75f))
							if (func_21(&uLocal_36, unk))
								if (unk.f_2 > 39f && unk.f_2 < 43f)
									iLocal_35 = 1;
								else
									SYSTEM::WAIT(100);
							else
								SYSTEM::WAIT(100);
						else
							SYSTEM::WAIT(1500);
					}
				}
				else
				{
					SYSTEM::WAIT(1500);
				}
				break;
		
			case 1:
				func_2();
				break;
		
			case 2:
				func_1(29);
				func_34();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

int func_1(int iParam0) // Position - 0x1D9
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

void func_2() // Position - 0x230
{
	func_6(-815326385);
	func_3("SHI_T_SANDY_2" /*Planes you purchase from websites or that you land inside will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~~n~Ground vehicles too large for a garage will also be stored here.*/, 0, 0, -1, 10000, 7, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_3("SHI_T_SANDY_3" /*Helicopters purchased from websites or that you land on the helipad will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~*/, 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_35 = 2;
	return;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x26B
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_4(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x28C
{
	int i;

	if (unk_0x1B79E937E91F40C3(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_114370.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(&Global_114370.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_114370.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = unk_0x1DD05E817C89C737() + iParam3;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = unk_0x1DD05E817C89C737() + iParam3 + iParam4;
		else
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_114370.f_20413.f_145 = Global_114370.f_20413.f_145 + 1;
		func_5();
	}

	return;
}

void func_5() // Position - 0x45F
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114370.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_114370.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 0))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[0])
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 1))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[1])
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 2))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[2])
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_6(int iParam0) // Position - 0x576
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_114370.f_7691.f_136; i = i + 1)
	{
		if (Global_114370.f_7691[i /*15*/] == iParam0)
		{
			if (Global_44469 != i)
			{
				func_20(i);
				func_12(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_12(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114370.f_7691.f_650; i = i + 1)
	{
		if (Global_114370.f_7691.f_199[i /*15*/] == iParam0)
		{
			func_11(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114370.f_7691.f_764; i = i + 1)
	{
		if (Global_114370.f_7691.f_651[i /*14*/] == iParam0)
		{
			func_8(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_114370.f_7691.f_866; i = i + 1)
	{
		if (Global_114370.f_7691.f_765[i /*10*/] == iParam0)
		{
			func_7(i);
			num = 1;
		}
	}

	return num;
}

void func_7(int iParam0) // Position - 0x69D
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114370.f_7691.f_866)
		return;

	if (Global_114370.f_7691.f_866 > 1)
	{
		for (i = iParam0; i <= Global_114370.f_7691.f_866 - 2; i = i + 1)
		{
			Global_114370.f_7691.f_765[i /*10*/] = { Global_114370.f_7691.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114370.f_7691.f_866 > 0)
	{
		Global_114370.f_7691.f_765[Global_114370.f_7691.f_866 - 1 /*10*/] = { unk };
		Global_114370.f_7691.f_866 = Global_114370.f_7691.f_866 - 1;
	}

	return;
}

void func_8(int iParam0) // Position - 0x756
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114370.f_7691.f_764)
		return;

	if (Global_114370.f_7691.f_764 > 1)
	{
		for (i = iParam0; i <= Global_114370.f_7691.f_764 - 2; i = i + 1)
		{
			Global_114370.f_7691.f_651[i /*14*/] = { Global_114370.f_7691.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114370.f_7691.f_764 > 0)
	{
		Global_114370.f_7691.f_651[Global_114370.f_7691.f_764 - 1 /*14*/] = { unk };
		Global_114370.f_7691.f_764 = Global_114370.f_7691.f_764 - 1;
	}

	func_9(CHAR_MICHAEL);
	func_9(CHAR_FRANKLIN);
	func_9(CHAR_TREVOR);
	return;
}

void func_9(eCharacter echParam0) // Position - 0x81E
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_10(echParam0))
		return;

	for (i = 0; i < Global_114370.f_7691.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_7691[i /*15*/].f_2, echParam0))
			if (Global_114370.f_7691[i /*15*/].f_3 > num)
				num = Global_114370.f_7691[i /*15*/].f_3;
	}

	for (j = 0; j < Global_114370.f_7691.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114370.f_7691.f_651[j /*14*/].f_2, echParam0))
			if (Global_114370.f_7691.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114370.f_7691.f_919[echParam0] = num;
	return;
}

BOOL func_10(eCharacter echParam0) // Position - 0x8DC
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_11(int iParam0) // Position - 0x8E8
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114370.f_7691.f_650; i = i + 1)
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

void func_12(int iParam0) // Position - 0x995
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_13(Global_114370.f_7691.f_137[i /*15*/].f_6);
		
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

int func_13(int iParam0) // Position - 0xA51
{
	eCharacter character;

	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (func_19(iParam0, Global_20813) == 1)
		{
			func_18(iParam0, Global_20813, 0);
		
			if (func_17(iParam0, Global_20813) == 0)
			{
				character = Global_20813;
				func_14(iParam0, character);
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

void func_14(int iParam0, eCharacter echParam1) // Position - 0xAA7
{
	eCharacter character;

	if (Global_118[iParam0 /*10*/].f_8 != 178)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_16(iParam0, character, 0);
			func_15(iParam0, character, 0);
		}
	}

	return;
}

void func_15(int iParam0, eCharacter echParam1, int iParam2) // Position - 0xADC
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[iParam0 /*29*/].f_24[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114370.f_28053[iParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_16(int iParam0, eCharacter echParam1, int iParam2) // Position - 0xB21
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[iParam0 /*29*/].f_12[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114370.f_28053[iParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_17(int iParam0, eCharacter echParam1) // Position - 0xB66
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[iParam0 /*29*/].f_24[echParam1];
}

void func_18(int iParam0, eCharacter echParam1, int iParam2) // Position - 0xB90
{
	Global_2139[iParam0 /*29*/].f_19[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114370.f_28053[iParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_19(int iParam0, eCharacter echParam1) // Position - 0xBC1
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[iParam0 /*29*/].f_19[echParam1];
}

void func_20(eCharacter echParam0) // Position - 0xBEB
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < 0 || echParam0 >= Global_114370.f_7691.f_136)
		return;

	num = Global_114370.f_7691[echParam0 /*15*/].f_2;

	if (Global_114370.f_7691.f_136 > 1)
	{
		for (i = echParam0; i <= Global_114370.f_7691.f_136 - 2; i = i + 1)
		{
			Global_114370.f_7691[i /*15*/] = { Global_114370.f_7691[i + 1 /*15*/] };
		}
	}

	if (Global_114370.f_7691.f_136 > 0)
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

BOOL func_21(var uParam0, float fParam1, var uParam2, var uParam3) // Position - 0xCC3
{
	BOOL flag;
	int num;
	int num2;

	uParam0->f_46 < 3;
	flag = false;
	num = 0;
	num2 = uParam0->f_46 - 1;

	while (num < uParam0->f_46)
	{
		if (uParam0->[num /*3*/].f_1 < fParam1.f_1 && uParam0->[num2 /*3*/].f_1 >= fParam1.f_1 || uParam0->[num2 /*3*/].f_1 < fParam1.f_1 && uParam0->[num /*3*/].f_1 >= fParam1.f_1)
			if (uParam0->[num /*3*/] + (((fParam1.f_1 - uParam0->[num /*3*/].f_1) / (uParam0->[num2 /*3*/].f_1 - uParam0->[num /*3*/].f_1)) * (uParam0->[num2 /*3*/] - uParam0->[num /*3*/])) < fParam1)
				flag = !flag;
	
		num2 = num;
		num = num + 1;
	}

	return flag;
}

BOOL func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0xD7F
{
	float num;

	num = { uParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_23() // Position - 0xDA9
{
	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		return false;

	if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_TREVOR)
		return false;

	if (Global_32831)
		return false;

	if (Global_64032)
		return false;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			return false;

	if (unk_0xFD216000DC314A92())
		return false;

	if (unk_0x3555462DB47B7AB1())
		return false;

	if (func_24())
		return false;

	return true;
}

BOOL func_24() // Position - 0xE1F
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xE39
{
	func_26();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_26() // Position - 0xE52
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_10(character) && !func_27(14) || Global_113320)
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

BOOL func_27(int iParam0) // Position - 0xF4F
{
	return Global_43922 == iParam0;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xF5D
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xF9A
{
	if (func_10(character))
		return func_30(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_30(eCharacter echParam0) // Position - 0xFBF
{
	return Global_2139[echParam0 /*29*/];
}

void func_31(var uParam0) // Position - 0xFCE
{
	int i;
	float num;

	uParam0->f_51 == 0;
	uParam0->f_46 < 3;

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		uParam0->f_47 = { uParam0->f_47 + uParam0->[i /*3*/] };
	}

	uParam0->f_47 = { uParam0->f_47 / F2V(SYSTEM::TO_FLOAT(i)) };

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		num = SYSTEM::VDIST2(uParam0->f_47, uParam0->[i /*3*/]);
	
		if (num > uParam0->f_50)
			uParam0->f_50 = num;
	}

	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
	return;
}

void func_32(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x106E
{
	uParam0->f_51 == 0;
	uParam0->f_46 >= 15;
	uParam0->[uParam0->f_46 /*3*/] = { fParam1 };
	uParam0->f_46 = uParam0->f_46 + 1;
	return;
}

void func_33(var uParam0) // Position - 0x109F
{
	uParam0->f_51;
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
	return;
}

void func_34() // Position - 0x10C6
{
	unk_0x97620981EC3F7099();
	unk_0x2DB5A63C4A5800E5();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_35(int iParam0) // Position - 0x10DA
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

