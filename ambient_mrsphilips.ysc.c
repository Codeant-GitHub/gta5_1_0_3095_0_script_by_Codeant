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
	var uLocal_35 = 10;
	var uLocal_36 = 0;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	BOOL bLocal_80 = 0;
#endregion

void main() // Position - 0x0
{
	eCharacter character;
	float num;

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
	iLocal_79 = joaat("rumpo2");

	if (unk_0x96CFB880BAC634CE(18))
		func_181();

	if (unk_0x486FF5D06E9659F1(joaat("ambient_mrsphilips")) > 1)
		unk_0xBBC29EBE6E1A48FA();

	func_180(10);

	while (true)
	{
		unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA());
		character = _GET_CURRENT_PLAYER_CHARACTER_0();
		num = unk_0x37A742571A01BD01() + 5f;
	
		if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1973.3237f, 3815.594f, 31.42936f) < num * num)
			unk_0x9D0B099EEAD74270();
	
		if (character != CHAR_TREVOR)
		{
			switch (iLocal_77)
			{
				case 0:
				case 1:
				case 2:
					SYSTEM::WAIT(5000);
					break;
			
				case 3:
					func_177();
					SYSTEM::WAIT(0);
					break;
			
				case 4:
					func_181();
					SYSTEM::WAIT(0);
					break;
			}
		}
		else
		{
			switch (iLocal_77)
			{
				case 0:
					func_172();
					break;
			
				case 1:
					func_166();
					break;
			
				case 2:
					func_1();
					break;
			
				case 3:
					func_177();
					break;
			
				case 4:
					func_181();
					break;
			}
		
			if (!bLocal_80)
				SYSTEM::WAIT(1000);
			else
				SYSTEM::WAIT(0);
		}
	}

	return;
}

void func_1() // Position - 0x182
{
	if (func_157(2))
	{
		if (func_3())
		{
			bLocal_80 = false;
			func_2(3);
		}
		else
		{
			func_2(1);
		}
	}

	return;
}

void func_2(int iParam0) // Position - 0x1A9
{
	iLocal_77 = iParam0;
	iLocal_78 = 0;
	return;
}

BOOL func_3() // Position - 0x1B8
{
	var unk;
	var unk33;

	while (!func_152(36))
	{
		if (func_141(36))
		{
			func_140("LAUNCH_RC_MISSION - Script denied by RC Controller");
			return false;
		}
	
		SYSTEM::WAIT(0);
	}

	func_123();
	func_120(36, &unk);
	TEXT_LABEL_COPY(&unk33, { func_119(36) }, 4);
	func_117(&unk33, unk.f_3, 0);
	func_114(36);

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		func_23("MrsPhilips2", 1);

	func_4(36, unk);
	return true;
}

void func_4(int iParam0, var uParam1) // Position - 0x226
{
	func_22(uParam1);
	unk_0x8744D2E3FC95740E(&Global_114370.f_18577[iParam0 /*6*/], 5);

	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
		{
			func_20();
			SYSTEM::WAIT(0);
		}
	}

	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) < 1)
	{
		Global_64039 = 0;
		unk_0x97A5024CE91641F1("mission_stat_watcher");
	
		while (!unk_0xA6E4F7A73ABC4A76("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", SPECIAL_ABILITY);
		unk_0xFD49725F3FE7EE13("mission_stat_watcher");
	}

	while (!IS_BIT_SET(Global_114370.f_18577[iParam0 /*6*/], 5))
	{
		if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_18577[iParam0 /*6*/], 5);
	}

	func_5(iParam0);
	return;
}

void func_5(int iParam0) // Position - 0x2DE
{
	int num;
	int num2;

	if (Global_64036 == 1)
	{
		func_19();
		Global_64036 = 0;
	
		if (Global_64031)
			return;
	}

	if (Global_4)
	{
		Global_64039 = 1;
		func_11();
		return;
	}

	TEXT_LABEL_COPY(&Global_64053, { func_10(iParam0) }, 4);
	Global_64041 = 0;
	Global_64040 = false;

	switch (iParam0)
	{
		case 1:
		case 9:
			Global_64028 = true;
			Global_64031 = true;
			Global_64034 = 1;
			break;
	
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_64039 = 1;
			Global_64040 = true;
			func_11();
			func_20();
			return;
	}

	num = Global_76283;
	Global_76283 = 1;
	num2 = Global_76284;
	Global_76284 = iParam0;

	if (!Global_64028)
	{
		if (Global_76284 != num2 || Global_76133 == 0 || num != Global_76283)
		{
			Global_33082 = 0;
			func_11();
			func_7(iParam0);
		}
		else
		{
			Global_64031 = true;
		}
	}

	Global_64066 = unk_0x1DD05E817C89C737();
	func_6();
	Global_64038 = false;
	return;
}

void func_6() // Position - 0x438
{
	int i;

	if (!Global_64035)
		return;

	if (Global_76133 == 0)
		return;

	i = 0;

	for (i = 0; i < Global_76133; i = i + 1)
	{
		switch (Global_64263[Global_76134[i /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_76134[i /*9*/].f_3 = 1;
				break;
		
			case 4:
				if (Global_64046)
					Global_76134[i /*9*/].f_3 = 1;
				break;
		
			case 6:
				if (Global_64263[Global_76134[i /*9*/] /*13*/].f_3)
					if (Global_76134[i /*9*/].f_1 != 0)
						Global_76134[i /*9*/].f_3 = 1;
				break;
		}
	}

	Global_64035 = false;
	return;
}

void func_7(int iParam0) // Position - 0x4EB
{
	switch (iParam0)
	{
		case 2:
			func_8(741);
			func_8(742);
			return;
	
		case 3:
			func_8(743);
			func_8(744);
			return;
	
		case 5:
			func_8(745);
			func_8(746);
			return;
	
		case 6:
			func_8(747);
			func_8(748);
			return;
	
		case 8:
			func_8(749);
			return;
	
		case 12:
			func_8(750);
			return;
	
		case 14:
			func_8(751);
			func_8(752);
			return;
	
		case 16:
			func_8(753);
			func_8(754);
			return;
	
		case 17:
			func_8(755);
			func_8(756);
			func_8(757);
			return;
	
		case 18:
			func_8(758);
			func_8(759);
			return;
	
		case 19:
			func_8(760);
			func_8(761);
			return;
	
		case 20:
			func_8(762);
			return;
	
		case 21:
			func_8(763);
			return;
	
		case 22:
			func_8(764);
			func_8(765);
			return;
	
		case 23:
			func_8(766);
			return;
	
		case 25:
			func_8(767);
			func_8(768);
			func_8(769);
			return;
	
		case 26:
			func_8(770);
			func_8(771);
			return;
	
		case 28:
			func_8(772);
			func_8(773);
			return;
	
		case 29:
			func_8(774);
			func_8(775);
			return;
	
		case 30:
			func_8(776);
			func_8(777);
			return;
	
		case 32:
			func_8(778);
			func_8(779);
			return;
	
		case 33:
			func_8(780);
			func_8(781);
			func_8(782);
			return;
	
		case 34:
			func_8(783);
			func_8(784);
			return;
	
		case 38:
			func_8(785);
			func_8(786);
			return;
	
		case 39:
			func_8(787);
			func_8(788);
			return;
	
		case 40:
			func_8(789);
			return;
	
		case 41:
			func_8(790);
			func_8(791);
			func_8(792);
			return;
	
		case 42:
			func_8(793);
			func_8(794);
			func_8(795);
			return;
	
		case 43:
			func_8(796);
			func_8(797);
			return;
	
		case 46:
			func_8(798);
			func_8(799);
			return;
	
		default:
		
	}

	switch (iParam0)
	{
		case 47:
			func_8(800);
			func_8(801);
			return;
	
		case 49:
			func_8(802);
			func_8(803);
			return;
	
		case 50:
			func_8(804);
			func_8(805);
			return;
	
		case 51:
			func_8(806);
			return;
	
		case 57:
			func_8(807);
			func_8(808);
			func_8(809);
			return;
	
		case 58:
			func_8(828);
			func_8(829);
			func_8(830);
			return;
	
		case 59:
			func_8(831);
			func_8(832);
			func_8(833);
			return;
	
		case 60:
			func_8(834);
			func_8(835);
			func_8(836);
			return;
	
		case 61:
			func_8(837);
			func_8(838);
			func_8(839);
			return;
	
		case 62:
			func_8(840);
			func_8(841);
			func_8(842);
			return;
	
		case 24:
			func_8(843);
			func_8(844);
			func_8(845);
			return;
	
		default:
			return;
	}

	return;
}

void func_8(int iParam0) // Position - 0x8D3
{
	Global_64031 = true;
	Global_64034 = 1;

	if (Global_76133 > 15)
		return;

	func_9(Global_76133);
	Global_76134[Global_76133 /*9*/] = iParam0;
	Global_76133 = Global_76133 + 1;

	if (Global_64263[iParam0 /*13*/] == 16)
		Global_76285 = 1;

	return;
}

void func_9(int iParam0) // Position - 0x91E
{
	Global_76134[iParam0 /*9*/].f_1 = 0;
	Global_76134[iParam0 /*9*/].f_2 = 0f;
	Global_76134[iParam0 /*9*/].f_3 = 0;
	Global_76134[iParam0 /*9*/].f_4 = 0;
	return;
}

struct<2> func_10(int iParam0) // Position - 0x952
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_119(iParam0) };

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

void func_11() // Position - 0x988
{
	if (Global_64038)
		return;

	Global_64047 = 0;
	Global_76133 = 0;
	Global_64049 = 0;
	Global_64046;
	Global_64046 = false;
	func_18(0);
	func_17();
	Global_76285 = 0;
	Global_64037 = 1;
	func_15();
	func_14();
	func_13();
	func_12();
	Global_64028 = false;
	Global_64058 = 0;
	Global_64066 = -1;
	return;
}

void func_12() // Position - 0x9DE
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_76320[i /*2*/].f_1 = -1;
	}

	Global_76329 = 0;
	return;
}

void func_13() // Position - 0xA0B
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_76286[i /*2*/] = 0;
		Global_76286[i /*2*/].f_1 = -1;
	}

	Global_76319 = 0;
	return;
}

void func_14() // Position - 0xA42
{
	Global_64197 = 0;
	return;
}

void func_15() // Position - 0xA4E
{
	Global_64057 = 0;
	Global_64061 = func_16(joaat("SP0_SHOTS"));
	Global_64060 = func_16(joaat("SP0_HITS"));
	Global_64063 = func_16(joaat("SP1_SHOTS"));
	Global_64062 = func_16(joaat("SP1_HITS"));
	Global_64065 = func_16(joaat("SP2_SHOTS"));
	Global_64064 = func_16(joaat("SP2_HITS"));
	return;
}

var func_16(int iParam0) // Position - 0xAA2
{
	var unk;

	unk_0xDF7F16323520B858(iParam0, &unk, -1);
	return unk;
}

void func_17() // Position - 0xAB6
{
	int i;

	Global_64067 = 0;
	i = 0;

	for (i = 0; i < 64; i = i + 1)
	{
		Global_64068[i /*2*/] = 0;
	}

	return;
}

void func_18(BOOL bParam0) // Position - 0xAE0
{
	Global_79509 = bParam0;
	Global_79510 = bParam0;
	return;
}

void func_19() // Position - 0xAF4
{
	int i;

	Global_64036 = 1;
	i = 0;

	for (i = 0; i < Global_76133; i = i + 1)
	{
		Global_76134[i /*9*/].f_3 = 2;
	}

	Global_64046;
	Global_64046 = false;
	return;
}

void func_20() // Position - 0xB2D
{
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
	{
		if (func_21())
		{
			if (Global_64033 && !Global_64032)
			{
				Global_64033 = false;
				unk_0xD13237BC328B938E("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xD13237BC328B938E("mission_stat_watcher");
		}
	}

	return;
}

BOOL func_21() // Position - 0xB6D
{
	if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) < 1)
		return false;

	if (!Global_64031)
		return false;

	return Global_64043;
}

void func_22(var uParam0) // Position - 0xB97
{
	unk_0x1B79E937E91F40C3(uParam0, uParam0);
	return;
}

void func_23(char* sParam0, int iParam1) // Position - 0xBAA
{
	unk_0x8744D2E3FC95740E(&(Global_101392.f_20), 17);
	func_24(sParam0, iParam1, 0);
	return;
}

void func_24(char* sParam0, int iParam1, int iParam2) // Position - 0xBC7
{
	if (Global_101392 != 10 && Global_101392 != 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_104925, sParam0, 32);
		func_26(&Global_104933, sParam0, 0, "Start", iParam1, iParam2);
		func_25();
		Global_95550 = 0;
	}

	return;
}

void func_25() // Position - 0xC0B
{
	int i;
	int j;

	Global_107917 = Global_104933;
	Global_107917.f_1 = Global_104933.f_1;
	Global_107917.f_6 = Global_104933.f_6;
	Global_107917.f_7 = Global_104933.f_7;
	Global_107917.f_8 = Global_104933.f_8;
	Global_107917.f_2 = Global_104933.f_2;
	Global_107917.f_3 = Global_104933.f_3;
	Global_107917.f_4 = Global_104933.f_4;
	Global_107917.f_5 = Global_104933.f_5;

	for (j = 0; j < 3; j = j + 1)
	{
		Global_107917.f_9[j] = Global_104933.f_9[j];
		Global_107917.f_13[j] = Global_104933.f_13[j];
		Global_107917.f_17[j] = Global_104933.f_17[j];
		Global_107917.f_21[j] = Global_104933.f_21[j];
		Global_107917.f_25[0 /*295*/][j /*98*/] = { Global_104933.f_25[0 /*295*/][j /*98*/] };
		Global_107917.f_25[1 /*295*/][j /*98*/] = { Global_104933.f_25[1 /*295*/][j /*98*/] };
	
		for (i = 0; i < 12; i = i + 1)
		{
			Global_107917.f_616[j /*65*/][i] = Global_104933.f_616[j /*65*/][i];
			Global_107917.f_616[j /*65*/].f_13[i] = Global_104933.f_616[j /*65*/].f_13[i];
			Global_107917.f_616[j /*65*/].f_26[i] = Global_104933.f_616[j /*65*/].f_26[i];
		}
	
		Global_107917.f_616[j /*65*/].f_59 = Global_104933.f_616[j /*65*/].f_59;
		Global_107917.f_616[j /*65*/].f_60 = Global_104933.f_616[j /*65*/].f_60;
		Global_107917.f_616[j /*65*/].f_61 = Global_104933.f_616[j /*65*/].f_61;
		Global_107917.f_616[j /*65*/].f_62 = Global_104933.f_616[j /*65*/].f_62;
		Global_107917.f_616[j /*65*/].f_63 = Global_104933.f_616[j /*65*/].f_63;
		Global_107917.f_616[j /*65*/].f_64 = Global_104933.f_616[j /*65*/].f_64;
	
		for (i = 0; i < 9; i = i + 1)
		{
			Global_107917.f_616[j /*65*/].f_39[i] = Global_104933.f_616[j /*65*/].f_39[i];
			Global_107917.f_616[j /*65*/].f_49[i] = Global_104933.f_616[j /*65*/].f_49[i];
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			Global_107917.f_812[j /*477*/][i /*5*/] = { Global_104933.f_812[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			Global_107917.f_812[j /*477*/].f_221[i /*5*/] = { Global_104933.f_812[j /*477*/].f_221[i /*5*/] };
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			Global_107917.f_2244[j /*32*/][i] = Global_104933.f_2244[j /*32*/][i];
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_107917.f_2244[j /*32*/].f_5[i] = Global_104933.f_2244[j /*32*/].f_5[i];
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			Global_107917.f_2244[j /*32*/].f_16[i] = Global_104933.f_2244[j /*32*/].f_16[i];
		}
	
		Global_107917.f_2341[j] = Global_104933.f_2341[j];
	
		for (i = 0; i <= 3; i = i + 1)
		{
			Global_107917.f_2838[j /*15*/][i] = Global_104933.f_2838[j /*15*/][i];
			Global_107917.f_2838[j /*15*/].f_5[i] = Global_104933.f_2838[j /*15*/].f_5[i];
			Global_107917.f_2838[j /*15*/].f_10[i] = Global_104933.f_2838[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			Global_107917.f_2345[j /*164*/][i] = Global_104933.f_2345[j /*164*/][i];
			Global_107917.f_2345[j /*164*/].f_4[i] = Global_104933.f_2345[j /*164*/].f_4[i];
			Global_107917.f_2345[j /*164*/].f_8[i] = Global_104933.f_2345[j /*164*/].f_8[i];
			Global_107917.f_2345[j /*164*/].f_12[i] = Global_104933.f_2345[j /*164*/].f_12[i];
			Global_107917.f_2345[j /*164*/].f_16[i] = Global_104933.f_2345[j /*164*/].f_16[i];
			Global_107917.f_2345[j /*164*/].f_20[i] = Global_104933.f_2345[j /*164*/].f_20[i];
			Global_107917.f_2345[j /*164*/].f_24[i] = Global_104933.f_2345[j /*164*/].f_24[i];
			Global_107917.f_2345[j /*164*/].f_28[i] = Global_104933.f_2345[j /*164*/].f_28[i];
			Global_107917.f_2345[j /*164*/].f_32[i] = Global_104933.f_2345[j /*164*/].f_32[i];
			Global_107917.f_2345[j /*164*/].f_36[i] = Global_104933.f_2345[j /*164*/].f_36[i];
			Global_107917.f_2345[j /*164*/].f_40[i] = Global_104933.f_2345[j /*164*/].f_40[i];
			Global_107917.f_2345[j /*164*/].f_44[i] = Global_104933.f_2345[j /*164*/].f_44[i];
			Global_107917.f_2345[j /*164*/].f_48[i] = Global_104933.f_2345[j /*164*/].f_48[i];
			Global_107917.f_2345[j /*164*/].f_52[i] = Global_104933.f_2345[j /*164*/].f_52[i];
			Global_107917.f_2345[j /*164*/].f_56[i] = Global_104933.f_2345[j /*164*/].f_56[i];
			Global_107917.f_2345[j /*164*/].f_60[i] = Global_104933.f_2345[j /*164*/].f_60[i];
			Global_107917.f_2345[j /*164*/].f_64[i] = Global_104933.f_2345[j /*164*/].f_64[i];
			Global_107917.f_2345[j /*164*/].f_68[i] = Global_104933.f_2345[j /*164*/].f_68[i];
			Global_107917.f_2345[j /*164*/].f_72[i] = Global_104933.f_2345[j /*164*/].f_72[i];
			Global_107917.f_2345[j /*164*/].f_76[i] = Global_104933.f_2345[j /*164*/].f_76[i];
			Global_107917.f_2345[j /*164*/].f_80[i] = Global_104933.f_2345[j /*164*/].f_80[i];
			Global_107917.f_2345[j /*164*/].f_84[i] = Global_104933.f_2345[j /*164*/].f_84[i];
			Global_107917.f_2345[j /*164*/].f_88[i] = Global_104933.f_2345[j /*164*/].f_88[i];
			Global_107917.f_2345[j /*164*/].f_92[i] = Global_104933.f_2345[j /*164*/].f_92[i];
			Global_107917.f_2345[j /*164*/].f_96[i] = Global_104933.f_2345[j /*164*/].f_96[i];
			Global_107917.f_2345[j /*164*/].f_100[i] = Global_104933.f_2345[j /*164*/].f_100[i];
			Global_107917.f_2345[j /*164*/].f_104[i] = Global_104933.f_2345[j /*164*/].f_104[i];
			Global_107917.f_2345[j /*164*/].f_108[i] = Global_104933.f_2345[j /*164*/].f_108[i];
			Global_107917.f_2345[j /*164*/].f_112[i] = Global_104933.f_2345[j /*164*/].f_112[i];
			Global_107917.f_2345[j /*164*/].f_116[i] = Global_104933.f_2345[j /*164*/].f_116[i];
			Global_107917.f_2345[j /*164*/].f_120[i] = Global_104933.f_2345[j /*164*/].f_120[i];
			Global_107917.f_2345[j /*164*/].f_124[i] = Global_104933.f_2345[j /*164*/].f_124[i];
			Global_107917.f_2345[j /*164*/].f_128[i] = Global_104933.f_2345[j /*164*/].f_128[i];
			Global_107917.f_2345[j /*164*/].f_132[i] = Global_104933.f_2345[j /*164*/].f_132[i];
			Global_107917.f_2345[j /*164*/].f_136[i] = Global_104933.f_2345[j /*164*/].f_136[i];
			Global_107917.f_2345[j /*164*/].f_140[i] = Global_104933.f_2345[j /*164*/].f_140[i];
			Global_107917.f_2345[j /*164*/].f_144[i] = Global_104933.f_2345[j /*164*/].f_144[i];
			Global_107917.f_2345[j /*164*/].f_148[i] = Global_104933.f_2345[j /*164*/].f_148[i];
			Global_107917.f_2345[j /*164*/].f_152[i] = Global_104933.f_2345[j /*164*/].f_152[i];
			Global_107917.f_2345[j /*164*/].f_156[i] = Global_104933.f_2345[j /*164*/].f_156[i];
			Global_107917.f_2345[j /*164*/].f_160[i] = Global_104933.f_2345[j /*164*/].f_160[i];
		}
	}

	Global_107917.f_2884 = { Global_104933.f_2884 };
	Global_107917.f_2884.f_3 = Global_104933.f_2884.f_3;
	Global_107917.f_2890 = { Global_104933.f_2890 };
	Global_107917.f_2890.f_3 = { Global_104933.f_2890.f_3 };
	Global_107917.f_2890.f_6 = Global_104933.f_2890.f_6;
	Global_107917.f_2890.f_8 = Global_107917.f_2890.f_8;
	Global_107917.f_2890.f_7 = Global_104933.f_2890.f_7;
	Global_107917.f_2890.f_9 = Global_104933.f_2890.f_9;
	Global_107917.f_2890.f_11 = Global_104933.f_2890.f_11;
	Global_107917.f_2890.f_10 = Global_104933.f_2890.f_10;
	Global_107917.f_2890.f_12 = Global_104933.f_2890.f_12;
	Global_107917.f_2890.f_12.f_1 = { Global_104933.f_2890.f_12.f_1 };
	Global_107917.f_2890.f_12.f_5 = Global_104933.f_2890.f_12.f_5;
	Global_107917.f_2890.f_12.f_6 = Global_104933.f_2890.f_12.f_6;
	Global_107917.f_2890.f_12.f_7 = Global_104933.f_2890.f_12.f_7;
	Global_107917.f_2890.f_12.f_8 = Global_104933.f_2890.f_12.f_8;
	Global_107917.f_2890.f_12.f_9 = { Global_104933.f_2890.f_12.f_9 };
	Global_107917.f_2890.f_12.f_59 = { Global_104933.f_2890.f_12.f_59 };
	Global_107917.f_2890.f_12.f_62 = Global_104933.f_2890.f_12.f_62;
	Global_107917.f_2890.f_12.f_63 = Global_104933.f_2890.f_12.f_63;
	Global_107917.f_2890.f_12.f_64 = Global_104933.f_2890.f_12.f_64;
	Global_107917.f_2890.f_12.f_65 = Global_104933.f_2890.f_12.f_65;
	Global_107917.f_2890.f_12.f_77 = Global_104933.f_2890.f_12.f_77;
	Global_107917.f_2890.f_12.f_66 = Global_104933.f_2890.f_12.f_66;
	Global_107917.f_2890.f_12.f_67 = Global_104933.f_2890.f_12.f_67;
	Global_107917.f_2890.f_12.f_68 = Global_104933.f_2890.f_12.f_68;
	Global_107917.f_2890.f_12.f_69 = Global_104933.f_2890.f_12.f_69;
	Global_107917.f_2890.f_12.f_71 = Global_104933.f_2890.f_12.f_71;
	Global_107917.f_2890.f_12.f_72 = Global_104933.f_2890.f_12.f_72;
	Global_107917.f_2890.f_12.f_73 = Global_104933.f_2890.f_12.f_73;
	Global_107917.f_2890.f_12.f_74 = Global_104933.f_2890.f_12.f_74;
	Global_107917.f_2890.f_12.f_75 = Global_104933.f_2890.f_12.f_75;
	Global_107917.f_2890.f_12.f_76 = Global_104933.f_2890.f_12.f_76;
	Global_107917.f_2980 = Global_104933.f_2980;
	Global_107917.f_2980.f_1 = Global_104933.f_2980.f_1;
	Global_107917.f_2980.f_2 = Global_104933.f_2980.f_2;
	Global_107917.f_2980.f_3 = Global_104933.f_2980.f_3;
	return;
}

void func_26(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x189F
{
	int i;
	eCharacter j;

	*uParam0 = _GET_CURRENT_PLAYER_CHARACTER_0();
	uParam0->f_1 = func_102();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(unk_0x4A8C381C258A124D());
		func_61(unk_0x4A8C381C258A124D(), false);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
			uParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = CHAR_MICHAEL; j < CHAR_MULTIPLAYER; j = j + 1)
	{
		uParam0->f_17[j] = Global_114370.f_2366.f_539.f_294[j];
	
		if (j == _GET_CURRENT_PLAYER_CHARACTER())
		{
			func_49(unk_0x4A8C381C258A124D(), &uParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j /*65*/][i] = Global_101117[j /*65*/][i];
				uParam0->f_616[j /*65*/].f_13[i] = Global_101117[j /*65*/].f_13[i];
			}
		
			uParam0->f_616[j /*65*/].f_59 = Global_101117[j /*65*/].f_59;
			uParam0->f_616[j /*65*/].f_60 = Global_101117[j /*65*/].f_60;
			uParam0->f_616[j /*65*/].f_61 = Global_101117[j /*65*/].f_61;
			uParam0->f_616[j /*65*/].f_62 = Global_101117[j /*65*/].f_62;
			uParam0->f_616[j /*65*/].f_63 = Global_101117[j /*65*/].f_63;
			uParam0->f_616[j /*65*/].f_64 = Global_101117[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j /*65*/].f_39[i] = Global_101117[j /*65*/].f_39[i];
				uParam0->f_616[j /*65*/].f_49[i] = Global_101117[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/] = { Global_114370.f_2366.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_114370.f_2366.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case CHAR_MICHAEL:
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_FRANKLIN:
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_TREVOR:
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				unk_0xDF7F16323520B858(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = Global_114370.f_20567.f_233[j /*69*/].f_1;
		uParam0->f_13[j] = Global_61212[j];
		uParam0->f_25[0 /*295*/][j /*98*/] = { Global_114370.f_2366.f_539.f_2407[0 /*295*/][j /*98*/] };
		uParam0->f_25[1 /*295*/][j /*98*/] = { Global_114370.f_2366.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = Global_114370.f_2366.f_493[j /*15*/][i];
			uParam0->f_2838[j /*15*/].f_5[i] = Global_114370.f_2366.f_493[j /*15*/].f_5[i];
			uParam0->f_2838[j /*15*/].f_10[i] = Global_114370.f_2366.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = Global_114370.f_2366[j /*164*/][i];
			uParam0->f_2345[j /*164*/].f_4[i] = Global_114370.f_2366[j /*164*/].f_4[i];
			uParam0->f_2345[j /*164*/].f_8[i] = Global_114370.f_2366[j /*164*/].f_8[i];
			uParam0->f_2345[j /*164*/].f_12[i] = Global_114370.f_2366[j /*164*/].f_12[i];
			uParam0->f_2345[j /*164*/].f_16[i] = Global_114370.f_2366[j /*164*/].f_16[i];
			uParam0->f_2345[j /*164*/].f_20[i] = Global_114370.f_2366[j /*164*/].f_20[i];
			uParam0->f_2345[j /*164*/].f_24[i] = Global_114370.f_2366[j /*164*/].f_24[i];
			uParam0->f_2345[j /*164*/].f_28[i] = Global_114370.f_2366[j /*164*/].f_28[i];
			uParam0->f_2345[j /*164*/].f_32[i] = Global_114370.f_2366[j /*164*/].f_32[i];
			uParam0->f_2345[j /*164*/].f_36[i] = Global_114370.f_2366[j /*164*/].f_36[i];
			uParam0->f_2345[j /*164*/].f_40[i] = Global_114370.f_2366[j /*164*/].f_40[i];
			uParam0->f_2345[j /*164*/].f_44[i] = Global_114370.f_2366[j /*164*/].f_44[i];
			uParam0->f_2345[j /*164*/].f_48[i] = Global_114370.f_2366[j /*164*/].f_48[i];
			uParam0->f_2345[j /*164*/].f_52[i] = Global_114370.f_2366[j /*164*/].f_52[i];
			uParam0->f_2345[j /*164*/].f_56[i] = Global_114370.f_2366[j /*164*/].f_56[i];
			uParam0->f_2345[j /*164*/].f_60[i] = Global_114370.f_2366[j /*164*/].f_60[i];
			uParam0->f_2345[j /*164*/].f_64[i] = Global_114370.f_2366[j /*164*/].f_64[i];
			uParam0->f_2345[j /*164*/].f_68[i] = Global_114370.f_2366[j /*164*/].f_68[i];
			uParam0->f_2345[j /*164*/].f_72[i] = Global_114370.f_2366[j /*164*/].f_72[i];
			uParam0->f_2345[j /*164*/].f_76[i] = Global_114370.f_2366[j /*164*/].f_76[i];
			uParam0->f_2345[j /*164*/].f_80[i] = Global_114370.f_2366[j /*164*/].f_80[i];
			uParam0->f_2345[j /*164*/].f_84[i] = Global_114370.f_2366[j /*164*/].f_84[i];
			uParam0->f_2345[j /*164*/].f_88[i] = Global_114370.f_2366[j /*164*/].f_88[i];
			uParam0->f_2345[j /*164*/].f_92[i] = Global_114370.f_2366[j /*164*/].f_92[i];
			uParam0->f_2345[j /*164*/].f_96[i] = Global_114370.f_2366[j /*164*/].f_96[i];
			uParam0->f_2345[j /*164*/].f_100[i] = Global_114370.f_2366[j /*164*/].f_100[i];
			uParam0->f_2345[j /*164*/].f_104[i] = Global_114370.f_2366[j /*164*/].f_104[i];
			uParam0->f_2345[j /*164*/].f_108[i] = Global_114370.f_2366[j /*164*/].f_108[i];
			uParam0->f_2345[j /*164*/].f_112[i] = Global_114370.f_2366[j /*164*/].f_112[i];
			uParam0->f_2345[j /*164*/].f_116[i] = Global_114370.f_2366[j /*164*/].f_116[i];
			uParam0->f_2345[j /*164*/].f_120[i] = Global_114370.f_2366[j /*164*/].f_120[i];
			uParam0->f_2345[j /*164*/].f_124[i] = Global_114370.f_2366[j /*164*/].f_124[i];
			uParam0->f_2345[j /*164*/].f_128[i] = Global_114370.f_2366[j /*164*/].f_128[i];
			uParam0->f_2345[j /*164*/].f_132[i] = Global_114370.f_2366[j /*164*/].f_132[i];
			uParam0->f_2345[j /*164*/].f_136[i] = Global_114370.f_2366[j /*164*/].f_136[i];
			uParam0->f_2345[j /*164*/].f_140[i] = Global_114370.f_2366[j /*164*/].f_140[i];
			uParam0->f_2345[j /*164*/].f_144[i] = Global_114370.f_2366[j /*164*/].f_144[i];
			uParam0->f_2345[j /*164*/].f_148[i] = Global_114370.f_2366[j /*164*/].f_148[i];
			uParam0->f_2345[j /*164*/].f_152[i] = Global_114370.f_2366[j /*164*/].f_152[i];
			uParam0->f_2345[j /*164*/].f_156[i] = Global_114370.f_2366[j /*164*/].f_156[i];
			uParam0->f_2345[j /*164*/].f_160[i] = Global_114370.f_2366[j /*164*/].f_160[i];
		}
	}

	unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
	unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
	unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_28(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);

	func_27(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_27(var uParam0) // Position - 0x2728
{
	*uParam0 = Global_97221;
	uParam0->f_1 = Global_97222;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_28(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x274A
{
	var unk;

	if (iParam2 == 0)
		iParam2 = unk_0x4A8C381C258A124D();

	if (unk_0xFC8BFE4B41177C22(iParam2))
		uParam1->f_5 = _GET_PLAYER_CHARACTER_FROM_PED(iParam2);

	if (func_43(iParam2, &unk, iParam3, iParam5))
		func_29(uParam0, uParam1, unk, iParam4);
	else if (unk_0xFC8BFE4B41177C22(unk))
		if (!unk_0x1C2F771CDC87A3A5(unk, 0))
			if (unk_0x2E6A27037F1DC473(unk, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk, 0))
				func_29(uParam0, uParam1, unk, iParam4);

	return;
}

int func_29(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x27D2
{
	if (unk_0xD9F5E1FEFD1329E4(uParam2, 0))
	{
		func_31(uParam0, uParam2, iParam3);
		uParam1->f_4 = uParam2;
	
		if (func_30(uParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_30(int iParam0) // Position - 0x2812
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_101392.f_22[i] == iParam0)
			return true;
	}

	return false;
}

void func_31(var uParam0, var uParam1, int iParam2) // Position - 0x2840
{
	func_38(uParam1, &(uParam0->f_12));
	uParam0->f_7 = func_34(uParam1, _CHAR_NULL, 0);
	uParam0->f_11 = func_33(uParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_32(uParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(uParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(uParam1) };
	
		if (unk_0x5105BE70DEF1F5FB(uParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78943 == uParam1)
			uParam0->f_9 = 1;
	}

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_32(var uParam0) // Position - 0x291C
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78038.f_484[i]))
			if (uParam0 == Global_78038.f_484[i])
				return 1;
	}

	return 0;
}

eCharacter func_33(var uParam0) // Position - 0x295E
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return _CHAR_NULL;

	if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98703[i]))
			if (Global_98703[i] == uParam0)
				return Global_98713[i];
	}

	return _CHAR_NULL;
}

int func_34(var uParam0, eCharacter echParam1, int iParam2) // Position - 0x29C1
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return 0;

	if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98703[i]))
			if (Global_98703[i] == uParam0)
				if (echParam1 == _CHAR_NULL || echParam1 == Global_98713[i])
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(uParam0) == func_35(echParam1, iParam2))
						return 1;
	}

	return 0;
}

int func_35(eCharacter echParam0, int iParam1) // Position - 0x2A4F
{
	int num;

	if (func_37(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_36(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_36(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2A91
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_114370.f_9088.f_99.f_58[128] && !Global_114370.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114370.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114370.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_37(eCharacter echParam0) // Position - 0x2CE8
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_38(var uParam0, var uParam1) // Position - 0x2CF4
{
	int i;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		func_42(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(uParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(uParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(uParam0);
		unk_0xFF4B16F297D9CB3E(uParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(uParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(uParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(uParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(uParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(uParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(uParam0);
		unk_0x04434FA56DED5500(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(uParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (unk_0xF1B79038130E3C08(uParam0, 2))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
	
		if (unk_0xF1B79038130E3C08(uParam0, 3))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
	
		if (unk_0xF1B79038130E3C08(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
	
		if (unk_0xF1B79038130E3C08(uParam0, 1))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_41(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (unk_0x7943BD10E2A03FAC(uParam0, 0))
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(uParam0);
	
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(uParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(uParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
				
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
	
		if (!unk_0xE6BE8A525BA6BD44(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
	
		if (unk_0xFDA2576D37032738(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
	
		if (unk_0xA9D64A14804D119B(uParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (unk_0x2C0B2BB7913E8DBA(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
	
		func_40(&uParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk_0x5318DF85BEB6B95F(uParam0, i + 1))
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_39(i + 1));
		}
	
		if (unk_0x0BCE48C8677F9824(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
	
		if (unk_0xD130E7CDEE903624(uParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(uParam0, "IgnoredByQuickSave"))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
	}

	return;
}

int func_39(int iParam0) // Position - 0x2F9D
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_40(var uParam0, var uParam1, var uParam2) // Position - 0x304D
{
	int i;
	int num;

	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
		return 0;

	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		num = i;
	
		if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21)
		{
			uParam1->[i] = 0;
		
			if (unk_0x1D5A665629D417A7(*uParam0, num))
				uParam1->[i] = 1;
		}
		else if (num == 22)
		{
			if (unk_0x1D5A665629D417A7(*uParam0, num))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = unk_0x94C9CD3D66808551(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_41(int iParam0) // Position - 0x3240
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_42(var uParam0) // Position - 0x3260
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_43(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x3310
{
	var unk;

	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
				*uParam1 = unk_0xDC8D5832207C2EAD();
			else
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
		
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
								return false;
					
						if (func_44(*uParam1, _GET_CURRENT_PLAYER_CHARACTER_0(), true))
						{
							unk = unk_0x1AF90EB93E0012D6();
						
							if (!unk_0x1B79E937E91F40C3(unk, "save_anywhere"))
								return false;
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
								return false;
						}
					
						if (iParam3 == 1)
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_44(var uParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x343C
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return false;

	for (i = 0; func_45(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114370.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_45(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x34AA
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(int iParam0) // Position - 0x357C
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35B9
{
	if (func_37(character))
		return func_48(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_48(eCharacter echParam0) // Position - 0x35DE
{
	return Global_2139[echParam0 /*29*/];
}

void func_49(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x35ED
{
	eCharacter character;
	int i;

	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);
	
		for (i = 0; i < 12; i = i + 1)
		{
			func_57(iParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = 0; i < 9; i = i + 1)
		{
			func_56(iParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_37(character))
		{
			uParam1->f_59 = Global_114370.f_2366.f_539[character /*65*/].f_59;
			uParam1->f_60 = Global_114370.f_2366.f_539[character /*65*/].f_60;
			uParam1->f_61 = Global_114370.f_2366.f_539[character /*65*/].f_61;
			uParam1->f_62 = Global_114370.f_2366.f_539[character /*65*/].f_62;
			uParam1->f_63 = Global_114370.f_2366.f_539[character /*65*/].f_63;
			uParam1->f_64 = Global_114370.f_2366.f_539[character /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_54(161, iParam3))
				uParam1->f_59 = func_50(2053, iParam3);
			else
				uParam1->f_59 = func_50(753, iParam3);
		
			uParam1->f_60 = func_50(754, iParam3);
			uParam1->f_61 = func_50(755, iParam3);
		}
	
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
			if (func_54(161, iParam3))
				uParam1->f_59 = func_50(2053, iParam3);
			else
				uParam1->f_59 = func_50(753, iParam3);
	}

	return;
}

int func_50(int iParam0, int iParam1) // Position - 0x3787
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_51(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

var func_51(int iParam0, int iParam1) // Position - 0x37B6
{
	return unk_0xD69CE161FE614531(0, iParam0, func_52(iParam1));
}

int func_52(int iParam0) // Position - 0x37CB
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_53();
	
		if (num2 > -1)
		{
			Global_2750546 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750546 = 1;
		}
	}

	return num;
}

int func_53() // Position - 0x37FF
{
	return Global_1574925;
}

BOOL func_54(int iParam0, int iParam1) // Position - 0x380B
{
	var unk;
	BOOL num;

	unk = func_55(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_55(int iParam0, int iParam1) // Position - 0x382F
{
	return unk_0xD69CE161FE614531(2, iParam0, func_52(iParam1));
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x3844
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (iParam1 == 0)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x3D8D
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(iParam0);

	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 8)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3FCE
{
	func_59();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_59() // Position - 0x3FE7
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_37(character) && !func_60(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_37(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_60(int iParam0) // Position - 0x40E6
{
	return Global_43922 == iParam0;
}

void func_61(var uParam0, BOOL bParam1) // Position - 0x40F4
{
	eCharacter character;
	var unk;
	int i;
	var unk2;

	character = _GET_PLAYER_CHARACTER_FROM_PED(uParam0);

	if (func_37(character) && !unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (uParam0 == unk_0x4A8C381C258A124D())
		{
			func_62(uParam0, &Global_114370.f_2366.f_539.f_298[character /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_114370.f_2366.f_539.f_1730[i /*4*/][character] = unk_0xFCFCA9D377ED6568(i);
			
				if (bParam1)
				{
					unk = unk_0xAE146ED24909CAF4();
				
					if (Global_114370.f_2366.f_539.f_1730[i /*4*/][character] == unk)
						Global_114370.f_2366.f_539.f_1763 = i;
				}
			}
		
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &unk2);
		
			if (character == CHAR_MICHAEL)
				unk_0x1164A75E490C27B6(joaat("SP0_PARACHUTE_CURRENT_TINT"), unk2, 1);
			else if (character == CHAR_FRANKLIN)
				unk_0x1164A75E490C27B6(joaat("SP1_PARACHUTE_CURRENT_TINT"), unk2, 1);
			else if (character == CHAR_TREVOR)
				unk_0x1164A75E490C27B6(joaat("SP2_PARACHUTE_CURRENT_TINT"), unk2, 1);
		}
	}

	return;
}

void func_62(var uParam0, var uParam1) // Position - 0x41E7
{
	int i;
	int j;
	int k;
	int num;
	int num2;
	int l;
	int num3;
	var unk5;
	var unk44;
	int num4;
	int num5;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			num = func_67(i);
		
			if (num != 0)
			{
				num2 = unk_0xBCEDAE6CA2B2046E(uParam0, func_67(i));
				num2.f_1 = 0;
				num2.f_2 = 0;
				num2.f_3 = 0;
				num2.f_4 = 0;
			
				if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
				{
					num2.f_1 = unk_0x1149D67DB429787A(uParam0, num2);
				
					if (num2 == joaat("GADGET_PARACHUTE"))
						num2.f_1 = 1;
				
					num2.f_3 = unk_0x6C81F95CADD1E6D0(uParam0, num2);
					num2.f_4 = unk_0xB92D606AB30C334C(uParam0, num2);
				
					if (num2.f_1 == -1)
						if (!unk_0xACBE463290141D49(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = num2.f_1;
					j = 0;
				
					for (k = func_65(num2, j); k != 0; k = func_65(num2, j))
					{
						if (unk_0x5EDED4B3E1A48E68(uParam0, num2, k))
							unk_0x0B0C9A0F9AAEB7F0(&(num2.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { num2 };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		num3 = unk_0xAFA659708600A8CD();
	
		for (l = 0; l < num3; l = l + 1)
		{
			if (unk_0xA40B513DA7201333(l, &unk5) && !func_64(unk5.f_1) && num4 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(unk5))
				{
					num2 = unk5.f_1;
					num2.f_1 = 0;
					num2.f_2 = 0;
					num2.f_3 = 0;
					num2.f_4 = 0;
					num2.f_1 = unk_0x1149D67DB429787A(uParam0, num2);
				
					if (unk_0x66B90BA528CFEBCE(uParam0, num2, 0))
					{
						num2.f_3 = unk_0x6C81F95CADD1E6D0(uParam0, num2);
						num2.f_4 = unk_0xB92D606AB30C334C(uParam0, num2);
					}
				
					if (num2.f_1 == -1)
						if (!unk_0xACBE463290141D49(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->f_221[num4 /*5*/].f_1 = num2.f_1;
					num5 = 0;
				
					for (j = 0; j < unk_0x0A334014DFD4952C(l); j = j + 1)
					{
						if (unk_0x38A1582CAC3F4E95(l, j, &unk44))
						{
							if (!func_63(unk44.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(uParam0, num2, unk44.f_3))
									unk_0x0B0C9A0F9AAEB7F0(&(num2.f_2), num5);
							
								num5 = num5 + 1;
							}
						}
					}
				}
			
				if (num2 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(uParam0, num2, 0))
					{
						num2 = 0;
						num2.f_1 = 0;
					}
				}
			
				uParam1->f_221[num4 /*5*/] = { num2 };
				num4 = num4 + 1;
			}
		}
	}

	return;
}

BOOL func_63(int iParam0) // Position - 0x446F
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_64(int iParam0) // Position - 0x4510
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
			case 1924557585:
			case 62870901:
				return true;
		}
	}

	return false;
}

int func_65(int iParam0, int iParam1) // Position - 0x46FC
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk40;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			
				case 5:
					num = 1400690398;
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					num = -1566778158;
					break;
			
				case 8:
					num = 1694268374;
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					num = 1605520746;
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 4:
					num = 221907180;
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			
				case 8:
					num = 302671608;
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					num = -1240142720;
					break;
			}
			break;
	
		case 1924557585:
			switch (iParam1)
			{
				case 0:
					num = -292433650;
					break;
			
				case 1:
					num = 494808810;
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		default:
			if (iParam0 != 0)
			{
				num2 = func_66(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x660FA55F8D417CAB(num2); i = i + 1)
					{
						if (unk_0x737024F2814ABDDD(num2, i, &unk40))
						{
							if (!func_63(unk40.f_3))
							{
								if (num3 == iParam1)
									return unk40.f_3;
							
								num3 = num3 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_66(int iParam0, var uParam1) // Position - 0x541D
{
	int i;
	int num;

	num = unk_0x9A7818E159C72516();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk_0xDF94727C5BBB298F(i, uParam1))
			if (uParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

int func_67(int iParam0) // Position - 0x5458
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_68(var uParam0) // Position - 0x56CC
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(uParam0);

	if (func_37(character) && !unk_0x4FAFF4BCB7633475(uParam0))
		Global_114370.f_2366.f_539.f_294[character] = unk_0xE5E6F6EFCE07789A(uParam0);

	return;
}

void func_69(var uParam0, int iParam1) // Position - 0x5708
{
	var unk;
	var unk2;
	var unk5;
	eCharacter character;

	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_79497, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_79497, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_79497, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_79497, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_73(&unk))
		{
			if (func_71(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			character = _GET_CURRENT_PLAYER_CHARACTER_0();
		
			if (character == CHAR_MICHAEL)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (character == CHAR_FRANKLIN)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (character == CHAR_TREVOR)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_70(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x5C57
{
	var unk;
	var unk2;

	if (!unk_0x7830326EF9D54DBB(uParam0))
	{
		unk = unk_0x0556019E7EE8EC9A(fParam4, sParam3);
	
		if (!unk_0xF8A8852F99E201DD(unk))
			return false;
	
		unk2 = unk_0x91398220755C14BF(uParam0);
	
		if (unk2 == unk)
			return true;
	}

	return false;
}

BOOL func_71(int iParam0, var uParam1, var uParam2) // Position - 0x5C9B
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_72(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_72(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x641A
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_73(var uParam0) // Position - 0x6461
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_101())
		{
			*uParam0 = func_79(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, false, true, -1);
		
			if (func_78(*uParam0) && !func_74(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_74(int iParam0) // Position - 0x64BC
{
	return func_75(iParam0, 0, true);
}

BOOL func_75(int iParam0, int iParam1, BOOL bParam2) // Position - 0x64CC
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101444.f_1414[iParam0], iParam1);
	else if (unk_0x76CD105BCAC6EB9F())
		if (func_77() == 0)
			return IS_BIT_SET(func_50(func_76(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114370.f_668[iParam0], iParam1);

	return false;
}

int func_76(int iParam0) // Position - 0x652C
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12725;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		default:
			break;
	}

	return 14626;
}

int func_77() // Position - 0x68D4
{
	return Global_32828;
}

BOOL func_78(int iParam0) // Position - 0x68DF
{
	return func_75(iParam0, 5, true);
}

int func_79(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x68EF
{
	int i;
	float num;
	float num2;
	int num3;

	num2 = 1000000f;
	num3 = -1;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_100(i))
		{
			if (!bParam5 || func_99(i))
			{
				num = unk_0xED977E2AE2CB16EE(uParam0, func_80(i, false), 1);
			
				if (num < num2 && num <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num2 = num;
					num3 = i;
				}
			}
		}
	}

	return num3;
}

Vector3 func_80(int iParam0, BOOL bParam1) // Position - 0x6991
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_96(Global_103545);
	
		case 46:
			if (Global_1845093 != _INVALID_PLAYER_INDEX())
				if (func_94(Global_1845093))
					return func_87(2, 2);
				else if (func_86(Global_1845093))
					return func_87(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return func_84(-9.9f, -0.5f, 1f);
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1963523;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657921[unk_0x259BE71D8A81D4FA() /*463*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_81();
	
		case 59:
			return 560f, -405f, -69.6591f;
	
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_81() // Position - 0x70FC
{
	if (!_IS_NULL_VECTOR(Global_1948900))
		return Global_1948900;

	switch (func_82())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_82() // Position - 0x73F7
{
	return Global_2652572.f_2650;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x7406
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_84(float fParam0, float fParam1, float fParam2) // Position - 0x7430
{
	return unk_0xF10F2A2453AF1DFB(func_85(), 0f, fParam0);
}

Vector3 func_85() // Position - 0x7445
{
	return -880f, -2770f, -50f;
}

BOOL func_86(Player plParam0) // Position - 0x745C
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 0) || IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 1) || IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 2))
			return true;

	return false;
}

Vector3 func_87(int iParam0, int iParam1) // Position - 0x74B4
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1845093 != _INVALID_PLAYER_INDEX())
		if (iParam1 == 3)
			if (func_88(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1845263[Global_1845093 /*877*/].f_267.f_290, 4))
				if (func_88(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1845263[Global_1845093 /*877*/].f_267.f_290, 5))
				if (func_88(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_88(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x755E
{
	var unk;
	var unk7;
	var unk13;
	var unk19;

	if (!func_93(iParam3, &unk))
		return false;

	if (!func_93(iParam1, &unk7))
		return false;

	if (!bParam4)
		unk13 = { func_91(iParam0) };
	else
		unk13 = { func_90(iParam0) };

	unk19 = { unk13 - unk };
	unk19 = { func_89(unk19, -unk.f_3.f_2) };
	unk19 = { func_89(unk19, unk7.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(unk7, 0f, unk19) };
	uParam2->f_3 = { unk13.f_3 };
	return true;
}

Vector3 func_89(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x75F3
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_90(int iParam0) // Position - 0x7637
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_91(int iParam0) // Position - 0x77BB
{
	return func_92(iParam0);
}

struct<6> func_92(int iParam0) // Position - 0x77C9
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_93(int iParam0, var uParam1) // Position - 0x8295
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_94(Player plParam0) // Position - 0x8317
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 3) || IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 4) || IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_290, 5))
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x836F
{
	return -1;
}

Vector3 func_96(int iParam0) // Position - 0x8378
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return func_85();
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_97() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_97() // Position - 0x85E4
{
	return func_98(unk_0x259BE71D8A81D4FA());
}

int func_98(int iParam0) // Position - 0x85F4
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657921[iParam0 /*463*/].f_321.f_3, 28, 31);
}

BOOL func_99(int iParam0) // Position - 0x8611
{
	return func_75(iParam0, 0, false);
}

int func_100(int iParam0) // Position - 0x8621
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	}

	return 6;
}

BOOL func_101() // Position - 0x8957
{
	return Global_101444.f_393 > 0;
}

var func_102() // Position - 0x8968
{
	var unk;

	func_112(&unk, unk_0x4BA5A16068183C5E());
	func_111(&unk, unk_0x18E502A71E28968C());
	func_110(&unk, unk_0x5295501D0862870D());
	func_105(&unk, unk_0xB12880C92EA6EE15());
	func_104(&unk, unk_0x8825A6E0A30BDCB8());
	func_103(&unk, unk_0x7598FE4545010A75());
	return unk;
}

void func_103(var uParam0, int iParam1) // Position - 0x89AE
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

void func_104(var uParam0, int iParam1) // Position - 0x8A34
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_105(var uParam0, int iParam1) // Position - 0x8A67
{
	int num;
	int num2;

	num = func_109(*uParam0);
	num2 = func_107(*uParam0);

	if (iParam1 < 1 || iParam1 > func_106(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_106(int iParam0, int iParam1) // Position - 0x8AB8
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

int func_107(int iParam0) // Position - 0x8B5A
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_108(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8B7C
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_109(int iParam0) // Position - 0x8B93
{
	return iParam0 & 15;
}

void func_110(var uParam0, int iParam1) // Position - 0x8BA0
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_111(var uParam0, int iParam1) // Position - 0x8BDA
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x8C15
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0x8C51
{
	if (Global_101392 == 10 || Global_101392 == 9)
		return true;

	return false;
}

void func_114(int iParam0) // Position - 0x8C75
{
	int num;
	var unk;

	if (unk_0x1226C55CA7D2269A() || func_116())
	{
		num = iParam0;
		unk_0x012C74D626CB4559(9, &num, 1, 1);
	}
	else if (unk_0x0BA1A956D36B210F() || func_115())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "SPRC_", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "_STR", 24);
		unk_0x5F974E79EAE32BE7(9, &unk);
	}

	return;
}

BOOL func_115() // Position - 0x8CCE
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_116() // Position - 0x8CE4
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

void func_117(char* sParam0, var uParam1, int iParam2) // Position - 0x8CFA
{
	if (!unk_0xD6F9DEE4765092A9(&Global_98442))
	{
		unk_0x1A6EB10909EB6840(&Global_98442, 0, 0, 0, 1, 0);
		TEXT_LABEL_ASSIGN_STRING(&Global_98442, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98442, sParam0, 64);
	unk_0x048963DA591ECAAF(sParam0, uParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x8D3B
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

struct<2> func_119(int iParam0) // Position - 0x8D63
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

void func_120(int iParam0, var uParam1) // Position - 0x91AF
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_10(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 1:
			func_121(uParam1, "Abigail2", func_10(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 2:
			func_121(uParam1, "Barry1", func_10(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 3:
			func_121(uParam1, "Barry2", func_10(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 4:
			func_121(uParam1, "Barry3", func_10(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 5:
			func_121(uParam1, "Barry3A", func_10(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 6:
			func_121(uParam1, "Barry3C", func_10(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 7:
			func_121(uParam1, "Barry4", func_10(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
	
		case 8:
			func_121(uParam1, "Dreyfuss1", func_10(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 9:
			func_121(uParam1, "Epsilon1", func_10(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 10:
			func_121(uParam1, "Epsilon2", func_10(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 11:
			func_121(uParam1, "Epsilon3", func_10(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 12:
			func_121(uParam1, "Epsilon4", func_10(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 13:
			func_121(uParam1, "Epsilon5", func_10(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 14:
			func_121(uParam1, "Epsilon6", func_10(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 15:
			func_121(uParam1, "Epsilon7", func_10(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 16:
			func_121(uParam1, "Epsilon8", func_10(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 17:
			func_121(uParam1, "Extreme1", func_10(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 18:
			func_121(uParam1, "Extreme2", func_10(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 19:
			func_121(uParam1, "Extreme3", func_10(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 20:
			func_121(uParam1, "Extreme4", func_10(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 21:
			func_121(uParam1, "Fanatic1", func_10(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
	
		case 22:
			func_121(uParam1, "Fanatic2", func_10(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
	
		case 23:
			func_121(uParam1, "Fanatic3", func_10(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
	
		case 24:
			func_121(uParam1, "Hao1", func_10(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
	
		case 25:
			func_121(uParam1, "Hunting1", func_10(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 26:
			func_121(uParam1, "Hunting2", func_10(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 27:
			func_121(uParam1, "Josh1", func_10(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 28:
			func_121(uParam1, "Josh2", func_10(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 29:
			func_121(uParam1, "Josh3", func_10(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 30:
			func_121(uParam1, "Josh4", func_10(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 31:
			func_121(uParam1, "Maude1", func_10(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 32:
			func_121(uParam1, "Minute1", func_10(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 33:
			func_121(uParam1, "Minute2", func_10(iParam0), 0, 10, 4, 18f, 4527f, 105f, &func_1, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 34:
			func_121(uParam1, "Minute3", func_10(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, &func_1, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 35:
			func_121(uParam1, "MrsPhilips1", func_10(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 36:
			func_121(uParam1, "MrsPhilips2", func_10(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 37:
			func_121(uParam1, "Nigel1", func_10(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 38:
			func_121(uParam1, "Nigel1A", func_10(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 39:
			func_121(uParam1, "Nigel1B", func_10(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 40:
			func_121(uParam1, "Nigel1C", func_10(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 41:
			func_121(uParam1, "Nigel1D", func_10(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
	
		case 42:
			func_121(uParam1, "Nigel2", func_10(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 43:
			func_121(uParam1, "Nigel3", func_10(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
	
		case 44:
			func_121(uParam1, "Omega1", func_10(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 45:
			func_121(uParam1, "Omega2", func_10(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 46:
			func_121(uParam1, "Paparazzo1", func_10(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 47:
			func_121(uParam1, "Paparazzo2", func_10(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 48:
			func_121(uParam1, "Paparazzo3", func_10(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 49:
			func_121(uParam1, "Paparazzo3A", func_10(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 50:
			func_121(uParam1, "Paparazzo3B", func_10(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 51:
			func_121(uParam1, "Paparazzo4", func_10(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 52:
			func_121(uParam1, "Rampage1", func_10(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 54:
			func_121(uParam1, "Rampage3", func_10(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 55:
			func_121(uParam1, "Rampage4", func_10(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 56:
			func_121(uParam1, "Rampage5", func_10(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
	
		case 53:
			func_121(uParam1, "Rampage2", func_10(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
	
		case 57:
			func_121(uParam1, "TheLastOne", func_10(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 58:
			func_121(uParam1, "Tonya1", func_10(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 59:
			func_121(uParam1, "Tonya2", func_10(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 60:
			func_121(uParam1, "Tonya3", func_10(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 61:
			func_121(uParam1, "Tonya4", func_10(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		case 62:
			func_121(uParam1, "Tonya5", func_10(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_121(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xA363
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

int func_122(int iParam0) // Position - 0xA3F4
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

void func_123() // Position - 0xA73A
{
	char* scriptName;

	scriptName = "MrsPhilips2";
	unk_0x97A5024CE91641F1(scriptName);

	while (!unk_0xA6E4F7A73ABC4A76(scriptName))
	{
		unk_0x97A5024CE91641F1(scriptName);
		SYSTEM::WAIT(0);
	}

	func_124(36);
	SYSTEM::START_NEW_SCRIPT(scriptName, 60500);
	unk_0xFD49725F3FE7EE13(scriptName);
	return;
}

void func_124(int iParam0) // Position - 0xA77C
{
	var unk;

	func_139();

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 250, 0);
	}

	if (func_138(iParam0))
		unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 0);

	unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xA790E8E6FD7393AC(0, 1);
	unk_0xA790E8E6FD7393AC(3, 1);
	unk_0xA790E8E6FD7393AC(2, 1);

	if (Global_45122 == true)
		if (func_136(unk_0x4A8C381C258A124D()))
			func_127(unk_0x4A8C381C258A124D());

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (iParam0 < 63)
		{
			func_125(iParam0);
			unk = { func_10(iParam0) };
			unk_0xB51A8DA1DD0D2E4E(1, &unk);
		}
	}

	return;
}

void func_125(int iParam0) // Position - 0xA817
{
	if (iParam0 < 63)
	{
		func_126();
		Global_79504 = iParam0;
		Global_79503 = 0;
		Global_79506 = 7;
	}

	return;
}

void func_126() // Position - 0xA83D
{
	Global_79503 != 6;

	if (Global_79508)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_79508 = false;
		Global_23711.f_9116 = 0;
	}

	Global_79503 = 6;
	Global_79505 = -1;
	Global_79504 = -1;
	return;
}

void func_127(int iParam0) // Position - 0xA875
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return;

	num = func_135(iParam0);

	if (!(num == -1))
	{
		num2 = Global_44908[num /*5*/];
		func_130(1, num2, 1);
		return;
	}

	num3 = func_129(iParam0);

	if (num3 == -1)
		return;

	func_128(num3);
	return;
}

void func_128(int iParam0) // Position - 0xA8CE
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_44882[iParam0 /*5*/].f_1 == 0))
		if (Global_44882[iParam0 /*5*/].f_1 == unk_0x4A8C381C258A124D())
			Global_45120 = 0;

	Global_44882[iParam0 /*5*/] = 13;
	Global_44882[iParam0 /*5*/].f_1 = 0;
	Global_44882[iParam0 /*5*/].f_2 = 0;
	Global_44882[iParam0 /*5*/].f_3 = 0;
	Global_44882[iParam0 /*5*/].f_4 = 0;
	Global_44880 = Global_44880 - 1;

	if (Global_44880 < 0)
		Global_44880 = 0;

	return;
}

int func_129(int iParam0) // Position - 0xA951
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44882[i /*5*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0xA982
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xA997
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_133(iParam0, iParam1, iParam2))
		return;

	num = func_132();

	if (num == -1)
		return;

	Global_44989[num /*6*/] = iParam0;
	Global_44989[num /*6*/].f_1 = iParam1;
	Global_44989[num /*6*/].f_2 = iParam2;
	Global_44989[num /*6*/].f_3 = iParam3;
	Global_44989[num /*6*/].f_4 = iParam4;
	Global_44989[num /*6*/].f_5 = iParam5;
	return;
}

int func_132() // Position - 0xAA19
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44989[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_133(int iParam0, int iParam1, int iParam2) // Position - 0xAA4A
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_134(int iParam0, int iParam1, int iParam2) // Position - 0xAA65
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44989[i /*6*/].f_2)
			if (iParam0 == Global_44989[i /*6*/])
				if (iParam1 == Global_44989[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_135(int iParam0) // Position - 0xAAB1
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44908[i /*5*/] == -1))
			if (iParam0 == Global_44908[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_136(var uParam0) // Position - 0xAAFA
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (!unk_0x4FAFF4BCB7633475(uParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0xAB1A
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

BOOL func_138(int iParam0) // Position - 0xAB3B
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}

	return true;
}

void func_139() // Position - 0xAB8E
{
	if (Global_9488[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9488[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9488[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9488[2 /*2811*/][0 /*281*/].f_259 = 0;

	unk_0x8744D2E3FC95740E(&Global_8683, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
	return;
}

void func_140(char* sParam0) // Position - 0xAC0B
{
	!unk_0xD6F9DEE4765092A9(sParam0);
	return;
}

BOOL func_141(int iParam0) // Position - 0xAC1D
{
	if (iParam0 == -1)
		iParam0 = func_151();

	if (iParam0 == -1)
		return true;

	if (func_150(iParam0))
		return false;

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_145(iParam0))
		{
		}
		else
		{
			return true;
		}
	}

	if (func_144() && !func_143())
		return true;

	if (!func_142(iParam0))
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
				return true;

	if (!IS_BIT_SET(Global_114370.f_18577[iParam0 /*6*/], 2))
		return true;

	return false;
}

BOOL func_142(int iParam0) // Position - 0xACB2
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61)
		return true;

	return false;
}

BOOL func_143() // Position - 0xACF1
{
	if (unk_0x761778199FE1211C())
		if (unk_0xAB154BFC15F33733() == 1f)
			return true;

	return false;
}

BOOL func_144() // Position - 0xAD0E
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 20);

	return false;
}

BOOL func_145(int iParam0) // Position - 0xAD31
{
	if (func_147() && Global_101392.f_11 == 6 && iParam0 == func_146(&(Global_101392.f_3), 0))
		return true;

	return false;
}

int func_146(var uParam0, int iParam1) // Position - 0xAD65
{
	int num;
	var unk;
	var unk33;
	int i;

	unk33 = unk_0x70E57E9927B6BA58(uParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_120(num, &unk);
	
		if (unk_0x70E57E9927B6BA58(unk) == unk33)
			return num;
	}

	iParam1 == 0;
	return -1;
}

BOOL func_147() // Position - 0xADAE
{
	if (Global_101392 == 13 || Global_101392 == 10 || Global_101392 == 11 || Global_101392 == 12)
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xADEC
{
	return func_149(iParam0, Global_43922);
}

BOOL func_149(int iParam0, int iParam1) // Position - 0xADFD
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

BOOL func_150(int iParam0) // Position - 0xAFDE
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		if (Global_79495.f_1 == 7)
			if (Global_79495 == iParam0)
				return true;

	return false;
}

int func_151() // Position - 0xB006
{
	return func_146(unk_0x1AF90EB93E0012D6(), 0);
}

BOOL func_152(int iParam0) // Position - 0xB017
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_151();

	if (iParam0 == -1)
		return false;

	num = func_154(&(Global_113457[iParam0 /*10*/].f_9), 1, 4, false, 0);

	if (!(num == 1))
		return false;

	func_153(iParam0);
	return true;
}

void func_153(int iParam0) // Position - 0xB05C
{
	Global_113457[iParam0 /*10*/].f_4 = 1;
	Global_113457[iParam0 /*10*/].f_5 = 0;
	Global_113457[iParam0 /*10*/].f_6 = 0;
	Global_113457[iParam0 /*10*/] = 0;
	return;
}

int func_154(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB08E
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98850.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_156(0))
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
			func_155(uParam0, iParam4);
	}

	return 2;
}

void func_155(var uParam0, int iParam1) // Position - 0xB1C5
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

BOOL func_156(int iParam0) // Position - 0xB214
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_157(int iParam0) // Position - 0xB236
{
	eCharacter character;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER_0();
			
				if (!func_37(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_165() || Global_113417 || Global_32831 || func_164() || func_163(8, -1) || func_101() || func_162() || func_161() || func_160() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_165() || Global_32831 || func_164() || func_163(8, -1) || func_161() || func_101() || func_162() || func_160() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_165() || Global_113417 || Global_32831 || func_164() || func_163(8, -1) || func_161() || func_101() || func_162() || func_160() || Global_114370.f_7691.f_919[character] == 5 || Global_44469 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || func_165() || Global_113417 || Global_32831 || func_164() || func_163(8, -1) || func_101() || func_162() || func_160() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_165() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || func_163(8, -1) || func_160() || func_159() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_163(8, -1) || func_101() || func_162() || func_159() || func_158())
							return false;
					
						if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3 && unk_0x6D231A0D52134FC1() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
							if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_165() || Global_32831 || func_164() || func_163(8, -1) || func_162() || func_161() || func_160() || Global_114370.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_165() || func_162() || Global_113417 || Global_32831 || func_164() || Global_45122 || func_163(8, -1) || func_161() || func_159() || func_160() || Global_114370.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || !unk_0x9390801B06EE998F() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || func_165() || Global_113417 || Global_32831 || func_164() || func_163(8, -1) || func_161() || func_159() || func_101() || func_162() || func_160())
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

BOOL func_158() // Position - 0xB953
{
	return Global_101431.f_1;
}

BOOL func_159() // Position - 0xB961
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 13);

	return false;
}

BOOL func_160() // Position - 0xB984
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_161() // Position - 0xB99E
{
	if (Global_79509)
		return true;
	else if (Global_64032 && !Global_64038)
		return true;

	return false;
}

BOOL func_162() // Position - 0xB9C8
{
	return Global_101444.f_394 > 0;
}

BOOL func_163(int iParam0, int iParam1) // Position - 0xB9D9
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

BOOL func_164() // Position - 0xBA11
{
	return Global_1575079;
}

BOOL func_165() // Position - 0xBA1D
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

void func_166() // Position - 0xBA39
{
	int num;

	switch (iLocal_78)
	{
		case 0:
			bLocal_80 = false;
			iLocal_78 = 1;
			break;
	
		case 1:
			if (!func_171(25) && !unk_0x3555462DB47B7AB1())
			{
				func_168("MRSP_01_HELP" /*Find a van with the Deludamol pharmaceuticals logo.*/, 1, 0, -1, 10000, 4, 0, 0, 0);
				func_167(25);
			}
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				num = unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0));
			
				if (num == iLocal_79)
				{
					bLocal_80 = true;
					func_2(2);
				}
			}
			break;
	}

	return;
}

void func_167(int iParam0) // Position - 0xBAB6
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

void func_168(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xBAF8
{
	func_169(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_169(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xBB19
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
		func_170();
	}

	return;
}

void func_170() // Position - 0xBCEC
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

BOOL func_171(int iParam0) // Position - 0xBE03
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

void func_172() // Position - 0xBE43
{
	func_173(true);
	func_2(1);
	return;
}

void func_173(BOOL bParam0) // Position - 0xBE55
{
	func_174(51, bParam0);
	func_174(52, bParam0);
	func_174(53, bParam0);
	func_174(54, bParam0);
	func_174(55, bParam0);
	func_174(56, bParam0);
	return;
}

void func_174(int iParam0, BOOL bParam1) // Position - 0xBE8D
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_176(iParam0, 0))
		{
			func_175(iParam0, 1, false);
			func_175(iParam0, 2, false);
			func_175(iParam0, 3, false);
			func_175(iParam0, 4, false);
			func_175(iParam0, 0, true);
			Global_78038[iParam0] = 1;
		}
	}
	else
	{
		func_175(iParam0, 0, false);
	}

	return;
}

void func_175(int iParam0, int iParam1, BOOL bParam2) // Position - 0xBEEA
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_32752[iParam0], iParam1);
	else
		unk_0x8744D2E3FC95740E(&Global_114370.f_32752[iParam0], iParam1);

	return;
}

BOOL func_176(int iParam0, int iParam1) // Position - 0xBF25
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_32752[iParam0], iParam1);
}

void func_177() // Position - 0xBF45
{
	if (!func_60(4))
		if (func_178(36))
			func_2(4);
		else
			func_2(1);

	return;
}

BOOL func_178(int iParam0) // Position - 0xBF6C
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_18577[iParam0 /*6*/], 3);
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0xBF97
{
	func_59();
	return Global_114370.f_2366.f_539.f_4321;
}

int func_180(int iParam0) // Position - 0xBFB0
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

void func_181() // Position - 0xC008
{
	func_173(false);

	if (func_178(36))
		func_182(10);

	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_182(int iParam0) // Position - 0xC029
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

