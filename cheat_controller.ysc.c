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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	char* sLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	var uLocal_78 = 10;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	BOOL bLocal_90 = 0;
	BOOL bLocal_91 = 0;
	int iLocal_92 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_44 = 1;
	iLocal_45 = 1;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = joaat("bmx");
	iLocal_71 = 300000;
	fLocal_76 = 1f;

	if (unk_0x96CFB880BAC634CE(34))
		func_113();

	Global_33078 = 0;
	Global_33077 = 0;
	Global_33079 = 0;
	Global_33080 = 0;
	Global_33082 = 0;
	Global_33081 = 0;
	func_112();

	while (true)
	{
		func_2();
	
		if (unk_0x76CD105BCAC6EB9F() && _NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), true, true) && !Global_1836456 && Global_32828 == 0)
			func_113();
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x127
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

void func_2() // Position - 0x187
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_65);
	return;
}

void func_3(int iParam0) // Position - 0x1A1
{
	switch (iLocal_44)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			if (unk_0x4B7DCB210992A9F7())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
				iLocal_44 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
	
		case 4:
			func_4(iParam0);
			break;
	
		default:
			break;
	}

	return;
}

void func_4(int iParam0) // Position - 0x1F6
{
	var unk;
	float num;
	BOOL flag;

	flag = false;

	if (unk_0x6252BC0DD8A320DB(iParam0))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_66))
			{
				if (!unk_0x1C2F771CDC87A3A5(uLocal_66, 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), uLocal_66, 0))
					{
						unk = { unk_0xD1A6A821F5AC81DB(uLocal_66, 1) };
						num = unk_0xCFC0C995455A6204(uLocal_66);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), unk, unk.f_1, unk.f_2 + 4f, 1, 0, 0, 1);
						flag = true;
					}
				}
			
				unk_0x8C1F7D7A31B2A38E(&uLocal_66);
			}
		
			if (!flag)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
					unk = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), -1.5f, 3.5f, 1f) };
				else if (iParam0 == joaat("buzzard"))
					unk = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 6f, 2f) };
				else
					unk = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 3.5f, 1f) };
			
				num = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) + 90f;
			}
		
			if (func_18(iParam0, unk, num))
			{
				uLocal_66 = unk_0x5779387E956077A6(iParam0, unk, num, 0, 1, 0);
				unk_0x1DE99C193C7EC64B(uLocal_66, 1084227584);
				unk_0x55098D9E9AD58806(iParam0);
				unk_0x68298CA6191CDFDB(&uLocal_66);
				func_16(sLocal_68);
				func_5(20);
			}
			else
			{
				unk_0x55098D9E9AD58806(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
			}
		
			iLocal_44 = 1;
		}
	}

	return;
}

void func_5(int iParam0) // Position - 0x339
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33079, iParam0);
		Global_33082 = 1;
		func_6();
	}

	return;
}

void func_6() // Position - 0x36C
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_FRANKLIN:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_TREVOR:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}

	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x3BA
{
	int num;

	unk_0xDF7F16323520B858(iParam0, &num, -1);
	num = num + iParam1;
	unk_0x1164A75E490C27B6(iParam0, num, 1);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3DD
{
	func_9();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_9() // Position - 0x3F6
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_10(character) && !func_15(14) || Global_113320)
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

BOOL func_10(eCharacter echParam0) // Position - 0x4F3
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x4FF
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x53C
{
	if (func_10(character))
		return func_13(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_13(eCharacter echParam0) // Position - 0x561
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_14(char* sParam0) // Position - 0x570
{
	if (iLocal_92 != 0)
	{
		if (func_15(14) && unk_0x9390801B06EE998F())
		{
			if (unk_0x1B79E937E91F40C3(sParam0, "CHEAT_SUPER_JUMP" /*Super jump.*/) && unk_0x4B7DCB210992A9F7())
				return false;
		
			if (unk_0x1B79E937E91F40C3(sParam0, "CHEAT_GRAVITY_MOON" /*Moon gravity.*/) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
				return false;
		}
	
		return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Position - 0x5DA
{
	return Global_43922 == iParam0;
}

void func_16(char* sParam0) // Position - 0x5E8
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0xCCDB0041859B85A6("CHEAT_ACTIVATED" /*Cheat activated:~n~~a~*/);
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
		unk_0xDB98FB9902F6B17C(sParam0);
	}

	return;
}

void func_17(var uParam0) // Position - 0x61A
{
	uLocal_78[iLocal_89] = uParam0;
	iLocal_89 = iLocal_89 + 1;

	if (iLocal_89 >= 10)
		iLocal_89 = 0;

	return;
}

BOOL func_18(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x63A
{
	var unk;
	var unk29;
	float num;
	float num2;
	var unk36;
	var unk39;
	int num3;
	var unk42;
	var unk43;
	var unk44;
	var unk45;
	var unk46;
	var unk47;
	var unk48;
	var unk49;

	unk = 9;
	unk_0xC93BAF616F1C680F(iParam0, &unk29, &num);
	num2 = unk_0x1D5CD3EAAA7422B0(num - unk29) / 2f;
	num2.f_1 = unk_0x1D5CD3EAAA7422B0(num.f_1 - unk29.f_1) / 2f;
	num2.f_2 = unk_0x1D5CD3EAAA7422B0(num.f_2 - unk29.f_2) / 2f;
	unk[0 /*3*/] = { uParam1 };
	unk[1 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, -num2, -num2.f_1, -num2.f_2) };
	unk[2 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, num2, -num2.f_1, -num2.f_2) };
	unk[3 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, num2, num2.f_1, -num2.f_2) };
	unk[4 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, -num2, num2.f_1, -num2.f_2) };
	unk[5 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, -num2, -num2.f_1, num2.f_2) };
	unk[6 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, num2, -num2.f_1, num2.f_2) };
	unk[7 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, num2, num2.f_1, num2.f_2) };
	unk[8 /*3*/] = { unk_0xF10F2A2453AF1DFB(uParam1, fParam4, -num2, num2.f_1, num2.f_2) };

	if (!unk_0x7830326EF9D54DBB(uParam1))
		return false;

	unk48 = unk_0x14C30F326F5883DA(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) + { 1f, 0f, 0f }, uParam1, 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk48, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk42 = unk_0x14C30F326F5883DA(unk[1 /*3*/], unk[3 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk42, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk43 = unk_0x14C30F326F5883DA(unk[2 /*3*/], unk[4 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk43, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk44 = unk_0x14C30F326F5883DA(unk[5 /*3*/], unk[7 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk44, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk45 = unk_0x14C30F326F5883DA(unk[6 /*3*/], unk[8 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk45, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk46 = unk_0x14C30F326F5883DA(unk[1 /*3*/], unk[8 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk46, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk47 = unk_0x14C30F326F5883DA(unk[2 /*3*/], unk[7 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(unk47, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	return true;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x8F6
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_20(int iParam0) // Position - 0x909
{
	if (unk_0xE7D342E0F16AAA8F(iParam0))
	{
		unk_0xEC9DAA34BBB4658C(iParam0);
	
		if (unk_0x6252BC0DD8A320DB(iParam0))
			iLocal_44 = 4;
	}

	return;
}

void func_21(char* sParam0) // Position - 0x92C
{
	if (!func_15(14))
	{
		unk_0xCCDB0041859B85A6("CHEAT_DENIED" /*Cheat denied:~n~~a~*/);
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
	}

	return;
}

void func_22() // Position - 0x958
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
	return;
}

void func_23() // Position - 0x984
{
	switch (iLocal_64)
	{
		case 1:
			break;
	
		case 4:
			func_31(19, true);
			func_30();
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28() || func_27(23) || func_27(21) || func_27(19))
			{
				iLocal_64 = 9;
				return;
			}
		
			func_25();
			break;
	
		case 9:
			func_24("CHEAT_AIM_SLOW_MO" /*Slow motion aim.*/);
			func_31(19, false);
			unk_0xE6AC149D1121535D(1f);
			iLocal_75 = 0;
			iLocal_64 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_24(char* sParam0) // Position - 0xA23
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0xCCDB0041859B85A6("CHEAT_DEACTIVATED" /*Cheat deactivated:~n~~a~*/);
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
	}

	return;
}

void func_25() // Position - 0xA4E
{
	if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
		if (unk_0x6D05C5731A838CB3(2, 25))
			if (func_26(unk_0x4A8C381C258A124D()) != joaat("WEAPON_UNARMED") && func_26(unk_0x4A8C381C258A124D()) != joaat("OBJECT"))
				unk_0xE6AC149D1121535D(fLocal_76);
			else
				unk_0xE6AC149D1121535D(1f);
		else
			unk_0xE6AC149D1121535D(1f);

	return;
}

int func_26(var uParam0) // Position - 0xAA5
{
	int unk;

	unk_0x23B29877D0BE9547(uParam0, &unk, 1);
	return unk;
}

BOOL func_27(int iParam0) // Position - 0xAB9
{
	if (IS_BIT_SET(Global_33077, iParam0))
		return true;

	return false;
}

BOOL func_28() // Position - 0xACF
{
	if (func_15(0) || func_15(11) || func_15(4) || func_15(9) || func_15(10) || func_15(3) || func_15(2) || func_29(35))
		return true;

	return false;
}

BOOL func_29(int iParam0) // Position - 0xB35
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_99.f_58[iParam0];
}

void func_30() // Position - 0xB62
{
	iLocal_75 = iLocal_75 + 1;

	if (iLocal_75 > 3)
	{
		iLocal_75 = 0;
		iLocal_64 = 9;
		return;
	}

	switch (iLocal_75)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1" /*Slow motion aim level 1.*/);
			fLocal_76 = 0.6f;
			break;
	
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2" /*Slow motion aim level 2.*/);
			fLocal_76 = 0.4f;
			break;
	
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3" /*Slow motion aim level 3.*/);
			fLocal_76 = 0.2f;
			break;
	
		default:
			break;
	}

	iLocal_64 = 5;
	return;
}

void func_31(int iParam0, BOOL bParam1) // Position - 0xBD2
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33078, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33078, iParam0);
	}

	return;
}

void func_32() // Position - 0xBFA
{
	switch (iLocal_61)
	{
		case 1:
			break;
	
		case 4:
			func_31(16, true);
			func_35();
			break;
	
		case 5:
			unk_0x66EFB3D6110055C4(2, 37, 1);
			unk_0x66EFB3D6110055C4(2, 19, 1);
		
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28() || func_34() || func_33(true) || unk_0xDEE3EFEA31A1F555(2, 37) || unk_0xDEE3EFEA31A1F555(2, 19) || func_27(23) || func_27(21) || func_27(16))
				iLocal_61 = 9;
			break;
	
		case 9:
			unk_0x66EFB3D6110055C4(2, 37, 1);
			unk_0x66EFB3D6110055C4(2, 19, 1);
			func_24("CHEAT_SLOW_MO" /*Slow Motion.*/);
			func_31(16, false);
			iLocal_74 = 0;
			unk_0xE6AC149D1121535D(1f);
			iLocal_61 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_33(BOOL bParam0) // Position - 0xCE1
{
	if (bParam0)
		return Global_23572.f_4 && Global_23572.f_104 == 4;

	return Global_23572.f_4;
}

BOOL func_34() // Position - 0xD0A
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

void func_35() // Position - 0xD26
{
	iLocal_74 = iLocal_74 + 1;

	if (iLocal_74 > 3)
	{
		iLocal_61 = 9;
		return;
	}

	switch (iLocal_74)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1" /*Slow motion level 1.*/);
			unk_0xE6AC149D1121535D(0.6f);
			break;
	
		case 2:
			func_16("CHEAT_SLOW_MO2" /*Slow motion level 2.*/);
			unk_0xE6AC149D1121535D(0.4f);
			break;
	
		case 3:
			func_16("CHEAT_SLOW_MO3" /*Slow motion level 3.*/);
			unk_0xE6AC149D1121535D(0.2f);
			break;
	
		default:
			break;
	}

	iLocal_61 = 5;
	return;
}

void func_36() // Position - 0xD99
{
	var unk;
	var unk4;
	float num;

	switch (iLocal_62)
	{
		case 1:
			break;
	
		case 2:
			func_31(17, true);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("GADGET_PARACHUTE"), 1, 0, 1);
			unk = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			unk4 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
			unk_0xB1EAADCB692D69CE(unk, &num, 0, 0);
			num = num + 500f;
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), unk, unk.f_1, num, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), unk4);
			iLocal_70 = unk_0x1DD05E817C89C737();
			unk_0x8F72AF14CE5AACE4(0);
			iLocal_62 = 3;
			break;
	
		case 3:
			if (func_38(1000, iLocal_70))
			{
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				iLocal_70 = unk_0x1DD05E817C89C737();
				iLocal_62 = 4;
			}
			break;
	
		case 4:
			if (func_38(1000, iLocal_70))
			{
				unk_0x66EFB3D6110055C4(0, 144, 1);
				unk_0x66EFB3D6110055C4(0, 149, 1);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 9, 0, 0, 0);
				else
					unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 8, 0, 0, 0);
			
				unk_0x10B228D2FDB7AF16(250);
				iLocal_70 = unk_0x1DD05E817C89C737();
				func_16("CHEAT_SKYFALL" /*Skyfall.*/);
				unk_0xF6ECB54A7941386F(2);
				iLocal_62 = 5;
			}
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28() || func_27(23) || func_27(21) || func_27(17))
			{
				iLocal_62 = 9;
				break;
			}
		
			unk_0x66EFB3D6110055C4(0, 144, 1);
			unk_0x4EB223432F8FA0A0(2);
		
			if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
			{
				unk_0xE592D924D5438108(unk_0x4A8C381C258A124D(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
			
				if (unk_0x14E25ED5E75102C8(unk_0x4A8C381C258A124D()))
					iLocal_62 = 9;
			}
			else
			{
				iLocal_62 = 9;
			}
			break;
	
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL" /*Skyfall.*/);
			func_31(17, false);
			iLocal_62 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_37() // Position - 0xF99
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("GADGET_PARACHUTE"));

	if (iLocal_60 != 5)
	{
		unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
	}

	unk_0xF6ECB54A7941386F(0);
	return;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0xFDE
{
	int num;
	int num2;

	num = unk_0x1DD05E817C89C737();
	num2 = num - iParam0;

	if (num2 > iParam1)
		return true;

	return false;
}

void func_39() // Position - 0xFFF
{
	var unk;

	switch (iLocal_60)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_INVINCIBILITY" /*Invincible for 5 minutes.*/);
			func_31(15, true);
			iLocal_60 = 5;
			uLocal_72 = unk_0x1DD05E817C89C737();
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iLocal_60 = 9;
				return;
			}
		
			unk = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };
		
			if (func_28() || func_34() || func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
			{
				iLocal_60 = 9;
				return;
			}
		
			iLocal_73 = unk_0x1DD05E817C89C737() - uLocal_72;
		
			if (unk_0x486FF5D06E9659F1(joaat("appinternet")) == 0)
				func_40(iLocal_71 - iLocal_73, "CHEAT_INV" /*INVINCIBILITY*/, 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		
			if (iLocal_73 >= iLocal_71 - 1000)
			{
				iLocal_60 = 9;
				return;
			}
		
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xB2C27348224E729C();
			break;
	
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF" /*Invincibility*/);
			func_31(15, false);
			iLocal_60 = 1;
		
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
				unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x117A
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_42(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1669875.f_1 = 1;
		func_41(7, num);
		Global_1669875.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1669875.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1669875.f_4714.f_172[num] = iParam2;
		Global_1669875.f_4714.f_216[num] = iParam3;
		Global_1669875.f_4714.f_183[num] = iParam4;
		Global_1669875.f_4714.f_194[num] = iParam5;
		Global_1669875.f_4714.f_249[num] = iParam6;
		Global_1669875.f_4714.f_260[num] = iParam7;
		Global_1669875.f_4714.f_205[num] = iParam8;
		Global_1669875.f_4714.f_314[num] = iParam9;
		Global_1669875.f_4714.f_325[num] = iParam10;
		Global_1669875.f_4714.f_357[num] = iParam11;
		Global_1669875.f_4714.f_238[num] = iParam12;
		Global_1669875.f_4714.f_271[num] = iParam13;
		Global_1669875.f_4714.f_368[num] = iParam14;
		Global_1669875.f_4714.f_379[num] = iParam15;
		Global_1669875.f_4714.f_390[num] = iParam16;
		Global_1669875.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_41(int iParam0, int iParam1) // Position - 0x12D7
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1669875.f_7064[iParam0], iParam1);
	return;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12F0
{
	return IS_BIT_SET(Global_1669875.f_7064[iParam0], iParam1);
}

void func_43() // Position - 0x1306
{
	switch (iLocal_57)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, true);
			iLocal_57 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(21) || func_27(12))
			{
				iLocal_57 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_57 = 9;
				return;
			}
		
			unk_0x6966C09904B48D54(unk_0x259BE71D8A81D4FA());
			break;
	
		case 9:
			func_24("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, false);
			iLocal_57 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_44() // Position - 0x13AD
{
	switch (iLocal_58)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, true);
			iLocal_58 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(21) || func_27(13) || func_28())
			{
				iLocal_58 = 9;
				return;
			}
		
			unk_0x7F2AA4BA999DE234(unk_0x259BE71D8A81D4FA());
			break;
	
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, false);
			iLocal_58 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_45() // Position - 0x1450
{
	switch (iLocal_63)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, true);
			func_60(unk_0x4A8C381C258A124D());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_63 = 5;
			break;
	
		case 5:
			if (func_28() || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(21) || func_27(18))
				iLocal_63 = 9;
			break;
	
		case 9:
			func_24("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, false);
			func_49(unk_0x4A8C381C258A124D());
			func_48(1000);
			iLocal_63 = 1;
			break;
	
		case 10:
			func_46(true);
			func_31(18, false);
			iLocal_63 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_46(BOOL bParam0) // Position - 0x152A
{
	unk_0x9B669C0440D2AB57(0f);
	unk_0xC30B691CAD767629(0f);
	unk_0xB3CAD109683148E3(0f);
	unk_0x9AFEC71EEA2F7754(1);
	unk_0xAD0E20104A60B568(0f);
	unk_0xDB37962FDFC63FD7(1);
	unk_0xC5EE3F8EC7822462(0);

	if (unk_0xBC2EE32DE886BD08("SAFEHOUSE_STONED_MICHAEL"))
		unk_0xB43467C43086A6A1("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0xD6F9DEE4765092A9(&Global_45100))
		if (unk_0xBC2EE32DE886BD08(&Global_45100))
			unk_0xB43467C43086A6A1(&Global_45100);

	if (unk_0x78411E34CF90EA8C(Global_45088))
	{
		if (unk_0xDD87838D03B64B0A(Global_45088))
		{
			unk_0x17F06E9D89A05855(Global_45088, 0f);
			unk_0x584EE85BE0BFA70E(Global_45088, 1);
		}
	}

	if (unk_0x12B42434831D668E())
		unk_0xB9AB3B8920F1AA69(0);

	if (bParam0)
		if (unk_0x8960847E5FD7B48F() != -1 || unk_0x765B41E82372AA97() != -1)
			unk_0x80F87A4A3B930613();
		else if (unk_0x3555462DB47B7AB1())
			unk_0x80F87A4A3B930613();

	Global_45095 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45096, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_45100, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_45116, "", 16);
	func_47();
	return;
}

void func_47() // Position - 0x1606
{
	Global_45087 = false;
	Global_45088 = 0;
	Global_45089 = 0;
	Global_45090 = 30000;
	Global_45091 = 0f;
	Global_45093 = 0f;
	Global_45092 = 0f;
	Global_45094 = 1f;
	Global_45095 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45096, "", 16);
	return;
}

void func_48(int iParam0) // Position - 0x163C
{
	int num;

	if (!Global_45087)
		return;

	num = unk_0x1DD05E817C89C737();
	Global_45089 = num + iParam0;
	Global_45090 = iParam0;
	return;
}

void func_49(int iParam0) // Position - 0x1661
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return;

	num = func_57(iParam0);

	if (!(num == -1))
	{
		num2 = Global_44908[num /*5*/];
		func_52(1, num2, 1);
		return;
	}

	num3 = func_51(iParam0);

	if (num3 == -1)
		return;

	func_50(num3);
	return;
}

void func_50(int iParam0) // Position - 0x16BA
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

int func_51(int iParam0) // Position - 0x173D
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

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x176E
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1783
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_55(iParam0, iParam1, iParam2))
		return;

	num = func_54();

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

int func_54() // Position - 0x1805
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

BOOL func_55(int iParam0, int iParam1, int iParam2) // Position - 0x1836
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1851
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

int func_57(int iParam0) // Position - 0x189D
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

void func_58(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18E6
{
	func_59(-1, iParam0, iParam1, iParam2, iParam3, true);
	return;
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5) // Position - 0x18FC
{
	int num;

	if (Global_4)
		return;

	if (Global_45087)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!unk_0x7F2356076C3D052D())
		unk_0xD5681045964A2975("DRUNK_SHAKE", fParam3);

	if (!unk_0x0E9A1CE27A31950D())
		unk_0xE31C735DEE2BF705("DRUNK_SHAKE", fParam3 * Global_45086);

	if (unk_0x78411E34CF90EA8C(iParam4))
	{
		unk_0x2A09425009DAD0F5(iParam4, "DRUNK_SHAKE", fParam3);
		Global_45088 = iParam4;
	}
	else
	{
		Global_45088 = 0;
	}

	Global_45087 = true;
	num = unk_0x1DD05E817C89C737();
	Global_45089 = num + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_45089 = -1;

	Global_45090 = iParam1;
	Global_45091 = fParam2;
	Global_45093 = fParam3;
	Global_45092 = fParam3;
	return;
}

int func_60(int iParam0) // Position - 0x19B7
{
	return func_61(iParam0, -1, true);
}

int func_61(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19C7
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	num = func_63(iParam0);

	if (!(num == -1))
		return 1;

	num2 = func_51(iParam0);

	if (!(num2 == -1))
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_62();

	if (num3 == -1)
		return 0;

	Global_44882[num3 /*5*/] = 0;
	Global_44882[num3 /*5*/].f_1 = iParam0;
	Global_44882[num3 /*5*/].f_2 = iParam1;
	Global_44882[num3 /*5*/].f_3 = iParam1;
	Global_44882[num3 /*5*/].f_4 = 0;

	if (iParam0 == unk_0x4A8C381C258A124D())
		Global_45120 = 1;

	Global_44880 = Global_44880 + 1;
	return 1;
}

int func_62() // Position - 0x1A83
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44882[i /*5*/] == 13)
			return i;
	}

	return -1;
}

int func_63(int iParam0) // Position - 0x1AB2
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44908[i /*5*/].f_1)
			return Global_44908[i /*5*/];
	}

	return -1;
}

void func_64() // Position - 0x1AF3
{
	switch (iLocal_56)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, true);
			iLocal_56 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(21) || func_27(11))
			{
				iLocal_56 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_56 = 9;
				return;
			}
		
			unk_0x35A960C1E2064D55(unk_0x259BE71D8A81D4FA());
			break;
	
		case 9:
			func_24("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, false);
			iLocal_56 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_65() // Position - 0x1B9A
{
	switch (iLocal_59)
	{
		case 1:
			break;
	
		case 4:
			func_5(14);
			func_31(14, true);
			func_67();
			break;
	
		case 5:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28() || func_27(23) || func_27(21) || func_27(14) || func_66(17) || unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					iLocal_59 = 9;
			else
				iLocal_59 = 9;
			break;
	
		case 9:
			func_24("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			func_31(14, false);
			unk_0x446CF90BF0024020(0);
			iLocal_77 = 0;
			iLocal_59 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_66(int iParam0) // Position - 0x1C65
{
	if (IS_BIT_SET(Global_33078, iParam0))
		return true;

	return false;
}

void func_67() // Position - 0x1C7B
{
	iLocal_77 = iLocal_77 + 1;

	if (iLocal_77 > 1)
	{
		iLocal_59 = 9;
		return;
	}

	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			unk_0x446CF90BF0024020(1);
			break;
	
		default:
			break;
	}

	iLocal_59 = 5;
	return;
}

void func_68() // Position - 0x1CB8
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
	return;
}

void func_69() // Position - 0x1CEC
{
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
	
		if (func_27(23) || func_27(22) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			func_16("CHEAT_GIVE_PARACHUTE" /*Parachute given.*/);
			unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("GADGET_PARACHUTE"), 1, 1, 1);
			func_5(10);
		}
	}

	return;
}

BOOL func_70() // Position - 0x1D64
{
	if (bLocal_91)
	{
		bLocal_91 = false;
		return false;
	}

	if (func_71(0))
		return true;

	return false;
}

BOOL func_71(int iParam0) // Position - 0x1D85
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

void func_72() // Position - 0x1DDC
{
	int num;

	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
	
		if (func_27(23) || func_27(22) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xD6436470CD2C1484() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			num = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
		
			if (num > 0)
			{
				func_16("CHEAT_WANTED_DOWN" /*Wanted Level down.*/);
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), num - 1, 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED" /*No Wanted Level active.*/);
			}
		}
	}

	return;
}

void func_73() // Position - 0x1E7F
{
	int num;

	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
	
		if (func_27(23) || func_27(22) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xD6436470CD2C1484() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			num = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
		
			if (num < unk_0xD6436470CD2C1484())
			{
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), num + 1, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
				func_16("CHEAT_WANTED_UP" /*Wanted Level up.*/);
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED" /*Current max Wanted Level reached.*/);
			}
		}
	}

	return;
}

void func_74() // Position - 0x1F2E
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
	
		if (func_27(23) || func_27(22) || func_27(7) || func_15(9) || func_15(10) || !unk_0x10140D9546976B7F(func_75()) || !unk_0x3BBF563E688265AF(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x15263A2A8A135DF3(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY" /*Special ability recharged.*/);
			func_5(7);
		}
	}

	return;
}

var func_75() // Position - 0x1FD5
{
	return unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
}

void func_76() // Position - 0x1FE5
{
	var unk;

	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
	
		if (func_27(23) || func_27(22) || func_27(6) || func_15(9) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			func_16("CHEAT_HEALTH_ARMOR" /*Max health and armor.*/);
			func_5(6);
			unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), unk_0xF8A78594664D23A6(unk_0x4A8C381C258A124D()), 0, 0);
			unk_0x2E20E7B6C4BBA61D(unk_0x4A8C381C258A124D(), unk_0xD69C6BA96938C9C1(unk_0x259BE71D8A81D4FA()) - unk_0xE5E6F6EFCE07789A(unk_0x4A8C381C258A124D()));
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			
				if (unk_0xFC8BFE4B41177C22(unk))
					if (!unk_0x1C2F771CDC87A3A5(unk, 0))
						unk_0xF698038C13845696(unk);
			}
		}
	}

	return;
}

void func_77() // Position - 0x20BE
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
	
		if (func_27(23) || func_27(22) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_5(5);
	
		switch (iLocal_69)
		{
			case 0:
				iLocal_69 = 1;
				[[fallthrough]];
		
			case 1:
				unk_0xE38A58649E049502("EXTRASUNNY");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY" /*Extra sunny weather.*/);
				iLocal_69 = 2;
				break;
		
			case 2:
				unk_0xE38A58649E049502("CLEAR");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR" /*Clear weather.*/);
				iLocal_69 = 3;
				break;
		
			case 3:
				unk_0xE38A58649E049502("CLOUDS");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY" /*Cloudy weather.*/);
				iLocal_69 = 4;
				break;
		
			case 4:
				unk_0xE38A58649E049502("SMOG");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY" /*Smoggy weather.*/);
				iLocal_69 = 6;
				break;
		
			case 6:
				unk_0xE38A58649E049502("OVERCAST");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST" /*Overcast weather.*/);
				iLocal_69 = 7;
				break;
		
			case 7:
				unk_0xE38A58649E049502("RAIN");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN" /*Rainy weather.*/);
				func_31(5, true);
				iLocal_69 = 8;
				break;
		
			case 8:
				unk_0xE38A58649E049502("THUNDER");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER" /*Thundery weather.*/);
				iLocal_69 = 9;
				break;
		
			case 9:
				unk_0xE38A58649E049502("CLEARING");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING" /*Clearing weather.*/);
				iLocal_69 = 11;
				break;
		
			case 11:
				unk_0xE38A58649E049502("XMAS");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW" /*Snowy weather.*/);
				iLocal_69 = 0;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_78() // Position - 0x224D
{
	if (iLocal_49 == 4)
	{
		iLocal_49 = 1;
	
		if (func_27(23) || func_27(22) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_16("CHEAT_GIVE_WEAPONS" /*Give weapons.*/);
		func_5(4);
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_KNIFE"), -1, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_SMG"), 300, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_ASSAULTRIFLE"), 300, 1);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_PUMPSHOTGUN"), 150, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_SNIPERRIFLE"), 30, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_GRENADE"), 5, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("WEAPON_RPG"), 5, 0);
		}
	}

	return;
}

void func_79() // Position - 0x2322
{
	switch (iLocal_48)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, true);
			iLocal_48 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(22) || func_27(3))
			{
				iLocal_48 = 9;
			}
			else
			{
				unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1.49f);
				unk_0xB2C27348224E729C();
			}
			break;
	
		case 9:
			unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1f);
			func_24("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, false);
			iLocal_48 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_80() // Position - 0x23CA
{
	switch (iLocal_47)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, true);
			iLocal_47 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || func_27(23) || func_27(22) || func_27(2))
			{
				iLocal_47 = 9;
			}
			else
			{
				if (unk_0x24433628C02BED5F(unk_0x4A8C381C258A124D()) || unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()) && !unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
					unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1.49f);
				else
					unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
			
				unk_0xB2C27348224E729C();
			}
			break;
	
		case 9:
			unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
			func_24("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, false);
			iLocal_47 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_81() // Position - 0x24B3
{
	int num;

	switch (iLocal_46)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			func_31(1, true);
			iLocal_46 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(22) || func_27(1))
				iLocal_46 = 9;
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				num = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			
				if (!unk_0x1C2F771CDC87A3A5(num, 0))
				{
					if (unk_0xFD5C5BBD1FE92BB7(num, -1, 0) == unk_0x4A8C381C258A124D())
					{
						if (iLocal_67 == 0)
						{
							iLocal_67 = num;
						
							if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
								if (func_82(1))
									unk_0xF8EC8E90E8D24CA7(iLocal_67, 1);
								else
									iLocal_67 = 0;
						}
						else if (iLocal_67 != num)
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
								unk_0xF8EC8E90E8D24CA7(iLocal_67, 0);
						
							iLocal_67 = 0;
						}
					}
				}
			}
			break;
	
		case 9:
			func_24("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			iLocal_46 = 10;
			break;
	
		case 10:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
			{
				unk_0xF8EC8E90E8D24CA7(iLocal_67, 0);
				iLocal_67 = 0;
			}
		
			func_31(1, false);
			iLocal_46 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_82(int iParam0) // Position - 0x25DA
{
	var unk;
	int num;
	eCharacter character;
	var unk2;
	var unk3;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk = unk_0xDC8D5832207C2EAD();
	
		if (unk_0xFC8BFE4B41177C22(unk))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk, 0))
			{
				num = unk_0x4B423FAA24E8ABF0(unk);
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (iParam0 & 1 != 0)
					if (!unk_0xD3CE8D1E6564B011(num))
						return false;
			
				if (iParam0 & 2 != 0)
					if (!unk_0x78B050AFBA6D1517(num))
						return false;
			
				if (iParam0 & 4 != 0)
					if (!unk_0xBA16CD57E37AC32A(num))
						return false;
			
				if (iParam0 & 8 != 0)
					if (!unk_0xEA4F815FDC353FEF(num))
						return false;
			
				if (iParam0 & 16 != 0)
					if (unk_0x365DC1E8054AF31A(unk, "door_dside_r") != -1 || unk_0x365DC1E8054AF31A(unk, "door_pside_r") != -1)
						return false;
			
				if (iParam0 & 32 != 0)
					if (unk_0x365DC1E8054AF31A(unk, "door_dside_r") == -1 || unk_0x365DC1E8054AF31A(unk, "door_pside_r") == -1)
						return false;
			
				if (iParam0 & 64 != 0)
					if (unk_0x78B050AFBA6D1517(num))
						if (unk_0x365DC1E8054AF31A(unk, "seat_r") == -1)
							return false;
					else if (unk_0x365DC1E8054AF31A(unk, "seat_dside_r") != -1 || unk_0x365DC1E8054AF31A(unk, "seat_pside_r") != -1)
						return false;
			
				if (iParam0 & 128 != 0)
					if (unk_0x365DC1E8054AF31A(unk, "seat_dside_r") == -1 || unk_0x365DC1E8054AF31A(unk, "seat_pside_r") == -1)
						return false;
			
				if (iParam0 & 256 != 0)
				{
					if (!func_10(character))
						return false;
				
					if (func_85(character, 0) != num)
						return false;
				}
			
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xD3CE8D1E6564B011(num) && !unk_0x78B050AFBA6D1517(num))
						return false;
				
					if (unk_0x9E20DC08879FF3FC(unk))
						return false;
				
					unk3 = unk_0xED22194AB8539910(unk, &unk2);
				
					if (!unk_0xD6F9DEE4765092A9(unk3))
						if (unk_0x70E57E9927B6BA58(unk3) == unk_0x70E57E9927B6BA58("taxiService"))
							return false;
				
					if (func_83(unk, character, false))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_83(var uParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x27DB
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return false;

	for (i = 0; func_84(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114370.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_84(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2849
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

int func_85(eCharacter echParam0, int iParam1) // Position - 0x2921
{
	int num;

	if (func_10(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_86(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_86(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2963
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

void func_87() // Position - 0x2BBF
{
	switch (iLocal_45)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, true);
			iLocal_45 = 5;
			break;
	
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23) || func_27(22) || func_27(0) || unk_0x4B7DCB210992A9F7())
			{
				iLocal_45 = 9;
				return;
			}
		
			unk_0x353BF8D85390AA39(unk_0x259BE71D8A81D4FA());
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 217, 1);
			break;
	
		case 9:
			func_24("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, false);
			iLocal_45 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_88() // Position - 0x2C68
{
	if (func_111() || iLocal_92 != 0 || func_15(14))
		unk_0x66EFB3D6110055C4(2, 243, 1);

	func_110();

	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		return;

	if (unk_0x7FB6C108C1694163(unk_0x4A8C381C258A124D()))
		return;

	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		return;

	if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		return;

	if (func_34() || unk_0x3555462DB47B7AB1())
		return;

	if (func_109())
	{
		if (!bLocal_90)
		{
			func_108();
			bLocal_90 = true;
		}
	
		return;
	}

	bLocal_90 = false;
	bLocal_91 = false;

	if (func_107(988027572, 12) || unk_0x4590C086096F07D8(joaat("buzzoff")) || func_106(20, joaat("buzzard")))
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1" /*Spawn Buzzard.*/);

	if (func_107(-1134279030, 11) || unk_0x4590C086096F07D8(joaat("bandit")) || func_106(20, joaat("bmx")))
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2" /*Spawn BMX.*/);

	if (func_107(971352167, 10) || unk_0x4590C086096F07D8(joaat("holein1")) || func_106(20, joaat("caddy")))
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3" /*Spawn Caddy.*/);

	if (func_107(-269863225, 10) || unk_0x4590C086096F07D8(joaat("comet")) || func_106(20, joaat("comet2")))
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4" /*Spawn Comet.*/);

	if (func_107(458579068, 12) || unk_0x4590C086096F07D8(joaat("flyspray")) || func_106(20, joaat("duster")))
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5" /*Spawn Duster.*/);

	if (func_107(-666513193, 12) || unk_0x4590C086096F07D8(joaat("rocket")) || func_106(20, joaat("pcj")))
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6" /*Spawn PCJ.*/);

	if (func_107(-1245984749, 10) || unk_0x4590C086096F07D8(joaat("rapidgt")) || func_106(20, joaat("rapidgt")))
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7" /*Spawn Rapid GT.*/);

	if (func_107(2076774618, 12) || unk_0x4590C086096F07D8(joaat("offroad")) || func_106(20, joaat("sanchez")))
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8" /*Spawn Sanchez.*/);

	if (func_107(855685457, 9) || unk_0x4590C086096F07D8(joaat("vinewood")) || func_106(20, joaat("stretch")))
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9" /*Spawn Stretch Limo.*/);

	if (func_107(-591395876, 12) || unk_0x4590C086096F07D8(joaat("barnstorm")) || func_106(20, joaat("stunt")))
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10" /*Spawn Stunt Plane.*/);

	if (func_107(-1399217582, 10) || unk_0x4590C086096F07D8(joaat("trashed")) || func_106(20, joaat("trash")))
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11" /*Spawn Trashmaster.*/);

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (func_107(-375917581, 10) || unk_0x4590C086096F07D8(joaat("extinct")) || func_106(20, joaat("dodo")))
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12" /*Spawn Dodo Sea Plane.*/);
	
		if (func_107(-2124307881, 10) || unk_0x4590C086096F07D8(joaat("deathcar")) || func_106(20, joaat("dukes2")))
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13" /*Spawn Duke O'Death.*/);
	
		if (func_107(1028964594, 9) || unk_0x4590C086096F07D8(joaat("bubbles")) || func_106(20, joaat("submersible2")))
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14" /*Spawn Kraken submersible.*/);
	}

	if (func_107(-393416581, 11) || unk_0x4590C086096F07D8(joaat("hoptoit")) || func_106(0, 0))
		func_101();

	if (func_107(-296509791, 8) || unk_0x4590C086096F07D8(joaat("snowday")) || func_106(1, 0))
		func_100();

	if (func_107(1120820643, 7) || unk_0x4590C086096F07D8(joaat("catchme")) || func_106(2, 0))
		func_99();

	if (func_107(-421458016, 9) || unk_0x4590C086096F07D8(joaat("gotgills")) || func_106(3, 0))
		func_98();

	if (func_107(372390926, 12) || unk_0x4590C086096F07D8(joaat("toolup")) || func_106(4, 0))
		iLocal_49 = 4;

	if (func_107(606506837, 8) || unk_0x4590C086096F07D8(joaat("makeitrain")) || func_106(5, 0))
		iLocal_50 = 4;

	if (func_107(453014206, 12) || unk_0x4590C086096F07D8(joaat("turtle")) || func_106(6, 0))
		iLocal_51 = 4;

	if (func_107(1773187142, 9) || unk_0x4590C086096F07D8(joaat("powerup")) || func_106(7, 0))
		iLocal_52 = 4;

	if (func_107(1173296014, 10) || unk_0x4590C086096F07D8(joaat("fugitive")) || func_106(8, 0))
		iLocal_53 = 4;

	if (func_107(-381269753, 10) || unk_0x4590C086096F07D8(joaat("lawyerup")) || func_106(9, 0))
		iLocal_54 = 4;

	if (func_107(-2023988698, 11) || unk_0x4590C086096F07D8(joaat("skydive")) || func_106(10, 0))
		iLocal_55 = 4;

	if (func_107(-835863906, 12) || unk_0x4590C086096F07D8(joaat("highex")) || func_106(11, 0))
		func_97();

	if (func_107(1958387485, 12) || unk_0x4590C086096F07D8(joaat("incendiary")) || func_106(12, 0))
		func_96();

	if (func_107(-903985180, 9) || unk_0x4590C086096F07D8(joaat("hothands")) || func_106(13, 0))
		func_95();

	if (func_107(2087642905, 9) || unk_0x4590C086096F07D8(joaat("floater")) || func_106(14, 0))
		func_94();

	if (func_107(1257820019, 10) || unk_0x4590C086096F07D8(joaat("painkiller")) || func_106(15, 0))
		func_93();

	if (func_107(1540206179, 7) || unk_0x4590C086096F07D8(joaat("slowmo")) || func_106(16, 0))
		func_92();

	if (func_107(115565392, 16) || unk_0x4590C086096F07D8(joaat("skyfall")) || func_106(17, 0))
		func_91();

	if (func_107(-1276513277, 8) || unk_0x4590C086096F07D8(joaat("liquor")) || func_106(18, 0))
		func_90();

	if (func_107(2040433593, 9) || unk_0x4590C086096F07D8(joaat("deadeye")) || func_106(19, 0))
		func_89();

	return;
}

void func_89() // Position - 0x33CC
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_61 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_64 = 4;

	return;
}

void func_90() // Position - 0x3438
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_63 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_63 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_63 = 1;
		return;
	}

	if (iLocal_63 == 1)
		iLocal_63 = 4;
	else if (iLocal_63 == 5)
		iLocal_63 = 9;

	return;
}

void func_91() // Position - 0x34AF
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (unk_0x4B7DCB210992A9F7())
	{
		func_21("CHEAT_NOT_HERE" /*Can't activate that cheat here.*/);
		return;
	}

	if (iLocal_62 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE" /*Cheat already active.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(17) || func_66(0) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || !unk_0x174DBD3C5DB3557B())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 0) || unk_0x486FF5D06E9659F1(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_62 = 2;
	return;
}

void func_92() // Position - 0x3588
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_64 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_61 = 4;

	return;
}

void func_93() // Position - 0x35F4
{
	var unk;

	unk = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };

	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_60 == 1)
		iLocal_60 = 4;
	else if (iLocal_60 == 5)
		iLocal_60 = 9;

	return;
}

void func_94() // Position - 0x367E
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(14) || func_66(17) || unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_59 = 4;
	return;
}

void func_95() // Position - 0x36F3
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_58 = 1;
		return;
	}

	if (iLocal_58 == 1)
		iLocal_58 = 4;
	else if (iLocal_58 == 5)
		iLocal_58 = 9;

	return;
}

void func_96() // Position - 0x376A
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_57 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_57 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_57 = 1;
		return;
	}

	if (iLocal_57 == 1)
		iLocal_57 = 4;
	else if (iLocal_57 == 5)
		iLocal_57 = 9;

	return;
}

void func_97() // Position - 0x37E1
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_56 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_56 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_56 = 1;
		return;
	}

	if (iLocal_56 == 1)
		iLocal_56 = 4;
	else if (iLocal_56 == 5)
		iLocal_56 = 9;

	return;
}

void func_98() // Position - 0x3858
{
	if (func_27(23) || func_27(22) || func_27(3) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_48 == 1)
		iLocal_48 = 4;
	else if (iLocal_48 == 5)
		iLocal_48 = 9;

	return;
}

void func_99() // Position - 0x38CB
{
	if (func_27(23) || func_27(22) || func_27(2) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_47 == 1)
		iLocal_47 = 4;
	else if (iLocal_47 == 5)
		iLocal_47 = 9;

	return;
}

void func_100() // Position - 0x393E
{
	if (func_27(23) || func_27(22) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_46 == 1)
		iLocal_46 = 4;
	else if (iLocal_46 == 5)
		iLocal_46 = 9;

	return;
}

void func_101() // Position - 0x3999
{
	if (func_27(23) || func_27(22) || func_27(0) || unk_0x4B7DCB210992A9F7())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_45 == 1)
		iLocal_45 = 4;
	else if (iLocal_45 == 5)
		iLocal_45 = 9;

	return;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x39FE
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

void func_103(int iParam0, char* sParam1) // Position - 0x3AB6
{
	if (iLocal_44 == 1)
	{
		if (func_15(9) || unk_0x486FF5D06E9659F1(joaat("barry1")) > 0 || unk_0x486FF5D06E9659F1(joaat("tennis")) > 0 || func_27(23) || func_27(22) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED" /*Vehicle is not unlocked yet.*/);
			return;
		}
	
		iLocal_65 = iParam0;
		sLocal_68 = sParam1;
		iLocal_44 = 2;
	}

	return;
}

BOOL func_104(int iParam0) // Position - 0x3B50
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == false)
				return false;
			break;
	
		case joaat("dukes2"):
			if (func_105(64, 0) == false)
				return false;
			break;
	
		case joaat("submersible2"):
			if (func_105(63, 0) == false)
				return false;
			break;
	}

	return true;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x3BA8
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114370.f_32752[iParam0], iParam1);
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x3BC8
{
	if (IS_BIT_SET(Global_33080, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_33081)
			{
				unk_0x8744D2E3FC95740E(&Global_33080, iParam0);
				bLocal_91 = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_33080, iParam0);
			bLocal_91 = true;
			return true;
		}
	}

	return false;
}

int func_107(int iParam0, int iParam1) // Position - 0x3C12
{
	if (!func_15(14))
		return unk_0x1DBC8A6F227520FD(iParam0, iParam1);

	return 0;
}

void func_108() // Position - 0x3C30
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uLocal_78[i] != -1)
		{
			unk_0xFE3A52C5B7AE3101(uLocal_78[i]);
			uLocal_78[i] = -1;
		}
	}

	return;
}

BOOL func_109() // Position - 0x3C66
{
	if (Global_101392 == 13 || Global_101392 == 10 || Global_101392 == 11 || Global_101392 == 12)
		return false;

	return true;
}

void func_110() // Position - 0x3CA4
{
	if (func_15(14) || !unk_0x9390801B06EE998F() && iLocal_92 != 0)
		iLocal_92 = unk_0x1DD05E817C89C737();

	if (iLocal_92 != 0)
		if (!func_15(14))
			if (unk_0x1DD05E817C89C737() - iLocal_92 > 1000)
				iLocal_92 = 0;

	return;
}

BOOL func_111() // Position - 0x3CEF
{
	if (Global_79509)
		return true;
	else if (Global_64032 && !Global_64038)
		return true;

	return false;
}

void func_112() // Position - 0x3D19
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uLocal_78[i] = -1;
	}

	bLocal_90 = false;
	iLocal_89 = 0;
	return;
}

void func_113() // Position - 0x3D41
{
	unk_0x44182C1D103A97D2(0);

	if (iLocal_62 == 5)
		func_37();

	if (iLocal_63 == 5)
		func_46(true);

	if (iLocal_61 == 5 || iLocal_64 == 5)
		unk_0xE6AC149D1121535D(1f);

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_60 == 5)
		{
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
	
		unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
		unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1f);
	}

	unk_0x446CF90BF0024020(0);
	Global_33078 = 0;
	Global_33077 = 0;
	Global_33079 = 0;
	Global_33080 = 0;
	Global_33082 = 0;
	Global_33081 = 0;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

