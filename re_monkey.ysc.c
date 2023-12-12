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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	BOOL bLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	char* sLocal_71 = 0;
	char* sLocal_72 = 0;
	char* sLocal_73 = 0;
	char* sLocal_74 = 0;
	char* sLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_49 = { -336.61462f, -93.668076f, 46.0005f };
	fLocal_52 = 256.1257f;
	fLocal_56 = 0f;
	uLocal_67 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_71 = "scr_lamgraff_paint_spray";
	sLocal_72 = "switch@franklin@lamar_tagging_wall";
	sLocal_73 = "lamar_tagging_wall_loop_lamar";
	sLocal_74 = "lamar_tagging_wall_exit_lamar";
	sLocal_75 = "lamar_tagging_exit_loop_lamar";
	uLocal_76 = { 0f, 0f, 0f };

	if (unk_0x96CFB880BAC634CE(11))
		func_150();

	func_85(uScriptParam_0.f_1[0 /*3*/]);

	while (true)
	{
		func_71();
	
		switch (iLocal_45)
		{
			case 0:
				if (func_55())
					func_52();
				break;
		
			case 1:
				if (func_1())
					func_52();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1() // Position - 0x119
{
	if (iLocal_46 == 0)
	{
		return true;
	}
	else if (iLocal_46 == 1)
	{
		func_51();
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
			func_49(unk_0x4A8C381C258A124D(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
	
		unk_0x64BB72494B9DF6DC(0);
		unk_0xD815D4BD1AE9E85A(0, 1065353216);
		unk_0x10B228D2FDB7AF16(250);
		return true;
	}
	else if (iLocal_46 == 2)
	{
		switch (iLocal_47)
		{
			case 0:
				func_36(-899711929);
				func_31();
				func_5(-1, 0);
				func_2();
				func_150();
				break;
		}
	}

	return false;
}

void func_2() // Position - 0x1AE
{
	func_3();
	return;
}

int func_3() // Position - 0x1BB
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x206
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

void func_5(int iParam0, int iParam1) // Position - 0x22E
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
	
		if (!func_26(51))
		{
			func_16("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
	
		if (func_14(iParam0))
			Global_114370.f_24998.f_2 = 3;
	
		if (func_13(iParam0, iParam1) != 322)
			func_7(func_13(iParam0, iParam1), uLocal_42, uLocal_42.f_1);
	
		Global_114358 = iParam1;
	
		if (Global_114356 == 0)
			if (Global_114359 == 1 || Global_114359 == 5 || Global_114359 == 11 || Global_114359 == 25)
				func_6(2);
			else if (Global_114359 == 26 || Global_114359 == 8 || Global_114359 == 17)
				func_6(7);
			else
				func_6(1);
	}

	return;
}

void func_6(int iParam0) // Position - 0x331
{
	Global_114356 = iParam0;
	return;
}

void func_7(int iParam0, var uParam1, var uParam2) // Position - 0x33F
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
	}

	flag = true;

	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			unk_0x8DD7F37773EBD5B9(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_8();

	return;
}

void func_8() // Position - 0x425
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int num9;

	num = 0;
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114370.f_10197[num /*12*/].f_5 == true)
		{
			switch (Global_114370.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_114106 = Global_114106 + 1;
					num2 = num2 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114107 = Global_114107 + 1;
					num3 = num3 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114108 = Global_114108 + 1;
					num4 = num4 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114109 = Global_114109 + 1;
					num5 = num5 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114110 = Global_114110 + 1;
					num6 = num6 + (Global_114370.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114111 = Global_114111 + 1;
					num7 = num7 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114112 = Global_114112 + 1;
					num8 = num8 + Global_114370.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114089 > 0)
		if (Global_114106 == Global_114089)
			num2 = 55f;

	if (Global_114090 > 0)
		if (Global_114107 == Global_114090)
			num3 = 10f;

	if (Global_114091 > 0)
		if (Global_114108 == Global_114091)
			num4 = 0f;

	if (Global_114092 > 0)
		if (Global_114109 == Global_114092)
			num5 = 10f;

	if (Global_114093 > 0)
	{
		if (Global_114110 == Global_114093 || (Global_114093 * 10) / Global_114110 < 41 || Global_114110 > Global_114096 || Global_114110 == Global_114096)
		{
			if (!IS_BIT_SET(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					unk_0x8DD7F37773EBD5B9(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_114370.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114094 > 0)
		if (Global_114111 == Global_114094)
			num7 = 15f;

	if (Global_114095 > 0)
		if (Global_114112 == Global_114095)
			num8 = 5f;

	Global_114370.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
		num9 = Global_114096;
	else
		num9 = Global_114110;

	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_COMPLETED"), num9, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_COMPLETED"), Global_114112 + Global_114111, 1);
	unk_0x1164A75E490C27B6(joaat("NUM_MISC_AVAILABLE"), Global_114095 + Global_114094, 1);
	Global_114113 = (Global_114106 * 100) / Global_114089;
	Global_114115 = ((Global_114108 + Global_114107) * 100) / (Global_114091 + Global_114090);
	Global_114114 = ((Global_114109 + num9) * 100) / (Global_114092 + Global_114096);
	Global_114116 = ((Global_114111 + Global_114112) * 100) / (Global_114094 + Global_114095);
	unk_0x4F8678C02360C3D2(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10197.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_STORY_MISSIONS"), Global_114113, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, 1);
	unk_0x1164A75E490C27B6(joaat("PERCENT_ODDJOBS"), Global_114115, 1);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
		func_10(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));

	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79248)
		{
			if (func_9() == 2 == false && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
					Global_114104 = false;
			
				if (!Global_64038)
					func_3();
			}
		}
	}

	return;
}

int func_9() // Position - 0x8E3
{
	return Global_32828;
}

int func_10(int iParam0, int iParam1) // Position - 0x8EE
{
	int num;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	num = unk_0xB3E8CE9ABB5AD331(iParam0);

	if (iParam1 > num)
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);

	return 0;
}

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, Player plParam2) // Position - 0x93F
{
	if (plParam2 == -1)
		plParam2 = func_12();

	unk_0xA595AA1819B05EA0(iParam0, iParam1, plParam2);
	return;
}

Player func_12() // Position - 0x95D
{
	return Global_1574925;
}

int func_13(int iParam0, int iParam1) // Position - 0x969
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_14(int iParam0) // Position - 0xCDD
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_15(int iParam0) // Position - 0xD0C
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_20413.f_150[i], num);

	return;
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xD4E
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_17(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xD6F
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
		func_18();
	}

	return;
}

void func_18() // Position - 0xF42
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

int func_19() // Position - 0x1059
{
	func_20();

	switch (Global_114370.f_2366.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

void func_20() // Position - 0x109F
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_22(character) && !func_21(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_22(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_21(int iParam0) // Position - 0x119C
{
	return Global_43922 == iParam0;
}

BOOL func_22(eCharacter echParam0) // Position - 0x11AA
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x11B6
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x11F3
{
	if (func_22(character))
		return func_25(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_25(eCharacter echParam0) // Position - 0x1218
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_26(int iParam0) // Position - 0x1227
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114370.f_20413.f_150[i], num);

	return false;
}

void func_27(int iParam0, int iParam1) // Position - 0x1267
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_24998.f_8[iParam0], iParam1);
	return;
}

int func_28(int iParam0) // Position - 0x1282
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_29() // Position - 0x1333
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x1AF90EB93E0012D6(), 64);
	num = func_30(unk);
	return num;
}

int func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1350
{
	switch (unk_0x70E57E9927B6BA58(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

void func_31() // Position - 0x152A
{
	func_32(1751306471, 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
	return;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x154E
{
	int num;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_114370.f_7691.f_764 < CHAR_MIKE_FRANK_CONF)
	{
		num = iParam0;
		num.f_3 = func_34(iParam1);
		num.f_4 = unk_0x1DD05E817C89C737() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_13 = iParam10;
		unk_0x8744D2E3FC95740E(&(num.f_1), 0);
		Global_114370.f_7691.f_651[Global_114370.f_7691.f_764 /*14*/] = { num };
		Global_114370.f_7691.f_764 = Global_114370.f_7691.f_764 + 1;
		func_33(CHAR_MICHAEL);
		func_33(CHAR_FRANKLIN);
		func_33(CHAR_TREVOR);
		return 1;
	}

	return 0;
}

void func_33(eCharacter echParam0) // Position - 0x1666
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_22(echParam0))
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

int func_34(int iParam0) // Position - 0x1724
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

int func_35() // Position - 0x178E
{
	int num;

	num = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());

	switch (num)
	{
		case joaat("Player_Zero"):
			return 1;
	
		case joaat("Player_One"):
			return 2;
	
		case joaat("Player_Two"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_36(int iParam0) // Position - 0x17C6
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
				func_48(i);
				func_40(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_40(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_650; i = i + 1)
	{
		if (Global_114370.f_7691.f_199[i /*15*/] == iParam0)
		{
			func_39(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_764; i = i + 1)
	{
		if (Global_114370.f_7691.f_651[i /*14*/] == iParam0)
		{
			func_38(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_866; i = i + 1)
	{
		if (Global_114370.f_7691.f_765[i /*10*/] == iParam0)
		{
			func_37(i);
			num = 1;
		}
	}

	return num;
}

void func_37(eCharacter echParam0) // Position - 0x18ED
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

void func_38(eCharacter echParam0) // Position - 0x19A6
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

	func_33(CHAR_MICHAEL);
	func_33(CHAR_FRANKLIN);
	func_33(CHAR_TREVOR);
	return;
}

void func_39(int iParam0) // Position - 0x1A6E
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

void func_40(int iParam0) // Position - 0x1B1B
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_114370.f_7691.f_198; i = i + 1)
	{
		if (Global_114370.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_41(Global_114370.f_7691.f_137[i /*15*/].f_6);
		
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

int func_41(eCharacter echParam0) // Position - 0x1BD7
{
	eCharacter character;

	if (Global_118[echParam0 /*10*/].f_8 != 178)
	{
		if (func_47(echParam0, Global_20813) == 1)
		{
			func_46(echParam0, Global_20813, 0);
		
			if (func_45(echParam0, Global_20813) == 0)
			{
				character = Global_20813;
				func_42(echParam0, character);
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

void func_42(eCharacter echParam0, eCharacter echParam1) // Position - 0x1C2D
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
			func_44(echParam0, character, 0);
			func_43(echParam0, character, 0);
		}
	}

	return;
}

void func_43(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1C62
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_44(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1CA7
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2139[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_45(eCharacter echParam0, eCharacter echParam1) // Position - 0x1CEC
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_24[echParam1];
}

void func_46(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1D16
{
	Global_2139[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114370.f_28053[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_47(eCharacter echParam0, eCharacter echParam1) // Position - 0x1D47
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_19[echParam1];
}

void func_48(eCharacter echParam0) // Position - 0x1D71
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
			func_33(i);
	}

	return;
}

void func_49(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x1E49
{
	unk_0xB2BD5837A8D3CEDA(uParam0, fParam1, 1, 0, 0, 1);
	unk_0x5C96CEA06531AB03(uParam0, fParam4);
	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x1E67
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

void func_51() // Position - 0x1E88
{
	int i;
	int num;

	for (i = 0; i < 4; i = i + 1)
	{
		num = i;
	
		switch (num)
		{
			case 0:
				break;
		
			case 1:
				uLocal_62[num] = unk_0x4E55EAB577C13329(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, 1, 1, 0);
				unk_0x62C438C53BB57AFD(uLocal_62[num], -335.66f, -95.24f, 46.16f, 0, 0, 1);
				unk_0xCF39804E8C88080E(uLocal_62[num], -2.32f, 0.66f, -0.8f, 2, 1);
				break;
		
			case 2:
				uLocal_62[num] = unk_0x4E55EAB577C13329(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, 1, 1, 0);
				unk_0x62C438C53BB57AFD(uLocal_62[num], -336.04f, -94.9f, 46.02f, 0, 0, 1);
				unk_0xCF39804E8C88080E(uLocal_62[num], 0.01f, 3.85f, 2.72f, 2, 1);
				break;
		
			case 3:
				uLocal_62[num] = unk_0x4E55EAB577C13329(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, 1, 1, 0);
				unk_0x62C438C53BB57AFD(uLocal_62[num], -336.34f, -95.66f, 46.02f, 0, 0, 1);
				unk_0xCF39804E8C88080E(uLocal_62[num], -2.86f, 0.76f, 28.89f, 2, 1);
				break;
		}
	}

	return;
}

void func_52() // Position - 0x1FD9
{
	if (iLocal_46 == 2)
	{
		func_54();
		iLocal_47 = 0;
	}

	func_53();
	return;
}

void func_53() // Position - 0x1FF2
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 2;
			break;
	
		case 1:
			iLocal_46 = 2;
			break;
	
		case 2:
			iLocal_46 = 0;
			break;
	}

	return;
}

void func_54() // Position - 0x2025
{
	int num;

	num = iLocal_45 + 1;

	if (num >= 0 && num < 2)
		iLocal_45 = num;

	return;
}

BOOL func_55() // Position - 0x2047
{
	if (iLocal_46 == 0)
	{
		return true;
	}
	else if (iLocal_46 == 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
			func_49(unk_0x4A8C381C258A124D(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
	
		unk_0x64BB72494B9DF6DC(0);
		unk_0xD815D4BD1AE9E85A(0, 1065353216);
		unk_0x10B228D2FDB7AF16(250);
		return true;
	}
	else if (iLocal_46 == 2)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_48))
			if (unk_0x89568FA9A6BC0B4A(uLocal_48, 1))
				func_150();
		else if (iLocal_47 > 0)
			if (bLocal_54)
				return true;
			else
				func_150();
	
		switch (iLocal_47)
		{
			case 0:
				if (func_57())
				{
					func_51();
					iLocal_47 = iLocal_47 + 1;
				}
				break;
		
			case 1:
				if (func_56())
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_48))
					{
						if (unk_0x00926C3C4443B915(1106247680, 31086, 1061997773, 1060320051, 1048576000, 1090519040, 1051361018, 31086, 24818) == uLocal_48)
						{
							iLocal_81 = unk_0x1DD05E817C89C737() + 2000;
							iLocal_47 = iLocal_47 + 1;
						}
					}
				}
				break;
		
			case 2:
				if (iLocal_81 < unk_0x1DD05E817C89C737())
				{
					bLocal_54 = true;
					iLocal_47 = iLocal_47 + 1;
				}
				break;
		}
	}

	return false;
}

BOOL func_56() // Position - 0x2170
{
	if (Global_23202)
		return true;

	return false;
}

BOOL func_57() // Position - 0x2186
{
	if (unk_0xFC8BFE4B41177C22(uLocal_48))
	{
		return true;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(joaat("U_M_M_StreetArt_01"));
	
		if (unk_0x6252BC0DD8A320DB(joaat("U_M_M_StreetArt_01")))
		{
			uLocal_48 = unk_0xB1DBFEB95C0EFB88(26, joaat("U_M_M_StreetArt_01"), uLocal_49, fLocal_52, 1, 1);
			unk_0x55098D9E9AD58806(joaat("U_M_M_StreetArt_01"));
			uLocal_62[0] = unk_0x4E55EAB577C13329(joaat("prop_cs_spray_can"), uLocal_67, 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(uLocal_62[0], uLocal_48, unk_0x72F7E39FB49FC0BA(uLocal_48, 28422), 0f, -0.01f, -0.02f, uLocal_76, 1, 1, 0, 0, 2, 1, 0);
			unk_0x44FB298D6382876D(uLocal_48, 1);
			unk_0x0428AFDCAA63B06E(uLocal_48, 42, 1);
			iLocal_55 = func_68(uLocal_48, false, 145);
			func_58(true);
			unk_0x3CEA1FD137ACE2D9(uLocal_48, joaat("PLAYER"));
			unk_0x93956DF263A4A0DC(uLocal_48, 2.5f);
		}
	}

	return false;
}

int func_58(BOOL bParam0) // Position - 0x2248
{
	if (func_62())
	{
		Global_114360 = true;
		Global_114357 = unk_0x1DD05E817C89C737();
	
		if (func_14(Global_114359))
			func_59(0);
	
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_14(Global_114359))
			unk_0x2716F9D3A99349AB();
	
		return 1;
	}

	return 0;
}

void func_59(int iParam0) // Position - 0x229A
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_114370.f_24998.f_2 = Global_114370.f_24998.f_2 + 1;
					unk_0x0B0C9A0F9AAEB7F0(&Global_114366, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114366, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_114370.f_24998.f_3 = Global_114370.f_24998.f_3 + 1;
					unk_0x0B0C9A0F9AAEB7F0(&Global_114366, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114366, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_114370.f_24998.f_4 = Global_114370.f_24998.f_4 + 1;
					unk_0x0B0C9A0F9AAEB7F0(&Global_114366, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2375
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

char* func_61(int iParam0) // Position - 0x238C
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_62() // Position - 0x23CC
{
	switch (func_63(&Global_32888, 0, 5, false, unk_0x8F76B2250AC806FA()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_63(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2402
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98850.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_67(0))
			return 0;
	
		Global_43886 = Global_43886 + 1;
		*uParam0 = Global_43886;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23572.f_5 = 0;
	
		if (iParam2 != 5)
			unk_0xB1495D79F52B9EEE(8);
	
		Global_43922 = iParam2;
		Global_43884 = *uParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43883; i = i + 1)
			{
				if (Global_43889[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43884 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43883 == 8)
			return 0;
	
		Global_43886 = Global_43886 + 1;
		*uParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883 = Global_43883 + 1;
	
		if (iParam4 != 0)
			func_64(uParam0, iParam4);
	}

	return 2;
}

void func_64(var uParam0, int iParam1) // Position - 0x2539
{
	int i;

	if (Global_43883 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43883; i = i + 1)
	{
		if (Global_43889[i /*4*/] == *uParam0)
			Global_43889[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2588
{
	return func_66(iParam0, Global_43922);
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x2599
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

BOOL func_67(int iParam0) // Position - 0x277A
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

int func_68(var uParam0, BOOL bParam1, int iParam2) // Position - 0x279C
{
	int num;

	num = func_69(uParam0, !bParam1, false);

	if (iParam2 != 145 && unk_0xC450B06E5AAA0985(num) && unk_0x6BA487C862DB8DDF(&(Global_2139[iParam2 /*29*/].f_3)))
		unk_0x594D5D0D7071B0DE(num, &(Global_2139[iParam2 /*29*/].f_3));

	return num;
}

int func_69(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27E6
{
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return 0;

	num = unk_0x18E23E031A9B798F(uParam0);

	if (unk_0x55B80B6E7AB61270(uParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 1f : 1f);
	
		if (!bParam2)
			unk_0x6A52036D51C7E18E(num, bParam1);
		else
			unk_0x61183D6239A9D7B8(num, 2);
	}
	else if (unk_0x0101C509A6E67F99(uParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
		unk_0x6A52036D51C7E18E(num, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(uParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
	}

	return num;
}

var func_70(BOOL bParam0, var uParam1, var uParam2) // Position - 0x288A
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_71() // Position - 0x28A1
{
	func_72();

	if (!unk_0x173751E886F8E9AB() && iLocal_53 < 3)
		func_150();

	return;
}

void func_72() // Position - 0x28C2
{
	BOOL flag;
	BOOL flag2;
	Vector3 vector;
	var unk3;
	float num;
	var unk6;
	BOOL flag3;
	BOOL flag4;
	float num2;
	int num3;
	var unk9;
	var unk12;
	var unk15;
	int num4;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_48))
	{
		flag = _DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_48);
		flag2 = _DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D());
		vector = { unk_0xD1A6A821F5AC81DB(uLocal_48, 0) };
		num = 7.5f;
		unk6 = { num, num, num };
	
		if (flag2)
		{
			unk3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
			flag3 = unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0);
			flag4 = unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D());
		}
	
		if (iLocal_53 < 3)
			if (unk_0x398315D0C90DE6F6(vector, num, 0) || unk_0xE94C7FA27FEB00DD(vector - unk6, vector + unk6, 0))
				iLocal_53 = 3;
	
		switch (iLocal_53)
		{
			case 0:
				unk_0x80813AC549A1E8AE(sLocal_72);
			
				if (unk_0xE100DD4F82A51BDE(sLocal_72))
				{
					unk_0xAAA71DD7E9059338(uLocal_48, 1);
					unk_0x10425721983AE158(uLocal_48, sLocal_72, sLocal_73, 1000f, -8f, -1, 8193, 0, 0, 0, 0);
					iLocal_53 = iLocal_53 + 1;
				}
				break;
		
			case 1:
				if (func_83(joaat("SCRIPT_TASK_PLAY_ANIM")))
					iLocal_53 = 5;
			
				if (func_82(unk_0x4A8C381C258A124D(), uLocal_48, 35f))
				{
					unk_0xB5396F1FB088FE38(&uLocal_80);
					unk_0x10425721983AE158(0, sLocal_72, sLocal_74, 8f, -8f, -1, 8192, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, sLocal_72, sLocal_75, 8f, -2f, -1, 8193, 0, 0, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_80);
					unk_0x4BD42B0527065BB6(uLocal_48, uLocal_80);
					unk_0xD0557B139A542F12(&uLocal_80);
					unk_0x268BE77F77533D03(sLocal_72);
					iLocal_53 = iLocal_53 + 1;
				}
				break;
		
			case 2:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_53 = 5;
			
				if (flag4)
					num2 = 30f;
				else if (flag3)
					num2 = 17.5f;
				else
					num2 = 5f;
			
				if (flag && flag2 && func_82(unk_0x4A8C381C258A124D(), uLocal_48, num2))
					iLocal_53 = 3;
			
				if (bLocal_54)
					iLocal_53 = 3;
			
				if (func_81())
					iLocal_53 = 3;
			
				if (flag2 && func_80(unk3, vector))
					iLocal_53 = 3;
			
				func_78();
				break;
		
			case 3:
				if (func_73())
					iLocal_53 = iLocal_53 + 1;
				break;
		
			case 4:
				unk_0x1CA08719184AFC6F(uLocal_48, 8, 1);
				unk_0x1CA08719184AFC6F(uLocal_48, 32, 1);
				unk_0xB5396F1FB088FE38(&uLocal_80);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 800);
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 9999f, -1, 1, 0);
				unk_0x93C0674FC00824D0(uLocal_80);
				unk_0x4BD42B0527065BB6(uLocal_48, uLocal_80);
				unk_0xD0557B139A542F12(&uLocal_80);
				iLocal_53 = iLocal_53 + 1;
				break;
		
			case 5:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_53 = 5;
			
				if (!unk_0xCB5CAFF0A4A8B74B(uLocal_48) && SYSTEM::VDIST2(vector, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0)) > 2500f)
				{
					uLocal_79 = unk_0x120E577522852984(unk3, vector, 1, 0, 7);
					iLocal_53 = iLocal_53 + 1;
				}
				break;
		
			case 6:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_53 = 5;
			
				num4 = unk_0x0E7DD1EBCA8D2DE3(uLocal_79, &num3, &unk9, &unk12, &unk15);
			
				if (num4 == 2)
					if (num3 == 1)
						iLocal_53 = iLocal_53 + 1;
					else
						iLocal_53 = iLocal_53 - 1;
				else if (num4 == 0)
					iLocal_53 = iLocal_53 + 1;
				break;
		
			case 7:
				unk_0x734A9F4537A31459(&uLocal_48);
				break;
		}
	}
	else if (unk_0xFC8BFE4B41177C22(uLocal_48))
	{
		unk_0x5D7CD709B34C90F0(uLocal_48, 0);
	}

	return;
}

BOOL func_73() // Position - 0x2BE9
{
	var unk;
	var unk4;
	float num;
	int value;
	float num2;
	float num3;
	float num4;
	var unk7;

	unk = { -335.71f, -93.39f, 46f };
	unk4 = { -336.7188f, -93.5128f, 46f };

	switch (iLocal_58)
	{
		case 0:
			if (unk_0x13CCB1AD131C1082(uLocal_48, sLocal_72, sLocal_75, 3))
			{
				fLocal_56 = 0.349f;
				iLocal_57 = 900;
				uLocal_59 = { unk };
				iLocal_58 = 1;
			}
			else if (unk_0x13CCB1AD131C1082(uLocal_48, sLocal_72, sLocal_74, 3))
			{
				fLocal_56 = unk_0x82E64DE58A6B84A8(uLocal_48, sLocal_72, sLocal_74);
				fLocal_56 = func_77(fLocal_56, 0.2f, 0.349f);
			
				if (fLocal_56 != 0.2f)
				{
					num = (1f / (0.349f - 0.161f)) * SYSTEM::TO_FLOAT(900);
					iLocal_57 = SYSTEM::ROUND((fLocal_56 - 0.161f) * num);
					uLocal_59 = { unk_0xD1A6A821F5AC81DB(uLocal_48, 0) - { 1f, 0f, 0f } };
					iLocal_58 = 1;
				}
				else
				{
					iLocal_58 = 3;
				}
			}
			else
			{
				iLocal_58 = 3;
			}
			break;
	
		case 1:
			unk_0x5D7CD709B34C90F0(uLocal_48, 1);
			unk_0x10425721983AE158(uLocal_48, sLocal_72, sLocal_74, 4f, -8f, -1, 0, fLocal_56, 1, 0, 0);
			iLocal_81 = unk_0x1DD05E817C89C737();
			func_76(&iLocal_55);
			func_75();
		
			if (unk_0xFC8BFE4B41177C22(uLocal_62[0]))
				unk_0x837D67618BF89034(uLocal_62[0], 1, 1);
		
			iLocal_58 = iLocal_58 + 1;
			break;
	
		case 2:
			if (unk_0x13CCB1AD131C1082(uLocal_48, sLocal_72, sLocal_74, 3))
			{
				value = unk_0x1DD05E817C89C737() - iLocal_81;
				num2 = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(iLocal_57);
				num3 = fLocal_56 - ((fLocal_56 - 0.161f) * num2);
				num3 = func_77(num3, 0.161f, fLocal_56);
				unk_0x6D75623C644D6F83(uLocal_48, sLocal_72, sLocal_74, num3);
				num4 = num2 - 0.12f;
				num4 = func_77(num4, 0f, 0.8f);
				unk7 = { func_74(uLocal_59, unk4, num4) };
				unk_0xB2BD5837A8D3CEDA(uLocal_48, unk7, 0, 1, 0, 1);
			
				if (num3 == 0.161f)
				{
					unk_0x5D7CD709B34C90F0(uLocal_48, 0);
					return true;
				}
			}
			break;
	
		case 3:
			func_76(&iLocal_55);
			func_75();
		
			if (unk_0xFC8BFE4B41177C22(uLocal_62[0]))
				unk_0x837D67618BF89034(uLocal_62[0], 1, 1);
		
			return true;
	}

	return false;
}

Vector3 func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x2DF7
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

void func_75() // Position - 0x2E12
{
	if (iLocal_70 != 0)
	{
		unk_0x182120534CCF9023(iLocal_70, 0);
		iLocal_70 = 0;
	}

	return;
}

void func_76(var uParam0) // Position - 0x2E2A
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}

	return;
}

float func_77(float fParam0, float fParam1, float fParam2) // Position - 0x2E4A
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_78() // Position - 0x2E71
{
	float num;

	if (unk_0x13CCB1AD131C1082(uLocal_48, sLocal_72, sLocal_74, 3))
	{
		num = unk_0x82E64DE58A6B84A8(uLocal_48, sLocal_72, sLocal_74);
	
		if (num < 0.383793f)
			func_75();
		else if (num < 0.612112f)
			func_79();
		else if (num < 1f)
			func_75();
	}
	else if (unk_0x13CCB1AD131C1082(uLocal_48, sLocal_72, sLocal_75, 3))
	{
		num = unk_0x82E64DE58A6B84A8(uLocal_48, sLocal_72, sLocal_75);
	
		if (num < 0.1124f)
			func_75();
		else if (num < 0.5566f)
			func_79();
		else if (num < 0.7546f)
			func_75();
		else if (num < 0.9f)
			func_79();
		else if (num < 1f)
			func_75();
	}

	return;
}

void func_79() // Position - 0x2F32
{
	if (iLocal_70 == 0)
	{
		iLocal_70 = unk_0x62750FD2BDD8BD49(sLocal_71, uLocal_62[0], uLocal_76, uLocal_76, 1065353216, 0, 0, 0);
		unk_0x6154AB43546C6437(iLocal_70, 1f, 1f, 1f, 0);
		unk_0x1C53039135495CAE(iLocal_70, 0.2f);
	}

	return;
}

BOOL func_80(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2F72
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;

	num = unk_0x5F93A870D439E8B4(unk_0x259BE71D8A81D4FA());
	num2 = func_77(num / 14f, 0f, 1f);
	num3 = SYSTEM::VDIST(vParam0, vParam3);
	num4 = func_77(30f - num3, 0f, 30f) / 30f;
	num5 = num2 * num4;
	return num5 > 0.25f;
}

BOOL func_81() // Position - 0x2FCB
{
	return unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -334.46515f, -93.421715f, 48.573284f, -332.2641f, -82.78552f, 45.810303f, 3f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -329.1134f, -83.87273f, 45.79989f, -331.09372f, -88.05348f, 48.718784f, 3f, 0, 1, 0);
}

BOOL func_82(var uParam0, var uParam1, float fParam2) // Position - 0x302D
{
	float num;

	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xFC8BFE4B41177C22(uParam1))
	{
		num = fParam2 * fParam2;
		return SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(uParam0, 0), unk_0xD1A6A821F5AC81DB(uParam1, 0)) <= num;
	}

	return false;
}

BOOL func_83(int iParam0) // Position - 0x3069
{
	if (!func_84(uLocal_48, iParam0) && !func_84(uLocal_48, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
	{
		func_76(&iLocal_55);
		unk_0xD844F5E50DAB6FF7(uLocal_48, unk_0x4A8C381C258A124D(), 9999f, -1, 1, 0);
		return true;
	}

	return false;
}

BOOL func_84(var uParam0, int iParam1) // Position - 0x30AB
{
	int num;

	num = unk_0x9B5C1660CCDF7189(uParam0, iParam1);
	return num == 1 || num == 0;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x30CB
{
	if (func_89(uParam0))
		func_86(33);
	else
		func_150();

	unk_0x8003D3C0115A1035();
	return;
}

void func_86(int iParam0) // Position - 0x30EF
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	func_88(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_114356 = 0;
	func_87();
	return;
}

void func_87() // Position - 0x3125
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			unk_0xCCA6D8A84EE8C88A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)), 1);
	
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}

	return;
}

void func_88(int iParam0) // Position - 0x3162
{
	Global_114359 = iParam0;
	return;
}

BOOL func_89(var uParam0, var uParam1, var uParam2) // Position - 0x3170
{
	if (func_95(uParam0, 33, 0, false, false))
		if (func_94(58))
			if (func_91())
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
					return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x31A4
{
	var unk;

	if (Global_153246 == 2)
		return true;
	else if (Global_153246 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_91() // Position - 0x325C
{
	return func_92(func_93(), 5);
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x326D
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_32752[iParam0], iParam1);
}

int func_93() // Position - 0x328D
{
	int num;

	num = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());

	switch (num)
	{
		case joaat("Player_Zero"):
			return 21;
	
		case joaat("Player_One"):
			return 22;
	
		case joaat("Player_Two"):
			return 23;
	
		default:
		
	}

	return -1;
}

BOOL func_94(int iParam0) // Position - 0x32C8
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_18577[iParam0 /*6*/], 3);
}

BOOL func_95(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x32F3
{
	BOOL flag;
	Vector3 vector;
	eCharacter i;
	Vector3 vector2;
	int num;

	if (!Global_152957)
		return false;

	if (iParam3 == -1)
		iParam3 = func_29();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_42 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			vector = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		
			if (SYSTEM::VMAG2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_149())
				return false;
		}
	
		if (!Global_114370.f_9088)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_145())
			return false;
	
		if (func_144())
			return false;
	
		if (Global_114359 != -1)
			return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam6)
			if (vector.f_2 - uLocal_42.f_2 > 50f)
				return false;
	
		if (!func_136(iParam3))
			return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_135(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_135(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_134(iParam3, iParam4, 145))
				return false;
	
		if (!func_133(Global_114370.f_24998.f_43[iParam3]))
			return false;
	
		if (unk_0x1DD05E817C89C737() - Global_114361 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_131())
			return false;
	
		if (unk_0x3D2EB53CF281A77E())
			return false;
	
		if (unk_0x9FA91AA1AC724CD0())
			return false;
	
		if (!func_121(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_120(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
			if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(377.153f, -717.567f, 10.0536f) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(320.9934f, 265.2515f, 82.1221f) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_120(0, 0))
			return false;
	
		if (Global_32975)
			return false;
	
		if (func_136(30) && !func_120(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(vector, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector2 = { Global_114370.f_2366.f_539.f_2300[i /*3*/] };
				num = Global_114370.f_2366.f_539.f_2296[i];
			
				if (func_119(num))
					if (func_97(i))
						if (!func_96(vector2, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), vector2) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x368D
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_97(eCharacter echParam0) // Position - 0x36D4
{
	int num;

	num = Global_114370.f_2366.f_539.f_2296[echParam0];
	return func_98(num);
}

BOOL func_98(int iParam0) // Position - 0x36F5
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1) // Position - 0x3704
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_119(iParam0))
		return 0;

	func_100(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x3757
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3775
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_111(iParam0, iParam1))
	{
		num = func_110(iParam1);
		num2 = func_108(iParam0);
		num3 = func_108(iParam0) - func_108(iParam1);
		num4 = func_110(iParam0) - func_110(iParam1);
		num5 = func_107(iParam0) - func_107(iParam1);
		num6 = func_106(iParam0) - func_106(iParam1);
		num7 = func_105(iParam0) - func_105(iParam1);
		num8 = func_104(iParam0) - func_104(iParam1);
	}
	else
	{
		num = func_110(iParam0);
		num2 = func_108(iParam1);
		num3 = func_108(iParam1) - func_108(iParam0);
		num4 = func_110(iParam1) - func_110(iParam0);
		num5 = func_107(iParam1) - func_107(iParam0);
		num6 = func_106(iParam1) - func_106(iParam0);
		num7 = func_105(iParam1) - func_105(iParam0);
		num8 = func_104(iParam1) - func_104(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_103(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_102(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_102(float fParam0, float fParam1, float fParam2) // Position - 0x3976
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_103(int iParam0, int iParam1) // Position - 0x39B8
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_104(int iParam0) // Position - 0x3A5A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0) // Position - 0x3A6D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0) // Position - 0x3A80
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0) // Position - 0x3A93
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(int iParam0) // Position - 0x3AA5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_109(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3AC7
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_110(int iParam0) // Position - 0x3ADE
{
	return iParam0 & 15;
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x3AEB
{
	int num;
	int num2;

	if (!func_119(iParam1) || !func_119(iParam0))
		return 1;

	num = func_108(iParam0);
	num2 = func_108(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_110(iParam0);
	num2 = func_110(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_107(iParam0);
	num2 = func_107(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_106(iParam0);
	num2 = func_106(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_105(iParam0);
	num2 = func_105(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_104(iParam0);
	num2 = func_104(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_112() // Position - 0x3BF7
{
	var unk;

	func_118(&unk, unk_0x4BA5A16068183C5E());
	func_117(&unk, unk_0x18E502A71E28968C());
	func_116(&unk, unk_0x5295501D0862870D());
	func_115(&unk, unk_0xB12880C92EA6EE15());
	func_114(&unk, unk_0x8825A6E0A30BDCB8());
	func_113(&unk, unk_0x7598FE4545010A75());
	return unk;
}

void func_113(var uParam0, int iParam1) // Position - 0x3C3D
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_114(var uParam0, int iParam1) // Position - 0x3CC3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_115(var uParam0, int iParam1) // Position - 0x3CF6
{
	int num;
	int num2;

	num = func_110(*uParam0);
	num2 = func_108(*uParam0);

	if (iParam1 < 1 || iParam1 > func_103(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x3D47
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x3D81
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_118(var uParam0, int iParam1) // Position - 0x3DBC
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_119(int iParam0) // Position - 0x3DF8
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_104(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_105(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_106(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_108(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_110(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_107(iParam0);

	if (num6 < 1 || num6 > func_103(num5, num4))
		return false;

	return true;
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x3ED4
{
	if (IS_BIT_SET(Global_114370.f_24998.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_121(int iParam0) // Position - 0x3EF4
{
	eCharacter character;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_22(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_130() || Global_113417 || Global_32831 || func_129() || func_128(8, -1) || func_127() || func_126() || func_125() || func_124() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_130() || Global_32831 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_130() || Global_113417 || Global_32831 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_114370.f_7691.f_919[character] == 5 || Global_44469 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_130() || Global_113417 || Global_32831 || func_129() || func_128(8, -1) || func_127() || func_126() || func_124() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_130() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || func_128(8, -1) || func_124() || func_123() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_128(8, -1) || func_127() || func_126() || func_123() || func_122())
							return false;
					
						if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
							if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_130() || Global_32831 || func_129() || func_128(8, -1) || func_126() || func_125() || func_124() || Global_114370.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_130() || func_126() || Global_113417 || Global_32831 || func_129() || Global_45122 || func_128(8, -1) || func_125() || func_123() || func_124() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_130() || Global_113417 || Global_32831 || func_129() || func_128(8, -1) || func_125() || func_123() || func_127() || func_126() || func_124())
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

BOOL func_122() // Position - 0x4613
{
	return Global_101431.f_1;
}

BOOL func_123() // Position - 0x4621
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 13);

	return false;
}

BOOL func_124() // Position - 0x4644
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_125() // Position - 0x465E
{
	if (Global_79509)
		return true;
	else if (Global_64032 && !Global_64038)
		return true;

	return false;
}

BOOL func_126() // Position - 0x4688
{
	return Global_101444.f_394 > 0;
}

BOOL func_127() // Position - 0x4699
{
	return Global_101444.f_393 > 0;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x46AA
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

BOOL func_129() // Position - 0x46E2
{
	return Global_1575079;
}

BOOL func_130() // Position - 0x46EE
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

BOOL func_131() // Position - 0x470A
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x4732
{
	if (func_21(14))
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

BOOL func_133(int iParam0) // Position - 0x47D4
{
	return func_111(func_112(), iParam0);
}

BOOL func_134(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x47E6
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_135(eCharacter echParam0) // Position - 0x48CA
{
	if (!func_22(echParam0))
		return 7;

	return Global_114370.f_7691.f_919[echParam0];
}

BOOL func_136(int iParam0) // Position - 0x48EE
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114370.f_24998, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114370.f_24998.f_1, num);
	}

	return flag;
}

int func_137(float fParam0, BOOL bParam1) // Position - 0x4946
{
	var unk;
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num5 = func_19();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114370.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_114370.f_18577[num /*6*/], 3))
				{
					func_138(num, &unk);
					num4 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk.f_6, 1);
				
					if (num4 < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num5 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = num4;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_138(int iParam0, var uParam1) // Position - 0x49F7
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x5BA7
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_140(int iParam0) // Position - 0x5C38
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_141(int iParam0) // Position - 0x5F7E
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_142(iParam0) };

	if (unk_0xD6F9DEE4765092A9(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_142(int iParam0) // Position - 0x5FB5
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6401
{
	func_20();
	return Global_114370.f_2366.f_539.f_4321;
}

BOOL func_144() // Position - 0x641A
{
	var unk;

	if (Global_32980)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		
			if (unk_0xD9F5E1FEFD1329E4(unk, 0))
				if (!unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(unk, 0, 0)))
					return true;
		}
	}

	return false;
}

BOOL func_145() // Position - 0x645E
{
	if (func_148() && !func_149())
		return true;

	if (func_147() && func_146())
		return true;

	return false;
}

BOOL func_146() // Position - 0x6490
{
	return Global_114088 > 0;
}

BOOL func_147() // Position - 0x649E
{
	if (Global_98294 != -1)
		return true;

	return false;
}

BOOL func_148() // Position - 0x64B3
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 20);

	return false;
}

BOOL func_149() // Position - 0x64D6
{
	if (unk_0x761778199FE1211C())
		if (unk_0xAB154BFC15F33733() == 1f)
			return true;

	return false;
}

void func_150() // Position - 0x64F3
{
	unk_0xAE427DA16687F323();
	func_76(&iLocal_55);
	func_151(-1);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_151(int iParam0) // Position - 0x650E
{
	var unk;

	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (func_162())
	{
		func_155(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_114361 = unk_0x1DD05E817C89C737();
		func_154(30000);
		TEXT_LABEL_ASSIGN_STRING(&unk, func_153(Global_114359, true), 64);
	
		if (func_28(Global_114359) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&unk, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&unk, Global_114358, 64);
		}
	
		unk_0x3AF124228E3EAF07(&unk, Global_114356, unk_0x1DD05E817C89C737() - Global_114357, 0);
	}
	else if (IS_BIT_SET(Global_114366, 0) && Global_114370.f_24998.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_114366, 0);
	}

	func_152(&Global_32888);
	Global_114360 = false;
	func_88(-1);
	return;
}

void func_152(var uParam0) // Position - 0x65C0
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_43884))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = false;
	Global_64036 = 0;
	return;
}

char* func_153(int iParam0, BOOL bParam1) // Position - 0x65FD
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_154(int iParam0) // Position - 0x6846
{
	Global_44473 = unk_0x1DD05E817C89C737() + iParam0;
	return;
}

void func_155(int iParam0) // Position - 0x6858
{
	func_156(iParam0, 0, func_161(iParam0));
	return;
}

void func_156(int iParam0, int iParam1, int iParam2) // Position - 0x686D
{
	int unk;
	var unk2;

	unk = func_112();
	func_159(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_158(iParam0, &unk);
	unk2 = { func_157(&unk) };
	return;
}

struct<16> func_157(var uParam0) // Position - 0x689C
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_106(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_105(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_104(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_107(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_110(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_108(*uParam0), 64);
	return unk;
}

void func_158(int iParam0, var uParam1) // Position - 0x696C
{
	Global_114370.f_24998.f_43[iParam0] = *uParam1;
	return;
}

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6984
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_108(*uParam0);
	i = func_110(*uParam0);
	num2 = func_107(*uParam0);
	j = func_106(*uParam0);
	k = func_105(*uParam0);
	l = func_104(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_103(i, num); num2 > m; m = func_103(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_160(uParam0, l, k, j, num2, i, num);
	return;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6B06
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
	return;
}

int func_161(int iParam0) // Position - 0x6B3E
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_162() // Position - 0x6CE1
{
	if (Global_114359 == func_29() && unk_0x9FA91AA1AC724CD0() && Global_114360)
		return true;

	return false;
}

