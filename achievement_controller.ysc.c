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
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	BOOL bLocal_70 = 0;
	int iLocal_71 = 0;
	BOOL bLocal_72 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

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
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	iLocal_56 = unk_0x1DD05E817C89C737();
	iLocal_65 = 0;
	func_186(iLocal_66);
	func_185();
	func_183(&Global_4543283);
	func_182(&Global_4543283, 1);
	func_180(&uLocal_67);

	while (true)
	{
		if (Global_33079 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_33079 != 0)
				if (unk_0x0BA1A956D36B210F() || func_179())
					_DISPLAY_HELP_TEXT("CHEAT_TROPHIE" /*Cheats have been activated. Trophies will not be awarded for the duration of this session.*/, -1);
				else
					_DISPLAY_HELP_TEXT("CHEAT_ACHIEVE" /*Cheats have been activated. Achievements will not be awarded for the duration of this session.*/, -1);
		
			iLocal_65 != 0 && Global_33079 == 0;
		}
	
		iLocal_65 = Global_33079;
	
		if (!func_177(14))
		{
			if (!unk_0x37088D2C63AC4C01(24))
				func_168();
		
			if (!unk_0x37088D2C63AC4C01(25))
				func_166();
		
			if (Global_32838)
			{
				if (!unk_0x37088D2C63AC4C01(12))
				{
					num = func_151(true);
				
					if (num > 0)
					{
						func_150(12, num);
						unk_0x1164A75E490C27B6(joaat("NUM_GOLD_MEDALS_OBTAINED"), num, 1);
					}
				
					if (num >= 70)
						func_144(12, 1);
				}
			
				Global_32838 = false;
			}
		
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_66 = iLocal_66 + 1;
				
					if (unk_0x1DD05E817C89C737() > iLocal_56)
					{
						func_133(false);
						iLocal_56 = unk_0x1DD05E817C89C737() + iLocal_61;
					}
				
					if (unk_0x1DD05E817C89C737() > iLocal_57)
					{
						if (!unk_0x37088D2C63AC4C01(14) || iLocal_64 == 1)
							if (func_132(53))
								func_131();
					
						iLocal_57 = unk_0x1DD05E817C89C737() + iLocal_62;
					}
				}
			}
		
			func_123(&Global_4543283);
			func_1();
		}
		else
		{
			func_123(&Global_4543283);
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x20A
{
	BOOL flag;
	int num;

	if (!func_122(&Global_4543283))
		return;

	if (!Global_79248)
	{
		if (bLocal_72)
			bLocal_72 = false;
	
		return;
	}

	if (!func_119())
		return;

	if (bLocal_70)
	{
		if (!func_117(3, -1))
			return;
	
		if (!func_117(5, -1))
			return;
	}

	if (bLocal_72)
		return;

	flag = unk_0x616C54D34FFE092C(&num);
	num == -1 && iLocal_71 == 0;

	if (flag && num == 0)
	{
		func_116();
		bLocal_72 = true;
	}
	else
	{
		func_2();
	}

	return;
}

void func_2() // Position - 0x29A
{
	int num;

	if (!unk_0x37088D2C63AC4C01(33))
		if (func_113())
			func_144(33, 1);

	if (!unk_0x37088D2C63AC4C01(29))
	{
		if (func_109(&uLocal_67) > 5f)
		{
			func_22(unk_0x4A8C381C258A124D());
			func_180(&uLocal_67);
		}
	}

	num = func_19(func_21(-1), 0);

	if (num >= 100)
		if (!unk_0x37088D2C63AC4C01(36))
			func_144(36, 1);

	if (num >= 50)
		if (!unk_0x37088D2C63AC4C01(35))
			func_144(35, 1);

	if (num >= 25)
		if (!unk_0x37088D2C63AC4C01(34))
			func_144(34, 1);

	if (!unk_0x37088D2C63AC4C01(37))
		func_16(false);

	if (!unk_0x37088D2C63AC4C01(38))
		if (func_15(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
			func_144(38, 1);

	if (!unk_0x37088D2C63AC4C01(39))
		if (func_13(48, -1) >= 10)
			func_144(39, 1);

	if (!unk_0x37088D2C63AC4C01(40))
		if (func_13(52, -1) > 0)
			func_144(40, 1);

	if (!unk_0x37088D2C63AC4C01(41))
		if (IS_BIT_SET(Global_2738587.f_2327.f_18, 1))
			func_144(41, 1);

	if (!unk_0x37088D2C63AC4C01(43))
		if (func_11(756, -1) >= 30)
			func_144(43, 1);

	if (!unk_0x37088D2C63AC4C01(44))
		if (func_13(14, -1) >= 20)
			func_144(44, 1);

	if (!unk_0x37088D2C63AC4C01(45))
		func_9(false);

	if (!unk_0x37088D2C63AC4C01(48))
		if (func_8(11, -1))
			func_144(48, 1);

	if (!unk_0x37088D2C63AC4C01(49))
		func_3(false);

	return;
}

int func_3(BOOL bParam0) // Position - 0x438
{
	if (!func_119())
		return 0;

	if (!Global_79248)
		return 0;

	if (unk_0x37088D2C63AC4C01(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_144(49, 1);
	return 1;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x4B3
{
	var unk;
	BOOL num;

	unk = func_5(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_5(int iParam0, int iParam1) // Position - 0x4D7
{
	return unk_0xD69CE161FE614531(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x4EC
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
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

int func_7() // Position - 0x520
{
	return Global_1574925;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x52C
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_9(BOOL bParam0) // Position - 0x548
{
	int i;
	int num;
	int num2;

	if (!func_119())
		return 0;

	if (unk_0x37088D2C63AC4C01(45))
		return 0;

	if (!Global_79248)
		return 0;

	num2 = func_11(757, -1);

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_10(num2, i, bParam0))
			num = num + 1;
	}

	if (num == 9)
	{
		func_144(45, 1);
		return 1;
	}

	return 0;
}

BOOL func_10(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5B9
{
	BOOL flag;

	flag = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return flag;

	switch (iParam1)
	{
		case 0:
			return flag;
	
		case 1:
			return flag;
	
		case 2:
			return flag;
	
		case 3:
			return flag;
	
		case 4:
			return flag;
	
		case 5:
			return flag;
	
		case 6:
			return flag;
	
		case 7:
			return flag;
	
		case 8:
			return flag;
	
		default:
		
	}

	return false;
}

int func_11(int iParam0, int iParam1) // Position - 0x63E
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_12(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

var func_12(int iParam0, int iParam1) // Position - 0x66D
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(iParam1));
}

int func_13(int iParam0, int iParam1) // Position - 0x682
{
	var unk;
	int num;

	unk = func_14(iParam0, iParam1);

	if (unk_0xDF7F16323520B858(unk, &num, -1))
		return num;

	return 0;
}

var func_14(int iParam0, int iParam1) // Position - 0x6A6
{
	return unk_0xD69CE161FE614531(8, iParam0, func_6(iParam1));
}

int func_15(int iParam0) // Position - 0x6BC
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_16(BOOL bParam0) // Position - 0x6DA
{
	int num;

	if (unk_0x37088D2C63AC4C01(37))
		return 0;

	if (!func_119())
		return 0;

	if (!Global_79248)
		return 0;

	if (bParam0)
	{
		num = func_13(21, -1);
		num = num - func_13(58, -1);
		num = num - func_13(57, -1);
	}

	if (func_17(8, -1))
	{
		func_144(37, 1);
		return 1;
	}

	return 0;
}

BOOL func_17(int iParam0, int iParam1) // Position - 0x744
{
	var unk;
	BOOL num;

	unk = func_18(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_18(int iParam0, int iParam1) // Position - 0x768
{
	return unk_0xD69CE161FE614531(10, iParam0, func_6(iParam1));
}

int func_19(int iParam0, int iParam1) // Position - 0x77E
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_20(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_20(num) < iParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
int func_20(int iParam0) // Position - 0x839
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("pyro_sub_bass_synth");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		
			default:
				goto 0x534;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

int func_21(int iParam0) // Position - 0xD74
{
	return func_11(640, iParam0);
}

void func_22(var uParam0) // Position - 0xD85
{
	int i;
	int num;

	num = 44;
	num.f_221 = 51;

	if (unk_0x37088D2C63AC4C01(29))
		return;

	func_105(uParam0, &num);
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_23(uParam0, num[i /*5*/]))
		{
			func_144(29, 1);
			return;
		}
	}

	i = 0;

	for (i = 0; i < num.f_221; i = i + 1)
	{
		if (func_23(uParam0, num.f_221[i /*5*/]))
		{
			func_144(29, 1);
			return;
		}
	}

	return;
}

BOOL func_23(var uParam0, int iParam1) // Position - 0xE14
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	var unk40;

	if (iParam1 == -61829581)
		return false;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
		return false;

	if (unk_0x4FAFF4BCB7633475(uParam0))
		return false;

	if (!unk_0x66B90BA528CFEBCE(uParam0, iParam1, 0))
		return false;

	num = func_104(iParam1, &unk);

	if (iParam1 != joaat("WEAPON_PISTOL") && iParam1 != joaat("WEAPON_APPISTOL") && iParam1 != joaat("WEAPON_COMBATPISTOL") && iParam1 != joaat("WEAPON_MICROSMG") && iParam1 != joaat("WEAPON_SMG") && iParam1 != joaat("WEAPON_PUMPSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTSHOTGUN") && iParam1 != joaat("WEAPON_SAWNOFFSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTRIFLE") && iParam1 != joaat("WEAPON_CARBINERIFLE") && iParam1 != joaat("WEAPON_ADVANCEDRIFLE") && iParam1 != joaat("WEAPON_SNIPERRIFLE") && iParam1 != joaat("WEAPON_HEAVYSNIPER") && iParam1 != joaat("WEAPON_MG") && iParam1 != joaat("WEAPON_COMBATMG") && iParam1 != joaat("WEAPON_GRENADELAUNCHER") && iParam1 != joaat("WEAPON_ASSAULTMG") && iParam1 != joaat("WEAPON_ASSAULTSMG") && iParam1 != joaat("WEAPON_ASSAULTSNIPER") && iParam1 != joaat("WEAPON_BULLPUPSHOTGUN") && iParam1 != joaat("WEAPON_PISTOL50") && num == -1 || unk_0x660FA55F8D417CAB(num) < 3)
		return false;

	num2 = 0;
	num3 = 0;
	num4 = 0;
	num5 = 0;

	for (i = 0; func_26(&unk40, iParam1, i, false); i = i + 1)
	{
		if (unk40.f_4 == joaat("WAPClip"))
			num3 = num3 + 1;
	
		if (unk40.f_4 == joaat("WAPScop"))
			num2 = num2 + 1;
	
		if (func_24(uParam0, iParam1, unk40))
		{
			if (unk40.f_4 == joaat("WAPClip"))
				num5 = unk40.f_6;
			else if (unk40.f_4 == joaat("WAPScop"))
				num4 = unk40.f_6;
		}
		else if (unk40.f_4 == joaat("WAPClip") || unk40.f_4 == joaat("WAPScop") || unk40.f_4 == joaat("WAPRail") || unk40.f_4 == joaat("gun_root") || unk40.f_4 == joaat("Gun_GripR"))
		{
		}
		else
		{
			return false;
		}
	}

	if (num2 > num4)
		return false;

	if (num3 > num5)
		return false;

	if (unk_0xB302C203285E8234(iParam1) > 0 && unk_0x6C81F95CADD1E6D0(uParam0, iParam1) == 0)
		return false;

	return true;
}

BOOL func_24(var uParam0, int iParam1, var uParam2) // Position - 0x1094
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		return unk_0x5EDED4B3E1A48E68(uParam0, iParam1, uParam2);

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x10B3
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

BOOL func_26(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x10D4
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int i;
	int num16;
	var unk38;
	int num17;

	num = 37;
	func_103(uParam0, 0, 989182658, 0, 0);

	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, 1400690398, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 7:
						func_103(uParam0, -1566778158, joaat("gun_root"), 3, 0);
						break;
				
					case 8:
						func_103(uParam0, 1694268374, joaat("gun_root"), 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SMG"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					
						case 9:
							func_103(uParam0, 1605520746, joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 8:
						func_103(uParam0, 1605520746, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					
						case 4:
							func_103(uParam0, 221907180, joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
				
					case 3:
						func_103(uParam0, 221907180, joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 22:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			
				case 25:
					func_103(uParam0, 1141184690, joaat("gun_root"), 13, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 23:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
					
						case 5:
							func_103(uParam0, 330905451, joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, 330905451, joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 9:
							func_103(uParam0, 302671608, joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				
					case 8:
						func_103(uParam0, 302671608, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 7:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 11:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 21:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
			
				case 11:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 20:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 24:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				num2 = func_86(iParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 370527443:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 1109907117:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 2055456612:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1690606566:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -1633316949:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -1461476313:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -1770422457:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case -2059739958:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case -1280001599:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case -922885037:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				num2 = func_86(iParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 716207715:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 446271089:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 1045616099:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1336277129:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -513369076:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -447700000:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -149207179:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case 166784288:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case 2068729789:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case 1761389338:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_RPG"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, -1240142720, joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case 1924557585:
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, -292433650, joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, 494808810, joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 3, 0);
					break;
			}
			break;
	
		default:
			num15 = func_104(iParam1, &unk38);
		
			if (num15 != -1)
			{
				for (i = 0; i < unk_0x660FA55F8D417CAB(num15); i = i + 1)
				{
					if (unk_0x737024F2814ABDDD(num15, i, &num17))
					{
						if (!func_85(num17.f_3))
						{
							if (num17 == joaat("WAPClip") || num17 == joaat("WAPClip_2"))
								num4 = num4 + 1;
							else if (num17 == joaat("WAPFlshLasr") || num17 == joaat("WAPFlshLasr_2"))
								num5 = num5 + 1;
							else if (num17 == joaat("WAPScop") || num17 == joaat("WAPScop_2"))
								num6 = num6 + 1;
							else if (num17 == joaat("WAPRail") || num17 == joaat("WAPRail_2"))
								num7 = num7 + 1;
							else if (num17 == joaat("WAPGrip") || num17 == joaat("WAPGrip_2"))
								num8 = num8 + 1;
							else if (num17 == joaat("WAPSupp") || num17 == joaat("WAPSupp_2"))
								num9 = num9 + 1;
							else if (num17 == 1731751835)
								num10 = num10 + 1;
							else if (num17 == joaat("gun_root"))
								num11 = num11 + 1;
							else if (num17 == joaat("Gun_GripR"))
								num12 = num12 + 1;
							else if (num17 == joaat("WAPBarrel"))
								num13 = num13 + 1;
							else
								num14 = num14 + 1;
						
							if (num16 == iParam2)
							{
								if (num17 == joaat("WAPClip") || num17 == joaat("WAPClip_2"))
									num3 = num4;
								else if (num17 == joaat("WAPFlshLasr") || num17 == joaat("WAPFlshLasr_2"))
									num3 = num5;
								else if (num17 == joaat("WAPScop") || num17 == joaat("WAPScop_2"))
									num3 = num6;
								else if (num17 == joaat("WAPRail") || num17 == joaat("WAPRail_2"))
									num3 = num7;
								else if (num17 == joaat("WAPGrip") || num17 == joaat("WAPGrip_2"))
									num3 = num8;
								else if (num17 == joaat("WAPSupp") || num17 == joaat("WAPSupp_2"))
									num3 = num9;
								else if (num17 == 1731751835)
									num3 = num10;
								else if (num17 == joaat("gun_root"))
									num3 = num11;
								else if (num17 == joaat("Gun_GripR"))
									num3 = num12;
								else if (num17 == joaat("WAPBarrel"))
									num3 = num13;
								else
									num3 = num14;
							
								func_103(uParam0, num17.f_3, num17, num3, num17.f_1);
							}
						
							num16 = num16 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_27(iParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_27(int iParam0, int iParam1) // Position - 0x6924
{
	int value;
	float num;
	int num2;
	int i;
	var unk;
	var unk40;
	int num3;
	int j;
	var unk62;
	var unk101;
	var unk123;
	var unk139;
	float num4;

	value = 0;
	num = 2.5f;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		num = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						value = 155;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = 729;
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						value = 18600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						value = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 735;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						value = 14500;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						value = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						value = 165;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 185;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 730;
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						value = 15800;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						value = 137;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 190;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 549;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 775;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						value = 15100;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						value = 134;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						value = 549;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 815;
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						value = 19300;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 565;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 810;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						value = 14400;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						value = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						value = 105;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 132;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 150;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 815;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						value = 17900;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						value = 124;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 812;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						value = 16500;
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						value = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						value = 145;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						value = 450;
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						value = 15600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						value = 126;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 129;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 559;
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						value = 14000;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						value = 975;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						value = 16900;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						value = 139;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 150;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 225;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 899;
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 559;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 975;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 920;
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						value = 13000;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 999;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 128;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 185;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 525;
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						value = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						value = 9700;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2275;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10875;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12400;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						value = 17600;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					value = 0;
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4100;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2300;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12450;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					value = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						value = 9500;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 2000;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12250;
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						value = 20000;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					value = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						value = 13700;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						value = 3612;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 1020;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 5000;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 1760;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						value = 17200;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						value = 3680;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 710;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 4800;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						value = 12000;
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						value = 4900;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						value = 5600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						value = 5500;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						value = 5200;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						value = 4600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						value = 4700;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						value = 4800;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						value = 4300;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						value = 4000;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						value = 108;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						value = 9950;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 11350;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12500;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = &_DOES_ENTITY_EXIST_AND_IS_ALIVE;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						value = 16600;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						value = 29;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						value = 9150;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						value = 13900;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						value = 108;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						value = 9975;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2525;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 11550;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12500;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						value = 18000;
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						value = 3680;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 4840;
						break;
				}
				break;
		
			default:
				num2 = func_104(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x660FA55F8D417CAB(num2); i = i + 1)
					{
						if (unk_0x737024F2814ABDDD(num2, i, &unk40))
						{
							if (!func_85(unk40.f_3))
							{
								if (unk40.f_3 == iParam1)
								{
									num = 1f;
								
									if (!func_80(iParam1))
										unk40.f_5 = -1;
								
									if (unk40.f_5 == -1)
										value = -1;
									else
										value = unk40.f_5;
								
									if (iParam0 == joaat("WEAPON_HAMMER"))
										if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
											value = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		num = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						value = 9175;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2895);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1675;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4170);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = 12050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4171);
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						value = Global_262145.f_11239;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4248);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21403;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						value = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						value = Global_262145.f_21289;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2896);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1825;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4172);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_21290;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4173);
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						value = Global_262145.f_12631;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4243);
						break;
				
					case 1400690398:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						value = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						value = 9400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2898);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1975;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4174);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 12200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4175);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						value = Global_262145.f_11238;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4237);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						value = Global_262145.f_32335;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						value = 9325;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2899);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1900;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4178);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10800;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4180);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12150;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4179);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						value = Global_262145.f_11242;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4247);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						value = Global_262145.f_32334;
						break;
				
					case -1566778158:
						value = 0;
						break;
				
					case 1694268374:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						value = 9475;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2900);
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						value = Global_262145.f_16795;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4181);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						value = 10825;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4183);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 12250;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4182);
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						value = Global_262145.f_11241;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4252);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21404;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						value = 9550;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2902);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						value = Global_262145.f_16790;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4191);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2125;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4188);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10850;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4190);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12300;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4189);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11235;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4238);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21406;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						value = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						value = 9775;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2903);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						value = Global_262145.f_16789;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4199);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4196);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 10900;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4198);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12450;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4197);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11237;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4241);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21407;
						break;
				
					case 1605520746:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						value = 9925;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2905);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2425;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4201);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 10950;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4203);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4202);
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11236;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4236);
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						value = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						value = 9850;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2906);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						value = 10925;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4204);
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12632;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4246);
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						value = 10000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2907);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4425;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4226);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 10975;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4227);
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12633;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4242);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21405;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 1750;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4208);
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						value = 12350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4209);
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						value = Global_262145.f_12628;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4250);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23143;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						value = Global_262145.f_32332;
						break;
				
					case 330905451:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						value = 9625;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2909);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = &_DOES_ENTITY_EXIST_AND_IS_ALIVE;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4212);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4213);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4214);
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 12400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4215);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4216);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4217);
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11244;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4253);
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 99;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4218);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4219);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21408;
						break;
				
					case 221907180:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4228);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4224);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 11000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4225);
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						value = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						value = 9700;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2901);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2275;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4184);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10875;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4187);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4185);
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12629;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4186);
						break;
				}
				break;
		
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						value = Global_262145.f_7133;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						value = Global_262145.f_7817;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						value = Global_262145.f_12630;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23148;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						value = Global_262145.f_7822;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						value = Global_262145.f_16792;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_7825;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = Global_262145.f_7821;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_7819;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_7824;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						value = Global_262145.f_12634;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23144;
						break;
				
					case 302671608:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						value = Global_262145.f_7823;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = Global_262145.f_7827;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_7820;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						value = Global_262145.f_7847;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						value = Global_262145.f_7830;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_7833;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_7828;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_7829;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_7831;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						value = Global_262145.f_12635;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23147;
						break;
				}
				break;
		
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						value = Global_262145.f_8305;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_8306;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						value = Global_262145.f_9035;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						value = Global_262145.f_16796;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_9036;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_9037;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_9038;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						value = Global_262145.f_9041;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_9042;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_9044;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_9045;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_9046;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23145;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4100;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_15340);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2300;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4210);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12450;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4211);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					value = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						value = 9500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2897);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 2000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4176);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12250;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4177);
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						value = Global_262145.f_11240;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4249);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					value = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						value = Global_262145.f_11243;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4251);
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						value = Global_262145.f_11567;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4256);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						value = Global_262145.f_11568;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4257);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						value = Global_262145.f_11569;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4258);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						value = Global_262145.f_11570;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4259);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						value = Global_262145.f_11571;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4260);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						value = Global_262145.f_11572;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4261);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						value = Global_262145.f_11573;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4262);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						value = Global_262145.f_11574;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4263);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						value = Global_262145.f_11575;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4264);
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						value = Global_262145.f_11592;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4266);
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						value = Global_262145.f_16794;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_11593;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4267);
						break;
				}
				break;
		
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						value = Global_262145.f_13476;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						value = Global_262145.f_13477;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						value = Global_262145.f_13534;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						value = Global_262145.f_13475;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_23146;
						break;
				}
				break;
		
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						value = Global_262145.f_15270;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						value = Global_262145.f_16791;
						break;
				}
				break;
		
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						value = Global_262145.f_19252;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						value = Global_262145.f_21285;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						value = Global_262145.f_16793;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21286;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_21288;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_21287;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_21409;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21410;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_21411;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21412;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_21413;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21414;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21415;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21416;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21417;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21418;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_21419;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21420;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21421;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21422;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21423;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21424;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21425;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21426;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21427;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						value = Global_262145.f_21428;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						value = Global_262145.f_21429;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21430;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_21431;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21432;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_21433;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21434;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21435;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21436;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21437;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21438;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_21439;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21440;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21441;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21442;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21443;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21444;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21445;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21446;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21447;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						value = Global_262145.f_21448;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						value = Global_262145.f_21449;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21450;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						value = Global_262145.f_21451;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21452;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						value = Global_262145.f_21453;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21454;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21455;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21456;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21457;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21458;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21459;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21460;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21461;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21462;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21463;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21464;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21465;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						value = Global_262145.f_21466;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						value = Global_262145.f_21467;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21468;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						value = Global_262145.f_21470;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21471;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						value = Global_262145.f_21469;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						value = Global_262145.f_21472;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_NV"):
						value = Global_262145.f_21473;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						value = Global_262145.f_21474;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						value = Global_262145.f_21475;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						value = Global_262145.f_21476;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_09"):
						value = Global_262145.f_21477;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						value = Global_262145.f_21478;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						value = Global_262145.f_21479;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_21481;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						value = Global_262145.f_21480;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21482;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						value = Global_262145.f_21483;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						value = Global_262145.f_21484;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL"):
						value = Global_262145.f_21485;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = Global_262145.f_21486;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP"):
						value = Global_262145.f_21487;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				
					case 1141184690:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						value = Global_262145.f_21488;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_21490;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						value = Global_262145.f_21489;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21491;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						value = Global_262145.f_21492;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21493;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						value = Global_262145.f_21494;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						value = Global_262145.f_21495;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						value = Global_262145.f_21496;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_21497;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21498;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21499;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21500;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21501;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21502;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21503;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21504;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						value = Global_262145.f_21505;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_23175;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						value = Global_262145.f_23176;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_23174;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23173;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23202;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23203;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_23204;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_23205;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						value = Global_262145.f_23206;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						value = Global_262145.f_23207;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						value = Global_262145.f_23177;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_23181;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						value = Global_262145.f_23179;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23180;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						value = Global_262145.f_23178;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23208;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23209;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_23210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_23211;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_23212;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23213;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23214;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23215;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23216;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23217;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23218;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23219;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23220;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						value = Global_262145.f_23221;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						value = Global_262145.f_24093;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						value = Global_262145.f_23197;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_23199;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23198;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						value = Global_262145.f_23196;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						value = Global_262145.f_23253;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						value = Global_262145.f_23254;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = Global_262145.f_23255;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_02"):
						value = Global_262145.f_23256;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_23182;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_23186;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_23184;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23185;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_23183;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23222;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23223;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_23224;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_23225;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23226;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23227;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23228;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23229;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23230;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23231;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23232;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23233;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						value = Global_262145.f_23234;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						value = Global_262145.f_23187;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						value = Global_262145.f_23188;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_23190;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23189;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23235;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_23236;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = Global_262145.f_23237;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_03"):
						value = Global_262145.f_23238;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_23191;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_23195;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_23193;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_23194;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_23192;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23239;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23240;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						value = Global_262145.f_23241;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_23242;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						value = Global_262145.f_23252;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_23243;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23244;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23245;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23246;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23247;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23248;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23249;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23250;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23251;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						value = Global_262145.f_21537;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21538;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21539;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21540;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21541;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21542;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21543;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21544;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21545;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21546;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21547;
						break;
				}
				break;
		
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						value = Global_262145.f_28974;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						value = Global_262145.f_28975;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_31117;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_31118;
						break;
				}
				break;
		
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						value = Global_262145.f_31103;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						value = Global_262145.f_31104;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						value = Global_262145.f_31105;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_31106;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_31107;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_31108;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						value = Global_262145.f_32300;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						value = Global_262145.f_32301;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						value = Global_262145.f_32333;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_32306;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_32304;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = Global_262145.f_32303;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_32305;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						value = Global_262145.f_32302;
						break;
				}
				break;
		
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						value = *Global_262145.f_33559;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						value = *Global_262145.f_33561;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = *Global_262145.f_33562;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = *Global_262145.f_33560;
						break;
				}
				break;
		
			case joaat("WEAPON_KNIFE"):
				switch (iParam1)
				{
					case 370527443:
						value = *Global_262145.f_34587;
						break;
				
					case 1109907117:
						value = *Global_262145.f_34591;
						break;
				
					case 2055456612:
						value = *Global_262145.f_34588;
						break;
				
					case 1690606566:
						value = *Global_262145.f_34589;
						break;
				
					case -1633316949:
						value = *Global_262145.f_34592;
						break;
				
					case -1461476313:
						value = *Global_262145.f_34590;
						break;
				
					case -1770422457:
						value = *Global_262145.f_34594;
						break;
				
					case -2059739958:
						value = *Global_262145.f_34593;
						break;
				
					case -1280001599:
						value = *Global_262145.f_34595;
						break;
				
					case -922885037:
						value = *Global_262145.f_34596;
						break;
				}
				break;
		
			case joaat("WEAPON_BAT"):
				switch (iParam1)
				{
					case 716207715:
						value = *Global_262145.f_34577;
						break;
				
					case 446271089:
						value = *Global_262145.f_34578;
						break;
				
					case 1045616099:
						value = *Global_262145.f_34580;
						break;
				
					case 1336277129:
						value = *Global_262145.f_34581;
						break;
				
					case -513369076:
						value = *Global_262145.f_34582;
						break;
				
					case -447700000:
						value = *Global_262145.f_34583;
						break;
				
					case -149207179:
						value = *Global_262145.f_34584;
						break;
				
					case 166784288:
						value = *Global_262145.f_34585;
						break;
				
					case 2068729789:
						value = *Global_262145.f_34586;
						break;
				
					case 1761389338:
						value = *Global_262145.f_34579;
						break;
				}
				break;
		
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						value = 0;
						break;
				
					case 503494624:
						value = *Global_262145.f_34560;
						break;
				}
				break;
		
			case 350597077:
				switch (iParam1)
				{
					case 943088878:
						value = *Global_262145.f_36034;
						break;
				
					case 310778254:
						value = *Global_262145.f_36035;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = *Global_262145.f_36039;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = *Global_262145.f_36037;
						break;
				}
				break;
		
			case joaat("WEAPON_RPG"):
				switch (iParam1)
				{
					case -1240142720:
						value = 0;
						break;
				}
				break;
		
			case 1924557585:
				switch (iParam1)
				{
					case -292433650:
						value = 0;
						break;
				
					case 494808810:
						value = *Global_262145.f_36168;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = *Global_262145.f_36169;
						break;
				}
				break;
		
			default:
				num3 = func_104(iParam0, &unk62);
			
				if (num3 != -1)
				{
					for (j = 0; j < unk_0x660FA55F8D417CAB(num3); j = j + 1)
					{
						if (unk_0x737024F2814ABDDD(num3, j, &unk101))
						{
							if (!func_85(unk101.f_3))
							{
								if (unk101.f_3 == iParam1)
								{
									num = 1f;
								
									if (unk101.f_5 == -1)
										value = -1;
									else
										value = unk101.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (unk_0x76CD105BCAC6EB9F() && func_78())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk139, func_76(iParam1, iParam0), 16);
		func_67(&unk123, unk139, unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()), 3, 1, func_74(iParam0), func_73(iParam0), -1, false, false, 2);
	
		if (unk_0xABE86AEC64720F91(&unk123))
			value = unk_0xD2ACF01ED6E6D7C6(unk_0x70E57E9927B6BA58(&unk123), joaat("CATEGORY_WEAPON_MOD"), 1);
	}

	if (value > 0)
	{
		num4 = func_28(iParam0, &value, num);
		num4 != 1f;
	}

	return value;
}

float func_28(int iParam0, var uParam1, float fParam2) // Position - 0xA55F
{
	float num;
	float num2;
	int num3;

	num = 0f;
	num2 = 0f;

	if (unk_0x76CD105BCAC6EB9F() && func_78())
	{
		num2 = num2 + func_66();
		num = 1f - num2;
		*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * num);
		return num;
	}

	if (!unk_0x76CD105BCAC6EB9F())
		*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_79248)
	{
		if (*uParam1 != 0)
		{
			num3 = func_57(iParam0);
		
			if (num3 == 3)
				num2 = 0.1f;
			else if (num3 == 2)
				num2 = 0.15f;
			else if (num3 == 1)
				num2 = 0.25f;
		}
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (iLocal_53 == 1)
		{
			*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
			num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
		}
	
		if (iLocal_53 == 0)
		{
			*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
		
			if (func_29())
			{
				num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	
		num2 = num2 + func_66();
	}

	num = 1f - num2;
	*uParam1 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(*uParam1) * num);
	return num;
}

BOOL func_29() // Position - 0xA698
{
	int value;
	int value2;
	float num;

	if (unk_0x761778199FE1211C())
		return false;

	if (func_119())
	{
		if (func_32())
		{
			value = func_31();
			value2 = func_30();
			num = (SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f;
		
			if (num > (float)Global_262145.f_132 && value >= 8)
				return true;
		}
	}

	return false;
}

int func_30() // Position - 0xA6F6
{
	int num;

	num = num + func_15(joaat("MPPLY_FRIENDLY"));
	num = num + func_15(joaat("MPPLY_HELPFUL"));
	return num;
}

int func_31() // Position - 0xA71C
{
	int num;

	num = num + func_15(joaat("MPPLY_OFFENSIVE_LANGUAGE"));
	num = num + func_15(joaat("MPPLY_GRIEFING"));
	num = num + func_15(joaat("MPPLY_FRIENDLY"));
	num = num + func_15(joaat("MPPLY_HELPFUL"));
	num = num + func_15(joaat("MPPLY_OFFENSIVE_UGC"));
	num = num + func_15(joaat("MPPLY_OFFENSIVE_TAGPLATE"));
	num = num + func_15(joaat("MPPLY_EXPLOITS"));
	num = num + func_15(joaat("MPPLY_VC_ANNOYINGME"));
	num = num + func_15(joaat("MPPLY_VC_HATE"));
	num = num + func_15(joaat("MPPLY_BAD_CREW_NAME"));
	num = num + func_15(joaat("MPPLY_BAD_CREW_MOTTO"));
	num = num + func_15(joaat("MPPLY_BAD_CREW_STATUS"));
	num = num + func_15(joaat("MPPLY_BAD_CREW_EMBLEM"));
	num = num + func_15(joaat("MPPLY_PLAYERMADE_TITLE"));
	num = num + func_15(joaat("MPPLY_PLAYERMADE_DESC"));
	return num;
}

BOOL func_32() // Position - 0xA7F8
{
	var unk;
	var unk8;

	unk_0x23CB97F04154A594(&unk, &(unk.f_1), &(unk.f_2), &(unk.f_3), &(unk.f_4), &(unk.f_5));
	unk8 = { func_56(joaat("MPPLY_STARTED_MP")) };

	if (func_33(unk8, unk, 7))
		return true;

	return false;
}

BOOL func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0xA83C
{
	int num;
	int num2;

	num = func_54(uParam7);
	num2 = func_44(uParam0, iParam14);

	if (num2 == -15)
		return false;

	if (func_34(num, num2) == 1)
		return true;

	return false;
}

int func_34(int iParam0, int iParam1) // Position - 0xA877
{
	int num;
	int num2;

	if (!func_42(iParam1) || !func_42(iParam0))
		return 1;

	num = func_40(iParam0);
	num2 = func_40(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_39(iParam0);
	num2 = func_39(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_38(iParam0);
	num2 = func_38(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_37(iParam0);
	num2 = func_37(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_36(iParam0);
	num2 = func_36(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_35(iParam0);
	num2 = func_35(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_35(int iParam0) // Position - 0xA983
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_36(int iParam0) // Position - 0xA996
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_37(int iParam0) // Position - 0xA9A9
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_38(int iParam0) // Position - 0xA9BC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_39(int iParam0) // Position - 0xA9CE
{
	return iParam0 & 15;
}

int func_40(int iParam0) // Position - 0xA9DB
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_41(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA9FD
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_42(int iParam0) // Position - 0xAA14
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_35(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_36(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_37(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_40(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_39(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_38(iParam0);

	if (num6 < 1 || num6 > func_43(num5, num4))
		return false;

	return true;
}

int func_43(int iParam0, int iParam1) // Position - 0xAAF0
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

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xAB92
{
	var unk;
	var unk2;
	var unk3;

	if (func_53(uParam0) == 0)
	{
		unk = func_54(uParam0);
		unk2 = unk;
		func_45(&unk2, 0, 0, 0, iParam7, 0, 0);
	
		if (iParam7 == 0)
			unk2 = unk;
	
		return unk2;
	}

	return unk3;
}

void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xABD2
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_40(*uParam0);
	i = func_39(*uParam0);
	num2 = func_38(*uParam0);
	j = func_37(*uParam0);
	k = func_36(*uParam0);
	l = func_35(*uParam0);

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

	for (m = func_43(i, num); num2 > m; m = func_43(i, num))
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
	func_46(uParam0, l, k, j, num2, i, num);
	return;
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAD54
{
	func_52(uParam0, iParam1);
	func_51(uParam0, iParam2);
	func_50(uParam0, iParam3);
	func_49(uParam0, iParam5);
	func_48(uParam0, iParam4);
	func_47(uParam0, iParam6);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0xAD8C
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

void func_48(var uParam0, int iParam1) // Position - 0xAE12
{
	int num;
	int num2;

	num = func_39(*uParam0);
	num2 = func_40(*uParam0);

	if (iParam1 < 1 || iParam1 > func_43(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_49(var uParam0, int iParam1) // Position - 0xAE63
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_50(var uParam0, int iParam1) // Position - 0xAE96
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_51(var uParam0, int iParam1) // Position - 0xAED0
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_52(var uParam0, int iParam1) // Position - 0xAF0B
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAF47
{
	if (iParam0 == 0 && iParam0.f_1 == 0 && iParam0.f_2 == 0 && iParam0.f_3 == 0 && iParam0.f_4 == 0 && iParam0.f_5 == 0 && iParam0.f_6 == 0)
		return 1;

	return 0;
}

var func_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAF9D
{
	var unk;

	if (iParam0 > 0)
		func_47(&unk, iParam0);

	if (iParam0.f_1 > 0)
		func_49(&unk, func_55(iParam0.f_1));

	if (iParam0.f_2 > 0)
		func_48(&unk, iParam0.f_2);

	if (iParam0.f_3 > 0)
		func_50(&unk, iParam0.f_3);

	if (iParam0.f_4 > 0)
		func_51(&unk, iParam0.f_4);

	if (iParam0.f_5 > 0)
		func_52(&unk, iParam0.f_5);

	return unk;
}

int func_55(int iParam0) // Position - 0xB013
{
	if (iParam0 < 1)
		return 0;

	if (iParam0 > 12)
		return 0;

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
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	}

	return 0;
}

struct<7> func_56(int iParam0) // Position - 0xB0D8
{
	int num;
	var unk;
	var unk8;

	num = iParam0;

	if (unk_0x22F25CEE5BAA4944(num, &unk8, 7, -1))
		return unk8;

	return unk;
}

int func_57(int iParam0) // Position - 0xB0FC
{
	eCharacter character;
	int num;
	int i;
	var unk;
	BOOL flag;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (iParam0 == 0 || !func_60(character))
		return -1;

	num = 7;

	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
	
		case joaat("GADGET_PARACHUTE"):
			break;
	
		case joaat("WEAPON_MICROSMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
	
		case joaat("WEAPON_MG"):
			num = 4;
			break;
	
		case joaat("WEAPON_COMBATMG"):
			num = 4;
			break;
	
		case joaat("WEAPON_RPG"):
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
	
		case joaat("WEAPON_MINIGUN"):
			num = 5;
			break;
	
		case joaat("WEAPON_KNIFE"):
			break;
	
		case joaat("WEAPON_NIGHTSTICK"):
			break;
	
		case joaat("WEAPON_PETROLCAN"):
			break;
	
		case joaat("WEAPON_STUNGUN"):
			break;
	
		case joaat("WEAPON_APPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_PISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
	
		case joaat("WEAPON_GRENADE"):
			break;
	
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}

	if (num != 7)
	{
		switch (func_58(num, character))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		unk = 6;
		unk[0] = func_58(1, character);
		unk[1] = func_58(3, character);
		unk[2] = func_58(2, character);
		unk[3] = func_58(4, character);
		unk[4] = func_58(5, character);
		unk[5] = func_58(0, character);
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 3)
				flag = true;
		}
	
		if (!flag)
			return 1;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 2)
				flag = true;
		}
	
		if (!flag)
			return 2;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 1)
				flag = true;
		}
	
		if (!flag)
			return 3;
	}

	return -1;
}

int func_58(int iParam0, eCharacter echParam1) // Position - 0xB358
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iParam0 == 0)
	{
		num = 0;
		num2 = 1;
		num3 = 2;
		num4 = -1;
	}
	else if (iParam0 == 1)
	{
		num = 3;
		num2 = 4;
		num3 = 5;
		num4 = -1;
	}
	else if (iParam0 == 2)
	{
		num = 9;
		num2 = 10;
		num3 = 11;
		num4 = -1;
	}
	else if (iParam0 == 3)
	{
		num = 6;
		num2 = 7;
		num3 = 8;
		num4 = -1;
	}
	else if (iParam0 == 4)
	{
		num = 12;
		num2 = 13;
		num3 = 14;
		num4 = -1;
	}
	else if (iParam0 == 5)
	{
		num = 15;
		num2 = 16;
		num3 = 17;
		num4 = -1;
	}
	else if (iParam0 == 6)
	{
		num = 18;
		num2 = 19;
		num3 = 20;
		num4 = 21;
	}
	else
	{
		return 0;
	}

	num5 = func_59(num, echParam1);

	if (func_59(num2, echParam1) < num5)
		num5 = func_59(num2, echParam1);

	if (func_59(num3, echParam1) < num5)
		num5 = func_59(num3, echParam1);

	if (num4 != -1)
		if (func_59(num4, echParam1) < num5)
			num5 = func_59(num4, echParam1);

	return num5;
}

int func_59(int iParam0, eCharacter echParam1) // Position - 0xB45C
{
	return Global_114370.f_19150[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

BOOL func_60(eCharacter echParam0) // Position - 0xB478
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xB484
{
	func_62();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_62() // Position - 0xB49D
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_60(character) && !func_177(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_60(Global_114370.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xB59A
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xB5D7
{
	if (func_60(character))
		return func_65(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_65(eCharacter echParam0) // Position - 0xB5FC
{
	return Global_2139[echParam0 /*29*/];
}

var func_66() // Position - 0xB60B
{
	return Global_101444.f_2096;
}

void func_67(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12, int iParam13) // Position - 0xB61A
{
	switch (unk_0x70E57E9927B6BA58(&uParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /*Fireworks*/, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (iParam5 == Global_76330)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_76331)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_76332)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_76333)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_76334)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_72())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == func_71())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (iParam5 == func_70())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (iParam5 == -426933872)
			{
				if (iParam7 == 40)
					if (iParam13 == 61)
						TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t0_v0", 64);
					else if (iParam13 == 103)
						if (!func_68())
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v0", 64);
						else
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v1", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_AVENGER_t0_v33", 64);
			}
			else if (iParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, unk_0x93E7527CFECC7CD8(iParam5), 16);
			
				if (unk_0xD6F9DEE4765092A9(&uParam1) || unk_0x70E57E9927B6BA58(&uParam1) == joaat("carnotfound"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("fcr2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case joaat("diablous2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case joaat("comet3"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, unk_0x93E7527CFECC7CD8(iParam5), 16);
					
						if (unk_0xD6F9DEE4765092A9(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

BOOL func_68() // Position - 0xBC9D
{
	return func_69();
}

BOOL func_69() // Position - 0xBCA9
{
	return Global_1586504[189 /*142*/].f_66 == joaat("thruster");
}

int func_70() // Position - 0xBCC1
{
	return 1384502824;
}

int func_71() // Position - 0xBCCE
{
	return -1576586413;
}

int func_72() // Position - 0xBCDB
{
	return joaat("kosatka");
}

int func_73(int iParam0) // Position - 0xBCE8
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}

	return -1;
}

int func_74(int iParam0) // Position - 0xBD47
{
	return func_75(iParam0);
}

int func_75(int iParam0) // Position - 0xBD55
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
	
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		case joaat("WEAPON_APPISTOL"):
			return 3;
	
		case joaat("WEAPON_PISTOL50"):
			return 4;
	
		case joaat("WEAPON_SMG"):
			return 5;
	
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
	
		case joaat("WEAPON_MICROSMG"):
			return 7;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
	
		case joaat("WEAPON_MG"):
			return 12;
	
		case joaat("WEAPON_COMBATMG"):
			return 13;
	
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
	
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
	
		case joaat("WEAPON_GRENADE"):
			return 16;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
	
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
	
		case joaat("WEAPON_RPG"):
			return 27;
	
		case joaat("WEAPON_MINIGUN"):
			return 28;
	
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
	
		case joaat("WEAPON_STUNGUN"):
			return 31;
	
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
	
		case joaat("GADGET_PARACHUTE"):
			return 33;
	
		case joaat("WEAPON_KNIFE"):
			return 34;
	
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
	
		case joaat("WEAPON_HAMMER"):
			return 36;
	
		case joaat("WEAPON_BAT"):
			return 37;
	
		case joaat("WEAPON_CROWBAR"):
			return 38;
	
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
	
		case joaat("WEAPON_MOLOTOV"):
			return 41;
	
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
	
		case joaat("WEAPON_PETROLCAN"):
			return 43;
	
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
	
		case joaat("WEAPON_BOTTLE"):
			return 45;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
	
		case joaat("WEAPON_GUSENBERG"):
			return 50;
	
		case joaat("WEAPON_DAGGER"):
			return 51;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
	
		case joaat("WEAPON_FLAREGUN"):
			return 57;
	
		case joaat("WEAPON_MUSKET"):
			return 53;
	
		case joaat("WEAPON_FIREWORK"):
			return 54;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
	
		case joaat("WEAPON_PROXMINE"):
			return 60;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
	
		case joaat("WEAPON_HATCHET"):
			return 58;
	
		case joaat("WEAPON_RAILGUN"):
			return 59;
	
		case joaat("WEAPON_COMBATPDW"):
			return 64;
	
		case joaat("WEAPON_KNUCKLE"):
			return 62;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
	
		case joaat("WEAPON_MACHETE"):
			return 65;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
	
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
	
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
	
		case joaat("WEAPON_REVOLVER"):
			return 70;
	
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
	
		case joaat("WEAPON_MINISMG"):
			return 73;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
	
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
	
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
	
		case joaat("WEAPON_POOLCUE"):
			return 77;
	
		case joaat("WEAPON_WRENCH"):
			return 78;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
	
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
	
		case joaat("WEAPON_SMG_MK2"):
			return 5;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
	
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
	
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
	
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
	
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
	
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
	
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
	
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
	
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	
		case 350597077:
			return 98;
	
		case 1924557585:
			return 99;
	
		case 62870901:
			return 100;
	}

	return 0;
}

char* func_76(int iParam0, int iParam1) // Position - 0xC62D
{
	int num;
	int i;
	var unk;
	var unk40;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /*Knuckle Duster*/;
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	else if (iParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
		
			case 446271089:
				return "WCT_BAT_XM301";
		
			case 1045616099:
				return "WCT_BAT_XM302";
		
			case 1336277129:
				return "WCT_BAT_XM303";
		
			case -513369076:
				return "WCT_BAT_XM304";
		
			case -447700000:
				return "WCT_BAT_XM305";
		
			case -149207179:
				return "WCT_BAT_XM306";
		
			case 166784288:
				return "WCT_BAT_XM307";
		
			case 2068729789:
				return "WCT_BAT_XM308";
		
			case 1761389338:
				return "WCT_BAT_XM309";
		}
	}
	else if (iParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
		
			case 1109907117:
				return "WCT_KNIFE_XM301";
		
			case 2055456612:
				return "WCT_KNIFE_XM302";
		
			case 1690606566:
				return "WCT_KNIFE_XM303";
		
			case -1633316949:
				return "WCT_KNIFE_XM304";
		
			case -1461476313:
				return "WCT_KNIFE_XM305";
		
			case -1770422457:
				return "WCT_KNIFE_XM306";
		
			case -2059739958:
				return "WCT_KNIFE_XM307";
		
			case -1280001599:
				return "WCT_KNIFE_XM308";
		
			case -922885037:
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /*No Attachment*/;
	
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
	
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /*Grip*/;
	
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /*Advanced Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
	
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
	
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
	
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
	
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
	
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
	
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE";
	
		case 1141184690:
			return "WCT_PISTMK2_XM3";
	
		case -1566778158:
			return "WCT_MSMG_XM3";
	
		case 330905451:
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 503494624:
			return "WCT_SUPP" /*Suppressor*/;
	
		case 1694268374:
			return "WCT_MSMGFRN_VAR";
	
		case 1605520746:
			return "WCT_CRBNMIC_VAR";
	
		case -1240142720:
			return "WCT_RPGTVR_VAR";
	
		case 943088878:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 310778254:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case -292433650:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 494808810:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case 1400690398:
			return "WCT_COMPIST_XM";
	
		case 221907180:
			return "WCT_HVSP_XM";
	
		case 302671608:
			return "WCT_SPCR_XM";
	
		default:
			if (iParam1 != 0)
			{
				num = func_104(iParam1, &unk);
			
				if (num != -1)
				{
					for (i = 0; i < unk_0x660FA55F8D417CAB(num); i = i + 1)
					{
						if (unk_0x737024F2814ABDDD(num, i, &unk40))
							if (unk40.f_3 == iParam0)
								return func_77(&(unk40.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_77(var uParam0) // Position - 0xD08A
{
	return uParam0;
}

int func_78() // Position - 0xD094
{
	if (unk_0x76CD105BCAC6EB9F() && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return 1;

	return 0;
}

int _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xD0B1
{
	if (unk_0x761778199FE1211C())
		return unk_0xC18CB5D7A27A2E00();

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_80(int iParam0) // Position - 0xD0C8
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_81(iParam0))
	{
		return Global_262145.f_21398;
	}

	return true;
}

BOOL func_81(int iParam0) // Position - 0xD12A
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}

	return false;
}

int func_82() // Position - 0xD189
{
	int num;
	int num2;
	int num3;
	int num4;

	if (IS_BIT_SET(Global_26, 6))
		if (IS_BIT_SET(Global_26, 2) || IS_BIT_SET(Global_26, 4))
			return 1;
		else
			return 0;

	if (unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 6))
			if (IS_BIT_SET(num, 2) || IS_BIT_SET(num, 4))
				return 1;
			else
				return 0;

	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_153248.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDF7F16323520B858(num3, &num2, -1))
				if (IS_BIT_SET(num2, 8))
					return 1;
		}
	}

	if (unk_0x76CA59C648318506())
	{
		num4 = unk_0x38640D2193CB547F(866);
	
		if (IS_BIT_SET(num4, 2) || IS_BIT_SET(num4, 4))
			return 1;
	}

	return 0;
}

int func_83() // Position - 0xD23F
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (IS_BIT_SET(Global_26, 5))
		if (IS_BIT_SET(Global_26, 1) || IS_BIT_SET(Global_26, 3))
			return 1;
		else
			return 0;

	if (unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 5))
			if (IS_BIT_SET(num, 1) || IS_BIT_SET(num, 3))
				return 1;
			else
				return 0;

	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_153248.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDF7F16323520B858(num3, &num2, -1))
				if (IS_BIT_SET(num2, 5))
					return 1;
		}
	}

	if (unk_0x76CA59C648318506())
	{
		num4 = unk_0x38640D2193CB547F(866);
	
		if (IS_BIT_SET(num4, 1) || IS_BIT_SET(num4, 3))
			return 1;
	}

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x753B42F8D561B8E2())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 3);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 5);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 3);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 5);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 1);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 3);
					unk_0xED11291F7127888E(unk);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xD378
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

BOOL func_85(int iParam0) // Position - 0xD430
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

int func_86(int iParam0, var uParam1) // Position - 0xD4D1
{
	int num;
	int num2;
	var unk;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_87(370527443, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 370527443;
					num = num + 1;
				}
			
				if (func_87(1109907117, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1109907117;
					num = num + 1;
				}
			
				if (func_87(2055456612, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2055456612;
					num = num + 1;
				}
			
				if (func_87(1690606566, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1690606566;
					num = num + 1;
				}
			
				if (func_87(-1633316949, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1633316949;
					num = num + 1;
				}
			
				if (func_87(-1461476313, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1461476313;
					num = num + 1;
				}
			
				if (func_87(-1770422457, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1770422457;
					num = num + 1;
				}
			
				if (func_87(-2059739958, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -2059739958;
					num = num + 1;
				}
			
				if (func_87(-1280001599, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1280001599;
					num = num + 1;
				}
			
				if (func_87(-922885037, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -922885037;
					num = num + 1;
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_87(716207715, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 716207715;
					num = num + 1;
				}
			
				if (func_87(446271089, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 446271089;
					num = num + 1;
				}
			
				if (func_87(1045616099, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1045616099;
					num = num + 1;
				}
			
				if (func_87(1336277129, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1336277129;
					num = num + 1;
				}
			
				if (func_87(-513369076, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -513369076;
					num = num + 1;
				}
			
				if (func_87(-447700000, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -447700000;
					num = num + 1;
				}
			
				if (func_87(-149207179, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -149207179;
					num = num + 1;
				}
			
				if (func_87(166784288, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 166784288;
					num = num + 1;
				}
			
				if (func_87(2068729789, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2068729789;
					num = num + 1;
				}
			
				if (func_87(1761389338, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1761389338;
					num = num + 1;
				}
			}
			break;
	}

	return num;
}

int func_87(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0xD84D
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (iParam1)
	{
		case joaat("WEAPON_BAT"):
			if (!*Global_262145.f_34365 && func_98(iLocal_54, false) || func_88(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_34365 || !func_98(iLocal_54, false))
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	
		case joaat("WEAPON_KNIFE"):
			if (!*Global_262145.f_34365 && func_98(iLocal_54, false) || func_88(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_34365)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_88(int iParam0, int iParam1, int iParam2) // Position - 0xD929
{
	int num;
	int num2;

	if (func_97())
		return false;

	num = func_92(iParam0, iParam1, iParam2);
	num2 = func_90(iParam0, iParam1);
	return IS_BIT_SET(num, func_89(num2));
}

int func_89(int iParam0) // Position - 0xD95B
{
	return iParam0 % 32;
}

int func_90(int iParam0, int iParam1) // Position - 0xD968
{
	return func_91(iParam0, iParam1);
}

int func_91(int iParam0, int iParam1) // Position - 0xD978
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
			
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
			
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
			
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
			
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			
				case 1400690398:
					return 613;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
			
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
			
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
			
				case 1694268374:
					return 605;
			
				case -1566778158:
					return 602;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
			
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
			
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
			
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
			
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
			
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
			
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			
				case 1605520746:
					return 604;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
			
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
			
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
			
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
			
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
			
				case 330905451:
					return 603;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
			
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
			
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			
				case 221907180:
					return 614;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
			
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
			
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
			
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
			
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
	
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
			
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
			
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
			
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			
				case 302671608:
					return 615;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
			
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
			
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
			
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
			
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
			
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
			
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
	
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
			
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
			
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
			
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
			
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
			
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
			
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
			
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
			
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
			
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			
				case 1141184690:
					return 601;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
			
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
			
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
			
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
			
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
			
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
			
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
			
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
			
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
			
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
			
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
			
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
			
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
			
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
			
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
			
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
			
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
			
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
			
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
			
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
			
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return &func_1;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
			
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
			
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
			
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
			
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
			
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
			}
			break;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
			
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
			
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
			}
			break;
	
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
			
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
			
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
			
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
			
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
			}
			break;
	
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
			
				case 503494624:
					return 579;
			}
			break;
	
		case 350597077:
			switch (iParam0)
			{
				case 943088878:
					return 607;
			
				case 310778254:
					return 608;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 609;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 610;
			}
			break;
	
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case 716207715:
					return 581;
			
				case 446271089:
					return 583;
			
				case 1045616099:
					return 584;
			
				case 1336277129:
					return 585;
			
				case -513369076:
					return 586;
			
				case -447700000:
					return 587;
			
				case -149207179:
					return 588;
			
				case 166784288:
					return 589;
			
				case 2068729789:
					return 590;
			
				case 1761389338:
					return 591;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case 370527443:
					return 582;
			
				case 1109907117:
					return 592;
			
				case 2055456612:
					return 593;
			
				case 1690606566:
					return 594;
			
				case -1633316949:
					return 595;
			
				case -1461476313:
					return 596;
			
				case -1770422457:
					return 597;
			
				case -2059739958:
					return 598;
			
				case -1280001599:
					return 599;
			
				case -922885037:
					return 600;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam0)
			{
				case -1240142720:
					return 606;
			}
			break;
	
		case 1924557585:
			switch (iParam0)
			{
				case -292433650:
					return 611;
			
				case 494808810:
					return 612;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 616;
			}
			break;
	}

	return 0;
}

int func_92(int iParam0, int iParam1, int iParam2) // Position - 0xFF3B
{
	int num;

	num = func_11(func_93(iParam0, iParam1), iParam2);
	return num;
}

int func_93(int iParam0, int iParam1) // Position - 0xFF55
{
	int num;
	int num2;

	num = func_90(iParam0, iParam1);
	num2 = func_96(num);

	if (func_95() == 0 || func_94() == 0 || func_95() == 999 && func_94() == 999)
	{
		switch (num2)
		{
			case 0:
				return 811;
		
			case 1:
				return 812;
		
			case 2:
				return 813;
		
			case 3:
				return 814;
		
			case 4:
				return 1753;
		
			case 5:
				return 2435;
		
			case 6:
				return 2828;
		
			case 7:
				return 5502;
		
			case 8:
				return 5506;
		
			case 9:
				return 5510;
		
			case 10:
				return 5623;
		
			case 11:
				return 5627;
		
			case 12:
				return 5631;
		
			case 13:
				return 5635;
		
			case 14:
				return 6374;
		
			case 15:
				return 6497;
		
			case 16:
				return 6517;
		
			case 17:
				return 6523;
		
			case 18:
				return 10273;
		
			case 19:
				return 12007;
		}
	}

	return 14626;
}

int func_94() // Position - 0x10137
{
	return Global_32829;
}

int func_95() // Position - 0x10142
{
	return Global_32828;
}

int func_96(int iParam0) // Position - 0x1014D
{
	return iParam0 / 32;
}

BOOL func_97() // Position - 0x1015A
{
	return Global_1575058;
}

BOOL func_98(int iParam0, BOOL bParam1) // Position - 0x10166
{
	if (iParam0 == 58)
	{
		if (bParam1)
			return Global_101444.f_329[58] < 5f;
	
		return true;
	}

	return false;
}

BOOL func_99(int iParam0, int iParam1, int iParam2) // Position - 0x1018F
{
	int num;
	int num2;

	if (func_97())
		return false;

	num = func_100(iParam0, iParam1, iParam2);
	num2 = func_90(iParam0, iParam1);
	return IS_BIT_SET(num, func_89(num2));
}

int func_100(int iParam0, int iParam1, int iParam2) // Position - 0x101C1
{
	int num;

	num = func_11(func_101(iParam0, iParam1), iParam2);
	return num;
}

int func_101(int iParam0, int iParam1) // Position - 0x101DB
{
	int num;
	int num2;

	num = func_90(iParam0, iParam1);
	num2 = func_96(num);

	if (func_95() == 0 || func_94() == 0 || func_95() == 999 && func_94() == 999)
	{
		switch (num2)
		{
			case 0:
				return 688;
		
			case 1:
				return 689;
		
			case 2:
				return 690;
		
			case 3:
				return 691;
		
			case 4:
				return 1755;
		
			case 5:
				return 2437;
		
			case 6:
				return 2830;
		
			case 7:
				return 5504;
		
			case 8:
				return 5508;
		
			case 9:
				return 5512;
		
			case 10:
				return 5625;
		
			case 11:
				return 5629;
		
			case 12:
				return 5633;
		
			case 13:
				return 5637;
		
			case 14:
				return 6376;
		
			case 15:
				return 6499;
		
			case 16:
				return 6519;
		
			case 17:
				return 6525;
		
			case 18:
				return 10275;
		
			case 19:
				return 12009;
		}
	}

	return 1755;
}

BOOL func_102(int iParam0) // Position - 0x1035E
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
			return true;
	
		default:
		
	}

	return false;
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x103A8
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
	return;
}

int func_104(int iParam0, var uParam1) // Position - 0x103C7
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

void func_105(var uParam0, var uParam1) // Position - 0x10402
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
			num = func_108(i);
		
			if (num != 0)
			{
				num2 = unk_0xBCEDAE6CA2B2046E(uParam0, func_108(i));
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
				
					for (k = func_107(num2, j); k != 0; k = func_107(num2, j))
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
			if (unk_0xA40B513DA7201333(l, &unk5) && !func_106(unk5.f_1) && num4 < 51)
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
							if (!func_85(unk44.f_3))
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

BOOL func_106(int iParam0) // Position - 0x1068A
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

int func_107(int iParam0, int iParam1) // Position - 0x10876
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
				num2 = func_104(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x660FA55F8D417CAB(num2); i = i + 1)
					{
						if (unk_0x737024F2814ABDDD(num2, i, &unk40))
						{
							if (!func_85(unk40.f_3))
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

int func_108(int iParam0) // Position - 0x11597
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

float func_109(var uParam0) // Position - 0x1180B
{
	if (func_112(uParam0))
		if (func_111(uParam0))
			return uParam0->f_2;
		else
			return func_110(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_110(BOOL bParam0) // Position - 0x11847
{
	float num;
	float num2;
	int value;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(unk_0x1DD05E817C89C737());
		num2 = num / 1000f;
		return num2;
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		value = unk_0x7E3F74F641EE6B27();
		num3 = SYSTEM::TO_FLOAT(value);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(unk_0x1DD05E817C89C737()) / 1000f;
}

BOOL func_111(var uParam0) // Position - 0x1189F
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_112(var uParam0) // Position - 0x118AC
{
	return IS_BIT_SET(*uParam0, 1);
}

BOOL func_113() // Position - 0x118B9
{
	if (Global_1574612)
		return true;

	if (func_115())
		return true;

	if (func_114())
		return true;

	return func_4(124, -1);
}

BOOL func_114() // Position - 0x118E9
{
	return Global_1575067;
}

BOOL func_115() // Position - 0x118F5
{
	return Global_1575069;
}

void func_116() // Position - 0x11901
{
	int i;

	for (i = 1; i <= 49; i = i + 1)
	{
		if (!unk_0x37088D2C63AC4C01(i))
			if (unk_0xF841B04B93D27BA9(i))
				func_144(i, 1);
	}

	for (i = 51; i <= 59; i = i + 1)
	{
		if (!unk_0x37088D2C63AC4C01(i))
			if (unk_0xF841B04B93D27BA9(i))
				func_144(i, 1);
	}

	for (i = 70; i <= 77; i = i + 1)
	{
		if (!unk_0x37088D2C63AC4C01(i))
			if (unk_0xF841B04B93D27BA9(i))
				func_144(i, 1);
	}

	return;
}

BOOL func_117(int iParam0, int iParam1) // Position - 0x11995
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_7();

	num = func_118(iParam1);
	num2 = unk_0x38640D2193CB547F(num);
	return IS_BIT_SET(num2, iParam0);
}

int func_118(int iParam0) // Position - 0x119BE
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_7();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

BOOL func_119() // Position - 0x11A21
{
	if (func_121() && func_120(0))
		return true;

	return false;
}

var func_120(int iParam0) // Position - 0x11A3F
{
	return Global_1574538[iParam0];
}

var func_121() // Position - 0x11A4F
{
	return func_120(func_7() + 1);
}

BOOL func_122(var uParam0) // Position - 0x11A61
{
	return uParam0->f_79 == 1;
}

void func_123(var uParam0) // Position - 0x11A6F
{
	float num;

	num = Global_4543282;
	uParam0->f_80 = uParam0->f_80 + unk_0x0B852B0BF94A8DC1();

	if (!func_122(uParam0))
		return;

	if (func_130(uParam0) < 0f)
	{
		func_129(uParam0, 0);
		return;
	}

	if (func_177(14))
		num = 10f;

	if (func_130(uParam0) < num)
		return;

	if (func_128(uParam0, 0))
		return;

	if (func_126(uParam0->[0]))
	{
		func_125(uParam0);
		func_124(uParam0);
		func_129(uParam0, 0);
	}

	return;
}

void func_124(var uParam0) // Position - 0x11AF7
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_128(uParam0, i))
			i = *uParam0 + 100;
	}

	return;
}

void func_125(var uParam0) // Position - 0x11B28
{
	int num;

	num = 1;

	if (func_128(uParam0, 0))
		return;

	while (num < *uParam0)
	{
		uParam0->[num - 1] = uParam0->[num];
		num = num + 1;
	}

	return;
}

BOOL func_126(int iParam0) // Position - 0x11B5F
{
	if (unk_0x37088D2C63AC4C01(iParam0))
		return false;

	if (func_177(14) && !func_127(iParam0))
		return false;

	if (!unk_0x584E143398F9661C(iParam0))
		return false;

	if (unk_0x37088D2C63AC4C01(iParam0))
		return true;

	return false;
}

BOOL func_127(int iParam0) // Position - 0x11BA9
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_128(var uParam0, int iParam1) // Position - 0x11BF9
{
	return uParam0->[iParam1] == 78;
}

void func_129(var uParam0, int iParam1) // Position - 0x11C0A
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_130(var uParam0) // Position - 0x11C27
{
	return uParam0->f_80;
}

int func_131() // Position - 0x11C33
{
	float num;

	if (unk_0x76CD105BCAC6EB9F() || Global_79248)
		return 0;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			num = unk_0x6FF69BB93DBFAF25();
		
			if (num > 0.01f && unk_0x761778199FE1211C())
				func_150(14, SYSTEM::FLOOR(num * 100f));
		
			if (num >= 0.975f)
			{
				func_144(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_132(int iParam0) // Position - 0x11CAB
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

void func_133(BOOL bParam0) // Position - 0x11CD7
{
	if (Global_79248)
	{
		if (bParam0)
			func_9(bParam0);
	
		func_3(bParam0);
		func_16(bParam0);
		bParam0;
	}

	func_143(bParam0);
	func_136(bParam0);
	func_135();
	func_134();

	if (bParam0)
		func_112(&uLocal_58);

	return;
}

int func_134() // Position - 0x11D2B
{
	int num;
	int num2;

	if (unk_0x37088D2C63AC4C01(50))
		return 0;

	num = 0;
	num2 = 0;
	num = num + (unk_0x4F256B9F00ACB695(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	num = num + unk_0xDF21396D0886D8F7(joaat("FIRST_PERSON_CAM_TIME"));
	num2 = num2 + (unk_0x4F256B9F00ACB695(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	num2 = num2 + unk_0xDF21396D0886D8F7(joaat("MP_FIRST_PERSON_CAM_TIME"));

	if (num + num2 >= 15)
	{
		func_144(50, 1);
		return 1;
	}

	return 0;
}

int func_135() // Position - 0x11D99
{
	int num;

	if (unk_0x37088D2C63AC4C01(22))
		return 0;

	num = unk_0x2FED6B8DCEAE8D75();

	if (num > 0)
	{
		if (Global_33094 < num)
		{
			if (Global_33094 >= 0)
				func_150(22, num);
		
			Global_33094 = num;
		}
	}

	if (unk_0x2FED6B8DCEAE8D75() >= 50)
	{
		func_144(22, 1);
		return 1;
	}

	return 0;
}

int func_136(BOOL bParam0) // Position - 0x11DF0
{
	var unk;
	int num;
	int i;
	int num2;

	if (unk_0x37088D2C63AC4C01(17))
		return 0;

	unk = 6;
	unk[0] = func_142();
	unk[1] = func_141();
	unk[2] = func_140();
	unk[3] = func_139();
	unk[4] = func_138();
	unk[5] = func_137();
	num = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (unk[i])
			num = num + 1;
	}

	unk_0xDF7F16323520B858(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &num2, -1);

	if (num > num2 && num > 0)
	{
		unk_0x1164A75E490C27B6(joaat("NUM_DISCIPLINE_GOLD_EARNED"), num, 1);
		func_150(17, num);
	}

	bParam0;

	if (!unk[0])
	{
		bParam0;
		return 0;
	}

	if (!unk[1])
	{
		bParam0;
		return 0;
	}

	if (!unk[2])
	{
		bParam0;
		return 0;
	}

	if (!unk[3])
	{
		bParam0;
		return 0;
	}

	if (!unk[4])
	{
		bParam0;
		return 0;
	}

	if (!unk[5])
	{
		bParam0;
		return 0;
	}

	func_144(17, 1);
	return 1;
}

int func_137() // Position - 0x11F12
{
	int i;

	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_114370.f_1991[0 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_114370.f_1991[1 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_114370.f_1991[2 /*121*/][i /*10*/].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_138() // Position - 0x11F7F
{
	int i;

	i = 0;

	for (i = 0; i < 22; i = i + 1)
	{
		if (Global_114370.f_19150[0 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_114370.f_19150[1 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_114370.f_19150[2 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_139() // Position - 0x11FF5
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_24979.f_1, i))
			return 1;
	}

	return 0;
}

int func_140() // Position - 0x12026
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_24982.f_2, i))
			return 1;
	}

	return 0;
}

int func_141() // Position - 0x12057
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_114370.f_19019.f_19[i] == 1)
			return 1;
	}

	return 0;
}

int func_142() // Position - 0x1208A
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_114370.f_20014[i] == 1)
			return 1;
	}

	return 0;
}

int func_143(BOOL bParam0) // Position - 0x120BB
{
	var unk;
	int num;
	int num2;

	num = 0;

	if (unk_0x37088D2C63AC4C01(27))
		return 0;

	if (unk_0xDF7F16323520B858(joaat("SP0_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDF7F16323520B858(joaat("SP1_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDF7F16323520B858(joaat("SP2_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	bParam0;
	num2 = 0;
	unk_0xDF7F16323520B858(joaat("NUM_CASH_SPENT"), &num2, -1);

	if (num > 0 && num2 / 2000000 != num / 2000000)
	{
		unk_0x1164A75E490C27B6(joaat("NUM_CASH_SPENT"), num, 1);
		func_150(27, num);
	}

	if (num < 200000000)
		return 0;

	func_144(27, 1);
	return 1;
}

int func_144(int iParam0, int iParam1) // Position - 0x12172
{
	if (iParam0 >= 78)
		return 0;

	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1) // Position - 0x1218D
{
	if (func_177(14) && !func_127(iParam0))
		return 0;

	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33079 != 0 && !Global_79248)
		return 0;

	if (func_122(&Global_4543283))
	{
		if (func_148(&Global_4543283, iParam0))
			return 0;
	
		if (func_146(&Global_4543283, iParam0))
			return 1;
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
			return 0;
	
		if (unk_0x37088D2C63AC4C01(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_146(var uParam0, int iParam1) // Position - 0x1222A
{
	int i;
	var unk;

	unk = 78;

	if (unk_0x37088D2C63AC4C01(iParam1))
		return false;

	if (func_177(14) && !func_127(iParam1))
		return false;

	if (func_148(uParam0, iParam1))
		return false;

	if (func_130(uParam0) < 0f)
		func_129(uParam0, 0);

	func_183(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_147(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_147(var uParam0, int iParam1) // Position - 0x122DB
{
	int i;

	if (unk_0x37088D2C63AC4C01(iParam1))
		return 0;

	if (func_177(14) && !func_127(iParam1))
		return 0;

	if (func_148(uParam0, iParam1))
		return 0;

	if (func_130(uParam0) < 0f)
		func_129(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_128(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_148(var uParam0, int iParam1) // Position - 0x12356
{
	return func_149(uParam0, iParam1) != -1;
}

int func_149(var uParam0, int iParam1) // Position - 0x12368
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

int func_150(int iParam0, int iParam1) // Position - 0x12395
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

int func_151(BOOL bParam0) // Position - 0x123E6
{
	int num;

	num = func_164(bParam0) + func_152(bParam0);
	bParam0;
	return num;
}

int func_152(BOOL bParam0) // Position - 0x12404
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_114370.f_18577; i = i + 1)
	{
		if (Global_114370.f_18577[i /*6*/].f_3 != -1 && func_162(i, 7))
		{
			num3 = 0;
			num4 = 0;
		
			for (j = 0; j < func_160(i, 7); j = j + 1)
			{
				num6 = func_158(i, 7, j);
			
				if (!Global_64263[num6 /*13*/].f_7)
				{
					if (func_155(num6) == 1)
						num4 = num4 + 1;
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_154(num4, num3, false);
			num2 = func_153(num5);
		
			if (i >= 52 && i <= 56)
			{
				bParam0;
				num2 = Global_114370.f_2355[i - 52 /*2*/];
				num5 = 0f;
			}
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_153(float fParam0) // Position - 0x124F8
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_154(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1252D
{
	float num;
	float value;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	num = SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1);
	value = (50f * num) + 50f;
	value = SYSTEM::TO_FLOAT(SYSTEM::CEIL(value));

	if (value > 100f)
		value = 100f;

	return value;
}

int func_155(int iParam0) // Position - 0x1258C
{
	if (func_156(iParam0, func_157(Global_64263[iParam0 /*13*/].f_4)))
		return 1;

	return 0;
}

BOOL func_156(int iParam0, int iParam1) // Position - 0x125AF
{
	if (iParam1 < 0)
		return false;

	switch (Global_64263[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && Global_114370.f_24907[4 /*4*/] == _GET_CURRENT_PLAYER_CHARACTER())
		Global_64263[iParam0 /*13*/].f_2 = 0;

	if (Global_64263[iParam0 /*13*/].f_3)
		if (iParam1 < Global_64263[iParam0 /*13*/].f_2)
			return true;
	else if (iParam1 >= Global_64263[iParam0 /*13*/].f_2)
		return true;

	return false;
}

int func_157(int iParam0) // Position - 0x12679
{
	int num;

	if (iParam0 == 0)
		return -1;

	if (unk_0xDF7F16323520B858(iParam0, &num, -1))
		return num - 1;

	return -1;
}

int func_158(int iParam0, int iParam1, int iParam2) // Position - 0x126A2
{
	switch (iParam1)
	{
		case 1:
			return Global_92160[iParam0 /*34*/].f_17[iParam2];
	
		case 7:
			return func_159(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_159(int iParam0, int iParam1) // Position - 0x126E5
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_160(int iParam0, int iParam1) // Position - 0x12DC9
{
	switch (iParam1)
	{
		case 1:
			return Global_92160[iParam0 /*34*/].f_16;
	
		case 7:
			return func_161(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_161(int iParam0) // Position - 0x12E04
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

BOOL func_162(int iParam0, int iParam1) // Position - 0x12FB5
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_92160[iParam0 /*34*/].f_15, 5);
	
		case 7:
			return func_163(iParam0);
	
		default:
			break;
	}

	return false;
}

BOOL func_163(int iParam0) // Position - 0x12FF3
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

int func_164(BOOL bParam0) // Position - 0x13339
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;
	int num7;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_114370.f_9088.f_330; i = i + 1)
	{
		if (Global_114370.f_9088.f_330[i /*6*/].f_3 != -1 && func_162(i, 1))
		{
			num3 = 0;
			num4 = 0;
			num7 = -1;
		
			for (j = 0; j < func_160(i, 1); j = j + 1)
			{
				num6 = func_158(i, 1, j);
			
				if (!Global_64263[num6 /*13*/].f_7)
				{
					if (func_155(num6) == 1)
						num4 = num4 + 1;
				
					switch (num6)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							num7 = func_165(num6);
						
							if (num7 >= 2147483647)
								num7 = 1;
							break;
					}
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_154(num4, num3, false);
			num2 = func_153(num5);
		
			if (num7 > -1)
				num2 = num7;
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_165(int iParam0) // Position - 0x13453
{
	int num;

	num = func_157(Global_64263[iParam0 /*13*/].f_4);

	if (num > -2)
		return num;

	return 0;
}

void func_166() // Position - 0x13478
{
	var unk;
	var unk2;

	unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0);

	if (!unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
		return;

	if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "creatures@shark@move", "attack_player", 3))
	{
		func_144(25, 1);
		return;
	}

	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x836392D80E4F106A(unk_0x4A8C381C258A124D());
	
		if (unk_0x0101C509A6E67F99(unk))
		{
			unk2 = unk_0xBD545F8729E9F413(unk);
		
			if (func_167(unk2))
			{
				if (unk_0x4B423FAA24E8ABF0(unk2) == joaat("A_C_SharkTiger"))
				{
					func_144(25, 1);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_167(var uParam0) // Position - 0x13501
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return false;

	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

void func_168() // Position - 0x1351F
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
		
			if (!unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
				return;
		
			if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				return;
		
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) >= 3 && unk_0x3D2EB53CF281A77E() == 0)
			{
				if (func_173() == 2)
				{
					func_180(&uLocal_58);
					iLocal_55 = iLocal_55 + 1;
				}
			}
			break;
	
		case 1:
			if (func_172() || unk_0x3555462DB47B7AB1())
				return;
		
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 3)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (unk_0x3D2EB53CF281A77E() == 1)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (func_173() < 2)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			fLocal_63 = func_170(&uLocal_58);
		
			if (fLocal_63 >= 180f)
			{
				func_144(24, 1);
				func_169(&uLocal_58);
				iLocal_55 = iLocal_55 + 1;
			}
			break;
	
		case 2:
			iLocal_55 = iLocal_55 + 1;
			break;
	}

	return;
}

void func_169(var uParam0) // Position - 0x1362F
{
	if (func_112(uParam0))
	{
		if (!func_111(uParam0))
		{
			uParam0->f_2 = func_110(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
		}
	}

	return;
}

float func_170(var uParam0) // Position - 0x13666
{
	if (func_112(uParam0))
		if (func_111(uParam0))
			return uParam0->f_2;
		else
			return func_110(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_171(var uParam0) // Position - 0x1369F
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_172() // Position - 0x136B5
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

int func_173() // Position - 0x136D1
{
	int num;
	int num2;

	num = 0;
	num2 = func_175(CHAR_TREVOR);

	if (func_174(num2, 0) || IS_BIT_SET(Global_97223, 2))
		num = num + 1;

	num2 = func_175(CHAR_FRANKLIN);

	if (func_174(num2, 0) || IS_BIT_SET(Global_97223, 1))
		num = num + 1;

	num2 = func_175(CHAR_MICHAEL);

	if (func_174(num2, 0) || IS_BIT_SET(Global_97223, 0))
		num = num + 1;

	return num;
}

BOOL func_174(int iParam0, int iParam1) // Position - 0x13747
{
	return false;
}

int func_175(eCharacter echParam0) // Position - 0x137A0
{
	if (echParam0 > CHAR_MULTIPLAYER)
		return 0;

	if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		return unk_0x4A8C381C258A124D();

	return Global_98850[func_176(echParam0)];
}

int func_176(eCharacter echParam0) // Position - 0x137D1
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

BOOL func_177(int iParam0) // Position - 0x1380C
{
	return Global_43922 == iParam0;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x1381A
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_179() // Position - 0x13831
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

void func_180(var uParam0) // Position - 0x13847
{
	func_181(uParam0, 0f);
	return;
}

void func_181(var uParam0, float fParam1) // Position - 0x13856
{
	uParam0->f_1 = func_110(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_182(var uParam0, int iParam1) // Position - 0x13881
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_129(uParam0, 0);

	return;
}

void func_183(var uParam0) // Position - 0x1389D
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_184(uParam0, i);
	}

	func_129(uParam0, Global_4543282 - 0.5f);
	return;
}

void func_184(var uParam0, int iParam1) // Position - 0x138D1
{
	uParam0->[iParam1] = 78;
	return;
}

void func_185() // Position - 0x138E1
{
	int i;
	int num;

	num = 78;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		unk_0x37088D2C63AC4C01(i);
	}

	return;
}

void func_186(int iParam0) // Position - 0x1390B
{
	iParam0 > 0;
	return;
}

