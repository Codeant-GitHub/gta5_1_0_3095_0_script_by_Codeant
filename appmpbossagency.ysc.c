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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
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
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	Player plLocal_114 = 0;
	BOOL bLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_89, "CELL_206" /*BACK*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_93, "CELL_214" /*OPTIONS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_97, "CELL_243" /*ACCEPT JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_101, "CELL_244" /*CANCEL JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_105, "CELL_265" /*INVITATION*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_109, "CELL_300" /*CHAR_DEFAULT*/, 16);
	unk_0x51CC1333A10C4E09();
	func_100(&uLocal_116);
	iLocal_113 = 0;
	func_98();
	func_97(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_87(false);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_86();
		func_85();
	
		if (!(Global_20813.f_1 == 9) && Global_20813.f_1 > 3)
		{
			switch (iLocal_88)
			{
				case 0:
					func_48();
					break;
			
				case 1:
					func_32();
					break;
			
				case 3:
					func_5();
					break;
			
				case 2:
					func_4();
					break;
			
				default:
					break;
			}
		
			if (Global_20813.f_1 != 8)
				if (func_3())
					func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x170
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x1B3
{
	Global_1881898.f_6 = 0;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_3() // Position - 0x1C6
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x1EF
{
	return;
}

void func_5() // Position - 0x1F7
{
	int num;

	Global_1881898.f_6 = 1;

	if (bLocal_115)
	{
		if (unk_0x2645430E708CBFAC(2, Global_20782))
			bLocal_115 = false;
	
		return;
	}

	if (unk_0x2645430E708CBFAC(2, 201))
	{
		iLocal_88 = 1;
		num = func_30(iLocal_113, 0);
		func_6(num);
		return;
	}

	if (unk_0x2645430E708CBFAC(2, 202))
	{
		iLocal_88 = 1;
		return;
	}

	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /*Confirm*/, "BA_APP_PASS_W" /*Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard.*/, 36, 0, false, -1, 0, 0, true, 0);
	return;
}

void func_6(int iParam0) // Position - 0x25E
{
	Player player;

	player = Global_1881898.f_7[iParam0 /*8*/].f_2;

	if (Global_1881898.f_7[iParam0 /*8*/].f_1 == 1 && plLocal_114 == player)
	{
		func_26(player, Global_1881898.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}

	Global_1881898.f_6 = 0;
	func_7(0);
	return;
}

void func_7(int iParam0) // Position - 0x2B3
{
	if (func_12())
		return;

	if (Global_21025)
		if (func_11())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_8())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x33D
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x364
{
	if (bParam0)
	{
		if (func_10(0))
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

BOOL func_10(int iParam0) // Position - 0x3D8
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

BOOL func_11() // Position - 0x42F
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_12() // Position - 0x43D
{
	return IS_BIT_SET(Global_1956030, 19);
}

void func_13(int iParam0) // Position - 0x44C
{
	int i;

	if (iParam0 != -1)
	{
		if (Global_1881898.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1881898.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
			
				if (Global_1881898.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1881898.f_4 = Global_1881898.f_4 - 1;
				
					if (Global_1881898.f_4 < 0)
						Global_1881898.f_4 = 0;
				
					func_18();
				}
			}
		
			unk_0x8744D2E3FC95740E(&(Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_22), Global_1881898.f_7[iParam0 /*8*/].f_2);
			unk_0xFE3A52C5B7AE3101(Global_1881898.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
	
		for (i = iParam0; i <= 8; i = i + 1)
		{
			Global_1881898.f_7[i /*8*/] = { Global_1881898.f_7[i + 1 /*8*/] };
		}
	
		Global_1881898.f_7[9 /*8*/].f_1 = 0;
		Global_1881898.f_7[9 /*8*/].f_2 = _INVALID_PLAYER_INDEX();
	}

	return;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x53E
{
	return -1;
}

void func_15(int iParam0) // Position - 0x547
{
	if (!func_16(iParam0))
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1881898.f_3), iParam0);

	return;
}

BOOL func_16(int iParam0) // Position - 0x565
{
	return IS_BIT_SET(Global_1881898.f_3, iParam0);
}

void func_17() // Position - 0x576
{
	Global_1881898 = Global_1881898 - 1;
	return;
}

void func_18() // Position - 0x588
{
	Global_23229 = Global_23229 - 1;

	if (Global_23229 < 0)
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");

	func_19();
	return;
}

void func_19() // Position - 0x5AA
{
	if (!Global_21026)
	{
		if (Global_20813.f_1 == 6)
		{
			func_97(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_97(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

void func_20(int iParam0) // Position - 0x607
{
	int i;
	int num;
	int num2;
	int j;
	int value;
	int k;
	int value2;
	int num3;
	int num4;
	int value3;

	Global_23234 = 0;
	Global_9288 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9252[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_23(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == 0)
						{
							Global_9216[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									num2 = 42;
									Global_21029 = 1;
								}
								else
								{
									num2 = 255;
									Global_21029 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num2);
								unk_0xE6B753D52F4CA222();
							}
						
							if (Global_2695946)
								if (num == 14)
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
						
							Global_9252[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == 0)
						{
							Global_9216[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114370.f_14144[j /*104*/].f_24 != 0)
										if (Global_114370.f_14144[j /*104*/].f_28 == 0)
											if (Global_114370.f_14144[j /*104*/].f_99[Global_20813] == 1)
												Global_23234 = Global_23234 + 1;
								}
							
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79248)
								{
									value = 0;
									value = Global_4541717;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541718[k /*104*/].f_24 != 0)
											if (Global_4541718[k /*104*/].f_28 == 0)
												if (Global_4541718[k /*104*/].f_99[Global_20813] == 1)
													value = value + 1;
									}
								
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case CHAR_MICHAEL:
											value2 = Global_45133;
											break;
									
										case CHAR_FRANKLIN:
											value2 = Global_45134;
											break;
									
										case CHAR_TREVOR:
											value2 = Global_45135;
											break;
									
										default:
											break;
									}
								
									func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(Global_8689);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8684, 6))
									num3 = 42;
								else
									num3 = 255;
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num3);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									num4 = 42;
									Global_21029 = 1;
								}
								else
								{
									num4 = 255;
									Global_21029 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num4);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 8)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 23 && unk_0x1B79E937E91F40C3(&Global_8690[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8684, 6))
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8690[num /*15*/].f_10 == 57 && num == 23)
							{
								value3 = 0;
								value3 = Global_1881898.f_1;
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9252[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0xB93
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam6));

	if (!unk_0xD6F9DEE4765092A9(sParam7))
		func_22(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_22(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_22(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_22(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_22(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_22(char* sParam0) // Position - 0xC46
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

BOOL func_23(int iParam0) // Position - 0xC58
{
	return Global_43922 == iParam0;
}

void func_24(char* sParam0) // Position - 0xC66
{
	if (Global_23229 != 0)
	{
		!unk_0xD6F9DEE4765092A9(sParam0);
		Global_23229 = 0;
	}

	return;
}

void func_25() // Position - 0xC83
{
	Global_1881898.f_1 = Global_1881898.f_1 - 1;

	if (Global_1881898.f_1 < 0)
		Global_1881898.f_1 = 0;

	return;
}

void func_26(Player plParam0, var uParam1) // Position - 0xCAA
{
	if (Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_26 == _INVALID_PLAYER_INDEX())
	{
		if (unk_0x762604C40829DB72(plParam0))
		{
			Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_26 = plParam0;
			Global_2738587.f_5234.f_227 = uParam1;
			func_27(func_28(plParam0));
		}
	}

	return;
}

void func_27(int iParam0) // Position - 0xCFA
{
	int num;

	num = -627920584;
	num.f_1 = unk_0x259BE71D8A81D4FA();

	if (!(iParam0 == 0))
		unk_0x71A6F836422FDD2B(1, &num, 3, iParam0, num);

	return;
}

int func_28(Player plParam0) // Position - 0xD28
{
	int unk;

	if (func_29(plParam0))
		unk_0x0B0C9A0F9AAEB7F0(&unk, plParam0);

	return unk;
}

BOOL func_29(Player plParam0) // Position - 0xD43
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_30(int iParam0, int iParam1) // Position - 0xD65
{
	int i;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1881898.f_7[i /*8*/].f_7 == iParam1)
		{
			iParam0 = iParam0 - 1;
		
			if (iParam0 < 0)
				return i;
		}
	}

	return 0;
}

int func_31() // Position - 0xDA5
{
	return Global_1881898;
}

void func_32() // Position - 0xDB1
{
	int num;
	Player player;

	num = func_30(iLocal_113, 0);

	if (iLocal_113 == -1)
	{
		func_87(true);
		return;
	}

	player = Global_1881898.f_7[num /*8*/].f_2;

	if (!_NETWORK_IS_PLAYER_VALID(player, false, true) || plLocal_114 != player)
	{
		func_87(true);
		return;
	}

	func_42(&uLocal_116);

	if (func_40(&uLocal_116))
	{
		func_87(true);
		return;
	}

	if (func_39(&uLocal_116))
	{
		func_13(num);
		func_87(true);
		return;
	}

	if (func_35(&uLocal_116))
	{
		if (func_34())
		{
			bLocal_115 = true;
			iLocal_88 = 3;
		}
		else if (Global_1881898.f_7[num /*8*/] == 0)
		{
			func_6(num);
		}
		else if (Global_1881898.f_7[num /*8*/] == 1)
		{
			func_33(num);
		}
		else
		{
			func_7(0);
		}
	}

	return;
}

void func_33(int iParam0) // Position - 0xE77
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1836147, 15);
	func_13(iParam0);
	Global_1881898.f_6 = 0;
	func_7(0);
	return;
}

BOOL func_34() // Position - 0xE9B
{
	return Global_1574582;
}

BOOL func_35(var uParam0) // Position - 0xEA7
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20791)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20782))
		return false;

	func_36();
	Global_20791 = true;
	return true;
}

void func_36() // Position - 0xEEB
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20802, 1);
		func_37();
	}

	return;
}

void func_37() // Position - 0xF10
{
	if (func_38())
		unk_0xBF3F90E670404C44(5);

	return;
}

BOOL func_38() // Position - 0xF24
{
	var unk;
	int num;
	BOOL flag;

	if (Global_79248)
		return false;

	flag = 0;
	unk = unk_0xBF03D0685ADC793B();
	num = unk_0xBCF87EE3DC296C2A(unk);

	if (num == 4)
		flag = 1;

	if (Global_4543261 || flag)
		return true;

	return true;
}

BOOL func_39(var uParam0) // Position - 0xF6B
{
	if (!IS_BIT_SET(*uParam0, 1))
		return false;

	if (Global_20791)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20785))
		return false;

	func_36();
	Global_20791 = true;
	return true;
}

BOOL func_40(var uParam0) // Position - 0xFAF
{
	if (!IS_BIT_SET(*uParam0, 2))
		return false;

	if (Global_20791)
		return false;

	if (!unk_0x9390801B06EE998F())
		return false;

	if (!unk_0x875A214D5EBCA509(2, Global_20783))
		return false;

	func_41();
	Global_20791 = true;
	return true;
}

void func_41() // Position - 0xFF3
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20802, 1);

	return;
}

void func_42(var uParam0) // Position - 0x1015
{
	if (unk_0x1DD05E817C89C737() < uParam0->f_1)
		return;

	if (!unk_0x9390801B06EE998F())
		return;

	if (unk_0x875A214D5EBCA509(2, Global_20789) || unk_0x875A214D5EBCA509(2, 181))
	{
		func_45();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}

	if (unk_0x875A214D5EBCA509(2, Global_20790) || unk_0x875A214D5EBCA509(2, 180))
	{
		func_43();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}

	return;
}

void func_43() // Position - 0x1082
{
	func_97(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
	func_44();
	return;
}

void func_44() // Position - 0x10BF
{
	if (func_38())
		if (Global_21030 == 0)
			unk_0xBF3F90E670404C44(2);
		else
			unk_0xBF3F90E670404C44(1);

	return;
}

void func_45() // Position - 0x10E2
{
	func_97(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
	func_46();
	return;
}

void func_46() // Position - 0x111F
{
	if (func_38())
		if (Global_21030 == 0)
			unk_0xBF3F90E670404C44(1);
		else
			unk_0xBF3F90E670404C44(2);

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1142
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_48() // Position - 0x11A2
{
	var unk;
	int num;
	var unk2;
	int num2;

	if (func_31() > 1)
		func_42(&uLocal_116);

	if (func_35(&uLocal_116))
	{
		unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
		unk = unk_0x6CA3F2B87712B6A4();
	
		while (!unk_0xA6F779AA284EB20E(unk))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_113 = unk_0x5DEF122A58D4F685(unk);
		num = func_30(iLocal_113, 0);
	
		switch (Global_1881898.f_7[num /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_50();
				break;
		
			default:
				return;
		}
	
		Global_20813.f_1 = 8;
		return;
	}

	if (func_39(&uLocal_116))
	{
		unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
		unk2 = unk_0x6CA3F2B87712B6A4();
	
		while (!unk_0xA6F779AA284EB20E(unk2))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_113 = unk_0x5DEF122A58D4F685(unk2);
		num2 = func_30(iLocal_113, 0);
	
		switch (Global_1881898.f_7[num2 /*8*/].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_13(num2);
				func_87(false);
				return;
		
			default:
				return;
		}
	
		return;
		return;
	}

	if (func_16(0))
	{
		func_49(0);
		func_87(false);
	}

	return;
}

void func_49(int iParam0) // Position - 0x12AE
{
	if (func_16(iParam0))
		unk_0x8744D2E3FC95740E(&(Global_1881898.f_3), iParam0);

	return;
}

void func_50() // Position - 0x12CB
{
	BOOL flag;
	var unk;
	int num;
	int num2;
	Player player;
	var unk2;
	var unk18;
	BOOL flag2;
	int i;
	int num3;
	var unk22;
	var unk26;
	var unk42;

	if (Global_20813.f_1 != 8)
		Global_20813.f_1 = 8;

	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	flag = false;
	num2 = func_30(iLocal_113, 0);
	plLocal_114 = Global_1881898.f_7[num2 /*8*/].f_2;
	player = Global_1881898.f_7[num2 /*8*/].f_2;
	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);

	if (_NETWORK_IS_PLAYER_VALID(player, false, true))
	{
		unk2 = { func_84(player) };
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x4E5A3D96808F7F84(func_78(player));
		unk_0x60D332F23943B34F(&unk2);
		unk_0xCFAD3D478C87321A();
		flag = true;
	}
	else
	{
		func_22("");
	}

	if (Global_1881898.f_7[num2 /*8*/] == 0)
	{
		if (Global_262145.f_15622)
		{
			unk18 = 3;
			flag2 = func_77(player);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (num3 < 3)
				{
					if (Global_1886967[player /*609*/].f_10.f_11[i] != _INVALID_PLAYER_INDEX())
					{
						if (_NETWORK_IS_PLAYER_VALID(Global_1886967[player /*609*/].f_10.f_11[i], false, true))
						{
							unk18[num3] = Global_1886967[player /*609*/].f_10.f_11[i];
							num3 = num3 + 1;
						}
					}
				}
			}
		
			if (num3 == 0)
			{
				if (flag2)
					func_22("BA_APP_BODYCTA" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~*/);
				else
					func_22("BA_APP_BODY_TA" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~*/);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T4" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~*/, 16);
			
				if (flag2)
					TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT4" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~*/, 16);
			
				if (num3 == 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT5" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T5" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~*/, 16);
				else if (num3 > 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODYCT6" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk22, "BA_APP_BODY_T6" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~*/, 16);
			
				unk_0x882AEFD55B8D51FB(&unk22);
			
				for (i = 0; i < num3; i = i + 1)
				{
					unk26 = { func_84(unk18[i]) };
					unk_0x60D332F23943B34F(&unk26);
				}
			
				unk_0xCFAD3D478C87321A();
			}
		}
		else
		{
			if (Global_1881898.f_88[num2 /*5*/].f_1)
				if (Global_1881898.f_88[num2 /*5*/].f_2)
					TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T9" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
				else
					TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T8" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else if (Global_1881898.f_88[num2 /*5*/].f_2)
				TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T7" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk42, "BA_APP_BODY_T10" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
		
			unk_0x882AEFD55B8D51FB(&unk42);
			unk_0x511D14ED2DA887E1(Global_1881898.f_88[num2 /*5*/]);
			unk_0x511D14ED2DA887E1(func_76(player));
			unk_0x511D14ED2DA887E1(Global_1881898.f_88[num2 /*5*/].f_3);
			unk_0x511D14ED2DA887E1(Global_1881898.f_88[num2 /*5*/].f_4);
			unk_0xCFAD3D478C87321A();
		}
	}
	else if (Global_1881898.f_7[num2 /*8*/] == 1)
	{
		unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM2" /*~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~*/);
		unk_0x4E5A3D96808F7F84(func_78(Global_1881898.f_7[num2 /*8*/].f_2));
		unk_0x60D332F23943B34F(func_62(Global_1881898.f_7[num2 /*8*/].f_2));
		unk_0xCFAD3D478C87321A();
	}

	if (flag)
	{
		num = func_56(Global_1881898.f_7[num2 /*8*/].f_2);
	
		if (num == 0)
			flag = false;
		else
			unk = unk_0x008C0EB38E4459EE(num);
	}

	if (flag)
		unk_0x3585BEBEDC67FCC7(unk);
	else
		func_22(&uLocal_109);

	unk_0xE6B753D52F4CA222();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54(&uLocal_105);
	func_51(13, &uLocal_97, 12, &uLocal_101, 4, &uLocal_89, &uLocal_116);
	iLocal_88 = 1;
	return;
}

void func_51(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6) // Position - 0x161A
{
	func_52(2, iParam0, sParam1, 0, uParam6, -1);
	func_52(1, iParam2, sParam3, 1, uParam6, 17);
	func_52(3, iParam4, sParam5, 2, uParam6, -1);
	return;
}

void func_52(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5) // Position - 0x164A
{
	if (iParam1 == 1)
	{
		func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_53(iParam5, false);
		return;
	}

	if (Global_20801)
	{
		func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_53(iParam5, true);
		return;
	}

	func_21(Global_20794, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_53(iParam5, true);
	return;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x16EF
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, iParam0);
		return;
	}

	unk_0x8744D2E3FC95740E(&Global_8683, iParam0);
	return;
}

void func_54(char* sParam0) // Position - 0x171A
{
	func_55(Global_20794, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_55(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x1733
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_22(sParam2);

	if (!unk_0xD6F9DEE4765092A9(sParam3))
		func_22(sParam3);

	if (!unk_0xD6F9DEE4765092A9(sParam4))
		func_22(sParam4);

	if (!unk_0xD6F9DEE4765092A9(sParam5))
		func_22(sParam5);

	if (!unk_0xD6F9DEE4765092A9(sParam6))
		func_22(sParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

int func_56(Player plParam0) // Position - 0x178E
{
	int num;

	num = func_59(plParam0);

	if (num == -1)
	{
		func_57(plParam0, true);
		return 0;
	}

	Global_1680805[num /*5*/].f_4 = 1;
	return Global_1680805[num /*5*/].f_2;
}

void func_57(Player plParam0, BOOL bParam1) // Position - 0x17C4
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_59(plParam0) != -1)
		return;

	if (Global_1680968)
		if (plParam0 == Global_1680968.f_1)
			return;

	if (func_58(plParam0))
		return;

	if (Global_1681006 >= 32)
		return;

	Global_1680973[Global_1681006] = plParam0;
	Global_1681006 = Global_1681006 + 1;
	bParam1;
	return;
}

BOOL func_58(Player plParam0) // Position - 0x1830
{
	int i;

	i = 0;

	for (i = 0; i < Global_1681006; i = i + 1)
	{
		if (Global_1680973[i] == plParam0)
			return true;
	}

	return false;
}

int func_59(Player plParam0) // Position - 0x1862
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1680966 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1680966; i = i + 1)
	{
		if (Global_1680805[i /*5*/].f_1 == plParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1680805[i /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1680805[i /*5*/].f_2))
				return i;
		
			func_60(i);
			return -1;
		}
	}

	return -1;
}

void func_60(int iParam0) // Position - 0x18E1
{
	var unk;
	var unk17;
	int num;
	int i;

	if (iParam0 >= Global_1680966)
		return;

	if (unk_0xCF3FA9D6B87D2277(Global_1680805[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x008C0EB38E4459EE(Global_1680805[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&unk17, &unk17, &unk, &unk);
		}
	
		unk_0x697995B2B26B6CD4(Global_1680805[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1680966; i = i + 1)
	{
		Global_1680805[num /*5*/] = { Global_1680805[i /*5*/] };
		num = num + 1;
	}

	func_61(&Global_1680805[num /*5*/]);
	Global_1680966 = Global_1680966 - 1;
	return;
}

void func_61(var uParam0) // Position - 0x1997
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

char* func_62(Player plParam0) // Position - 0x19C4
{
	char* str;
	Player player;

	if (!func_29(plParam0))
	{
		str = func_71(plParam0, false);
		return str;
	}

	if (plParam0 == unk_0x259BE71D8A81D4FA())
	{
		str = func_70(&(Global_1886967[plParam0 /*609*/].f_10.f_105));
		return str;
	}

	if (Global_1886967[plParam0 /*609*/].f_10.f_121 != Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_121)
	{
		str = func_71(plParam0, false);
		return str;
	}

	if (func_69(plParam0, 28) || func_69(unk_0x259BE71D8A81D4FA(), 28) || func_67(plParam0) && !func_65(plParam0))
		return func_71(plParam0, false);

	player = func_64(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != unk_0x259BE71D8A81D4FA())
		{
			if (*Global_262145.f_36085)
				return func_71(player, false);
		
			if (!func_63() && !unk_0x8FF2665359043205(0, -1, 1))
				return func_71(player, false);
		}
	}

	if (player != _INVALID_PLAYER_INDEX())
	{
		str = func_70(&(Global_1886967[player /*609*/].f_10.f_105));
	
		if (unk_0xD6F9DEE4765092A9(str))
			return func_71(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_63() // Position - 0x1AFA
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

Player func_64(Player plParam0) // Position - 0x1B10
{
	if (func_29(plParam0))
		return Global_1886967[plParam0 /*609*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_65(Player plParam0) // Position - 0x1B33
{
	var unk;

	unk = { func_66(plParam0) };

	if (func_63())
		if (plParam0 == unk_0x259BE71D8A81D4FA())
			return true;
		else if (unk_0x97DD063A9C6137F8(0))
			if (unk_0x8EF8E27D73EB5271(&unk))
				return true;

	return false;
}

struct<13> func_66(Player plParam0) // Position - 0x1B73
{
	var unk;

	unk_0x464E131FD68B953F(plParam0, &unk, 13);
	return unk;
}

BOOL func_67(Player plParam0) // Position - 0x1B8A
{
	var unk;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		unk = { func_66(plParam0) };
	
		if (unk_0x3B880DE16766E9C3() && !unk_0x716271729B9FB8E6() || unk_0x761778199FE1211C())
			if (unk_0x97DD063A9C6137F8(0))
				return false;
		else if (func_63() || unk_0x716271729B9FB8E6())
			if (unk_0x97DD063A9C6137F8(0))
				if (unk_0x8EF8E27D73EB5271(&unk))
					return false;
	
		if (IS_GAMER_HANDLE_VALID(unk) && unk_0xC9AFD0C222C7CA74(&unk) && !unk_0x8EF8E27D73EB5271(&unk))
			return true;
	}

	return true;
}

var IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x1C1E
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

BOOL func_69(Player plParam0, int iParam1) // Position - 0x1C2E
{
	return IS_BIT_SET(Global_1886967[plParam0 /*609*/].f_10.f_4, iParam1);
}

char* func_70(char* sParam0) // Position - 0x1C46
{
	return sParam0;
}

char* func_71(Player plParam0, BOOL bParam1) // Position - 0x1C50
{
	if (!bParam1)
		if (func_73(plParam0, true))
			return func_72();

	return unk_0xFACCDE46E24AD056("GB_REST_ACC" /*An Organization*/);
}

var func_72() // Position - 0x1C77
{
	return unk_0xFACCDE46E24AD056("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_73(Player plParam0, BOOL bParam1) // Position - 0x1C87
{
	return func_74(plParam0, bParam1, 1);
}

BOOL func_74(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x1C98
{
	Player player;

	if (!func_29(plParam0))
		return 0;

	if (!bParam1)
		if (func_75(plParam0, iParam2))
			return 0;

	player = Global_1886967[plParam0 /*609*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1886967[player /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_75(Player plParam0, int iParam1) // Position - 0x1CF5
{
	if (func_29(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1886967[plParam0 /*609*/].f_10 == plParam0 && Global_1886967[plParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

int func_76(Player plParam0) // Position - 0x1D44
{
	if (func_64(plParam0) == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1886967[plParam0 /*609*/].f_10.f_19;
}

BOOL func_77(Player plParam0) // Position - 0x1D6A
{
	if (!func_29(plParam0))
		return false;

	return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_32, 26);
}

int func_78(Player plParam0) // Position - 0x1D91
{
	int num;

	num = func_81(plParam0);

	if (num != -1)
		return func_79(num);

	return 1;
}

int func_79(int iParam0) // Position - 0x1DB1
{
	int num;

	if (iParam0 > -1)
	{
		num = func_80(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_80(int iParam0) // Position - 0x1E74
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_81(Player plParam0) // Position - 0x1E8B
{
	if (func_29(plParam0))
		if (func_82(plParam0, true))
			return Global_2648918.f_818.f_11[func_64(plParam0)];

	return -1;
}

BOOL func_82(Player plParam0, BOOL bParam1) // Position - 0x1EBB
{
	if (!func_29(plParam0))
		return false;

	if (!bParam1)
		if (func_83(plParam0))
			return false;

	return Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_83(Player plParam0) // Position - 0x1EF4
{
	if (func_29(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[plParam0 /*609*/].f_10 == plParam0;

	return false;
}

struct<16> func_84(Player plParam0) // Position - 0x1F29
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, unk_0xBD6CA019F46AB947(plParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

void func_85() // Position - 0x1F50
{
	if (Global_1881898.f_6)
		if (iLocal_88 != 3)
			if (!unk_0xB11671B812399BA2())
				Global_1881898.f_6 = 0;

	return;
}

void func_86() // Position - 0x1F76
{
	unk_0x4CC1CF98851922CE(0, 176);
	unk_0x4CC1CF98851922CE(0, 177);
	return;
}

void func_87(BOOL bParam0) // Position - 0x1F8C
{
	int value;
	int num;
	BOOL flag;

	plLocal_114 = _INVALID_PLAYER_INDEX();

	if (!(Global_20813.f_1 == 7))
		Global_20813.f_1 = 7;

	value = 0;

	if (bParam0)
		value = iLocal_113;

	if (value >= Global_1679748)
		value = 0;

	if (Global_23226)
	{
		func_50();
		Global_23226 = false;
		return;
	}

	num = func_31();
	num = num - func_96();

	if (func_82(unk_0x259BE71D8A81D4FA(), false) && !func_95(true) && num <= 0)
	{
		func_93();
		return;
	}

	func_88();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	flag = false;

	if (num > 0)
		flag = true;

	if (flag)
		func_51(13, &uLocal_93, 12, &uLocal_101, 4, &uLocal_89, &uLocal_116);
	else
		func_51(1, "", 1, "", 4, &uLocal_89, &uLocal_116);

	iLocal_88 = 0;
	return;
}

void func_88() // Position - 0x2076
{
	int i;
	int num;

	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1881898.f_7[i /*8*/].f_1 == 1 && Global_1881898.f_7[i /*8*/].f_7 == 0)
		{
			switch (Global_1881898.f_7[i /*8*/])
			{
				case 0:
					if (func_92(i, num))
						num = num + 1;
					break;
			
				case 1:
					if (func_90(i, num))
						num = num + 1;
					break;
			}
		}
	}

	if (num > 0)
		return;

	func_89();
	return;
}

void func_89() // Position - 0x212B
{
	var unk;

	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(0);

	if (func_83(unk_0x259BE71D8A81D4FA()))
		func_22("BA_APP_NONEB" /*No Invites*/);
	else
		func_22("BA_APP_NONE" /*No VIP Invites*/);

	func_22("");
	unk_0x330108B080A2132F(-1);
	unk_0x330108B080A2132F(1);
	unk = unk_0x76CD105BCAC6EB9F();
	unk_0x557F1E2300EF1A3E(unk);
	unk_0xE6B753D52F4CA222();
	return;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x2189
{
	var unk;
	int num;
	int num2;

	if (Global_1881898.f_7[iParam0 /*8*/].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1881898.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	unk = { func_84(Global_1881898.f_7[iParam0 /*8*/].f_2) };
	func_91(&unk);
	unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM1" /*Has challenged you to an Executive Deathmatch.*/);
	unk_0xCFAD3D478C87321A();
	unk_0x330108B080A2132F(-1);
	num = 1;
	num2 = func_81(Global_1881898.f_7[iParam0 /*8*/].f_2);

	if (num2 != -1)
		num = func_79(num2);

	unk_0x330108B080A2132F(num);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	return true;
}

void func_91(var uParam0) // Position - 0x2238
{
	unk_0xCE3E870AC37B4253(uParam0);
	return;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x2246
{
	var unk;
	BOOL flag;
	int num;
	int num2;
	int num3;

	if (Global_1881898.f_7[iParam0 /*8*/].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1881898.f_7[iParam0 /*8*/].f_2, false, true))
		return false;

	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	unk = { func_84(Global_1881898.f_7[iParam0 /*8*/].f_2) };
	func_91(&unk);
	flag = func_77(Global_1881898.f_7[iParam0 /*8*/].f_2);
	num = func_76(Global_1881898.f_7[iParam0 /*8*/].f_2);

	if (num == 0)
	{
		if (flag)
			func_22("BA_APP_BODYCT" /*Wants you to become an Associate.*/);
		else
			func_22("BA_APP_BODY_T" /*Wants you to become a Bodyguard.*/);
	}
	else if (num == 1)
	{
		if (flag)
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT3" /*Wants you to become an Associate.~n~~1~ other in this Organization.*/);
		else
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T3" /*Wants you to become a Bodyguard.~n~~1~ other in this Organization.*/);
	
		unk_0x511D14ED2DA887E1(num);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		if (flag)
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT2" /*Wants you to become an Associate.~n~~1~ others in this Organization.*/);
		else
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T2" /*Wants you to become a Bodyguard.~n~~1~ others in this Organization.*/);
	
		unk_0x511D14ED2DA887E1(num);
		unk_0xCFAD3D478C87321A();
	}

	unk_0x330108B080A2132F(-1);
	num2 = 1;
	num3 = func_81(Global_1881898.f_7[iParam0 /*8*/].f_2);

	if (num3 != -1)
		num2 = func_79(num3);

	unk_0x330108B080A2132F(num2);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	return true;
}

void func_93() // Position - 0x237B
{
	func_97(Global_20794, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(func_78(unk_0x259BE71D8A81D4FA()));
	unk_0x60D332F23943B34F(func_94());
	unk_0xCFAD3D478C87321A();
	func_22("BA_APP_NONEG" /*You are already a member of this Organization.*/);
	func_22("CELL_AGBOSSPIC" /*CHAR_GANGAPP*/);
	unk_0xE6B753D52F4CA222();
	func_97(Global_20794, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	func_51(1, "", 1, "", 4, &uLocal_89, &uLocal_116);
	iLocal_88 = 2;
	return;
}

char* func_94() // Position - 0x2433
{
	Player player;
	char* str;

	player = func_64(unk_0x259BE71D8A81D4FA());

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != unk_0x259BE71D8A81D4FA())
		{
			if (func_69(player, 28) || func_69(unk_0x259BE71D8A81D4FA(), 28) || func_67(player) && !func_65(player))
				return func_71(player, false);
		
			if (*Global_262145.f_36085)
				return func_71(player, false);
		
			if (!func_63() && !unk_0x8FF2665359043205(0, -1, 1))
				return func_71(player, false);
		}
	
		str = func_70(&(Global_1886967[player /*609*/].f_10.f_105));
	
		if (unk_0xD6F9DEE4765092A9(str))
			return func_71(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_95(BOOL bParam0) // Position - 0x24FC
{
	return func_73(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_96() // Position - 0x250E
{
	int i;
	int num;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1881898.f_7[i /*8*/].f_7 == 1)
			num = num + 1;
	}

	return num;
}

void func_97(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2543
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam6));

	unk_0xE6B753D52F4CA222();
	return;
}

void func_98() // Position - 0x25A6
{
	Global_1881898.f_1 = 0;
	func_99();
	return;
}

void func_99() // Position - 0x25B9
{
	Global_1881898.f_5 = 0;
	return;
}

void func_100(var uParam0) // Position - 0x25C8
{
	*uParam0 = 0;
	return;
}

