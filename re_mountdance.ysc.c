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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 10;
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
	int iLocal_95 = 0;
	char* sLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
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
	var unk;

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
	iLocal_88 = joaat("U_M_O_TapHillBilly");
	sLocal_96 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_99 = -1;
	uLocal_89 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_92 = uScriptParam_0.f_17[0];

	if (unk_0x96CFB880BAC634CE(11))
		func_37(false);

	if (func_36(Global_114370.f_20120, 16384))
		func_37(false);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0xFC8BFE4B41177C22(uLocal_93))
		{
			if (unk_0x1C2F771CDC87A3A5(uLocal_93, 0) && !(iLocal_97 == 7))
			{
				func_35(&(Global_114370.f_20120), 16384);
				iLocal_97 = 7;
			}
		}
	
		switch (iLocal_97)
		{
			case 0:
				if (unk_0x173751E886F8E9AB() && !func_34() && !func_12())
				{
					if (func_11())
					{
						uLocal_93 = unk_0xB1DBFEB95C0EFB88(26, iLocal_88, uLocal_89, uLocal_92, 1, 1);
						unk_0xAAA71DD7E9059338(uLocal_93, 1);
						uLocal_94 = unk_0x4E55EAB577C13329(joaat("prop_tapeplayer_01"), 704.7615f, 4179.5737f, 39.7093f, 1, 1, 0);
						unk_0x5C96CEA06531AB03(uLocal_94, 233.8288f + 180f);
						unk_0x7F08C4791E6D6969(uLocal_93, 0, 0, 0, 0, 1);
						iLocal_97 = 1;
					}
				}
				else
				{
					func_37(false);
				}
				break;
		
			case 1:
				iLocal_99 = unk_0x2EC137C692A52458(uLocal_89 + { 1f, 0f, 0f }, 0f, 0f, uLocal_92, 2);
				unk_0x3DA436E63AB0F541(uLocal_93, iLocal_99, sLocal_96, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x4FE00B5CFB97782B("MNT_DNC", uLocal_93);
				iLocal_97 = 2;
				break;
		
			case 2:
				if (unk_0x20279DB6A8C883E5(iLocal_99, "MNT_DNC") == 1)
				{
					unk_0x9DE3D932AA2B055C(iLocal_99);
					iLocal_97 = 3;
				}
				break;
		
			case 3:
				unk = { unk_0xD1A6A821F5AC81DB(uLocal_93, 1) };
				unk_0x93956DF263A4A0DC(uLocal_93, 3f);
			
				if (func_10(unk_0x4A8C381C258A124D(), uLocal_93) < 10f)
				{
					unk_0xF9F66C74E3167674(unk_0x4A8C381C258A124D(), 1, uLocal_93, 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0xF9F66C74E3167674(uLocal_93, 1, unk_0x4A8C381C258A124D(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
			
				if (func_9(uLocal_93, unk_0x4A8C381C258A124D(), 1) < 25f)
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_98))
					{
						func_5(&uLocal_98, &uLocal_93, false);
						unk_0x61183D6239A9D7B8(uLocal_98, 3);
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_98))
				{
					func_4(&uLocal_98);
				}
			
				if (unk_0xBD3B265153D3BA2D(iLocal_99) > 0.9999999f)
					iLocal_97 = 1;
			
				if (unk_0x8BF5256C439DF778(uLocal_93))
				{
					unk_0x32FA1FA41E0D63D1(iLocal_99);
					iLocal_97 = 4;
				}
			
				if (unk_0x4FAFF4BCB7633475(uLocal_93) || unk_0x398315D0C90DE6F6(unk, 50f, 1) || unk_0x398315D0C90DE6F6(unk, 50f, 0) || unk_0xE94C7FA27FEB00DD(unk, 20f, 20f, 20f, 0) || unk_0x8764A5B95AE1F967(-1, unk, 50f) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uLocal_93) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), uLocal_93) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk, 1) < 25f && func_1(uLocal_93, unk_0x4A8C381C258A124D(), 1126825984, 0))
				{
					unk_0x32FA1FA41E0D63D1(iLocal_99);
					iLocal_97 = 4;
					iLocal_95 = 1;
				}
				break;
		
			case 4:
				if (unk_0xC450B06E5AAA0985(uLocal_98))
					func_4(&uLocal_98);
			
				if (!unk_0x8BF5256C439DF778(uLocal_93))
				{
					if (iLocal_95 == 1)
						unk_0xA966E518B752B92A(uLocal_93, 723.1315f, 4171.9565f, 39.7091f, 2f, -1, 1f, 1024, 1193033728);
					else
						unk_0xA966E518B752B92A(uLocal_93, 723.1315f, 4171.9565f, 39.7091f, 1f, -1, 1f, 1024, 1193033728);
				
					unk_0x44FB298D6382876D(uLocal_93, 1);
					iLocal_97 = 6;
				}
				break;
		
			case 6:
				if (unk_0x9B5C1660CCDF7189(uLocal_93, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && unk_0x9B5C1660CCDF7189(uLocal_93, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					unk_0xAAA71DD7E9059338(uLocal_93, 0);
				
					if (iLocal_95 == 1)
						unk_0xD844F5E50DAB6FF7(uLocal_93, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
					else
						unk_0x761F56E633460973(uLocal_93, 1193033728, 0);
				
					unk_0x44FB298D6382876D(uLocal_93, 1);
					iLocal_97 = 5;
				}
				break;
		
			case 5:
				if (unk_0xF6C26AE940C14749(uLocal_93) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(uLocal_93, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) > 50f && !unk_0x173751E886F8E9AB())
					func_37(true);
				break;
		
			case 7:
				if (!unk_0x173751E886F8E9AB())
					func_37(false);
				break;
		}
	}

	return;
}

BOOL func_1(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x494
{
	var unk;
	var unk4;
	float num;

	unk = { func_3(unk_0xD1A6A821F5AC81DB(uParam1, 1) - unk_0xD1A6A821F5AC81DB(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		unk4 = { unk_0x90D0E0397D3F7690(uParam0) };
	else
		unk4 = { func_3(unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 0f, 0f)) };

	num = func_2(unk4, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_2(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x525
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_3(float fParam0, var uParam1, var uParam2) // Position - 0x546
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_4(var uParam0) // Position - 0x585
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
		unk_0xFE54B8568B2ABD12(uParam0);

	return;
}

void func_5(var uParam0, var uParam1, BOOL bParam2) // Position - 0x59D
{
	if (!unk_0xC450B06E5AAA0985(*uParam0))
	{
		if (unk_0xFC8BFE4B41177C22(*uParam1))
		{
			if (!unk_0x4FAFF4BCB7633475(*uParam1))
			{
				*uParam0 = func_6(*uParam1, bParam2, 145);
			
				if (bParam2 == false)
					unk_0x1456FD5C0C438B19(*uParam0, 7);
			}
		}
	}

	return;
}

int func_6(var uParam0, BOOL bParam1, int iParam2) // Position - 0x5E1
{
	int num;

	num = func_7(uParam0, !bParam1, false);

	if (iParam2 != 145 && unk_0xC450B06E5AAA0985(num) && unk_0x6BA487C862DB8DDF(&(Global_2139[iParam2 /*29*/].f_3)))
		unk_0x594D5D0D7071B0DE(num, &(Global_2139[iParam2 /*29*/].f_3));

	return num;
}

int func_7(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x62B
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

var func_8(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6CF
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_9(var uParam0, var uParam1, int iParam2) // Position - 0x6E6
{
	var unk;
	var unk4;

	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	else
		unk = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };

	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
		unk4 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	else
		unk4 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };

	return unk_0xED977E2AE2CB16EE(unk, unk4, iParam2);
}

float func_10(var uParam0, var uParam1) // Position - 0x744
{
	return func_9(uParam0, uParam1, 1);
}

BOOL func_11() // Position - 0x755
{
	unk_0xEC9DAA34BBB4658C(iLocal_88);
	unk_0x80813AC549A1E8AE(sLocal_96);

	if (unk_0x6252BC0DD8A320DB(iLocal_88) && unk_0xE100DD4F82A51BDE(sLocal_96))
		return true;

	return false;
}

BOOL func_12() // Position - 0x782
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_28())
		return true;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		if (SYSTEM::VMAG2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_27())
			return false;

	if (func_13(100f, true) != -1)
		return true;

	return false;
}

int func_13(float fParam0, BOOL bParam1) // Position - 0x7E4
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
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num5 = func_19();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114370.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_114370.f_18577[num /*6*/], 3))
				{
					func_14(num, &unk);
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

void func_14(int iParam0, var uParam1) // Position - 0x895
{
	switch (iParam0)
	{
		case 0:
			func_15(uParam1, "Abigail1", func_17(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 1:
			func_15(uParam1, "Abigail2", func_17(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 2:
			func_15(uParam1, "Barry1", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 3:
			func_15(uParam1, "Barry2", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 4:
			func_15(uParam1, "Barry3", func_17(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 5:
			func_15(uParam1, "Barry3A", func_17(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 6:
			func_15(uParam1, "Barry3C", func_17(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 7:
			func_15(uParam1, "Barry4", func_17(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_16(iParam0), 0, 0);
			break;
	
		case 8:
			func_15(uParam1, "Dreyfuss1", func_17(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 9:
			func_15(uParam1, "Epsilon1", func_17(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 10:
			func_15(uParam1, "Epsilon2", func_17(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 11:
			func_15(uParam1, "Epsilon3", func_17(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 12:
			func_15(uParam1, "Epsilon4", func_17(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 13:
			func_15(uParam1, "Epsilon5", func_17(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 14:
			func_15(uParam1, "Epsilon6", func_17(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 15:
			func_15(uParam1, "Epsilon7", func_17(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 16:
			func_15(uParam1, "Epsilon8", func_17(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 17:
			func_15(uParam1, "Extreme1", func_17(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 18:
			func_15(uParam1, "Extreme2", func_17(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 19:
			func_15(uParam1, "Extreme3", func_17(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 20:
			func_15(uParam1, "Extreme4", func_17(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 21:
			func_15(uParam1, "Fanatic1", func_17(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_16(iParam0), 1, 0);
			break;
	
		case 22:
			func_15(uParam1, "Fanatic2", func_17(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_16(iParam0), 1, 0);
			break;
	
		case 23:
			func_15(uParam1, "Fanatic3", func_17(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_16(iParam0), 0, 1);
			break;
	
		case 24:
			func_15(uParam1, "Hao1", func_17(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_16(iParam0), 0, 1);
			break;
	
		case 25:
			func_15(uParam1, "Hunting1", func_17(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 26:
			func_15(uParam1, "Hunting2", func_17(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 27:
			func_15(uParam1, "Josh1", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 28:
			func_15(uParam1, "Josh2", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 29:
			func_15(uParam1, "Josh3", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 30:
			func_15(uParam1, "Josh4", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 31:
			func_15(uParam1, "Maude1", func_17(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 32:
			func_15(uParam1, "Minute1", func_17(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 33:
			func_15(uParam1, "Minute2", func_17(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 34:
			func_15(uParam1, "Minute3", func_17(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 35:
			func_15(uParam1, "MrsPhilips1", func_17(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 36:
			func_15(uParam1, "MrsPhilips2", func_17(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 37:
			func_15(uParam1, "Nigel1", func_17(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 38:
			func_15(uParam1, "Nigel1A", func_17(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 39:
			func_15(uParam1, "Nigel1B", func_17(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 40:
			func_15(uParam1, "Nigel1C", func_17(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 41:
			func_15(uParam1, "Nigel1D", func_17(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
	
		case 42:
			func_15(uParam1, "Nigel2", func_17(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 43:
			func_15(uParam1, "Nigel3", func_17(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
	
		case 44:
			func_15(uParam1, "Omega1", func_17(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 45:
			func_15(uParam1, "Omega2", func_17(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 46:
			func_15(uParam1, "Paparazzo1", func_17(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 47:
			func_15(uParam1, "Paparazzo2", func_17(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 48:
			func_15(uParam1, "Paparazzo3", func_17(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 49:
			func_15(uParam1, "Paparazzo3A", func_17(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 50:
			func_15(uParam1, "Paparazzo3B", func_17(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 51:
			func_15(uParam1, "Paparazzo4", func_17(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 52:
			func_15(uParam1, "Rampage1", func_17(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 54:
			func_15(uParam1, "Rampage3", func_17(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 55:
			func_15(uParam1, "Rampage4", func_17(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 56:
			func_15(uParam1, "Rampage5", func_17(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
	
		case 53:
			func_15(uParam1, "Rampage2", func_17(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
	
		case 57:
			func_15(uParam1, "TheLastOne", func_17(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 58:
			func_15(uParam1, "Tonya1", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 59:
			func_15(uParam1, "Tonya2", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 60:
			func_15(uParam1, "Tonya3", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 61:
			func_15(uParam1, "Tonya4", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		case 62:
			func_15(uParam1, "Tonya5", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_15(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x1A37
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

int func_16(int iParam0) // Position - 0x1AC8
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

struct<2> func_17(int iParam0) // Position - 0x1E0E
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_18(iParam0) };

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

struct<2> func_18(int iParam0) // Position - 0x1E45
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

int func_19() // Position - 0x2291
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

void func_20() // Position - 0x22D7
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_25(character) && !func_21(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_25(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_21(int iParam0) // Position - 0x23D4
{
	return Global_43922 == iParam0;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x23E2
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x241F
{
	if (func_25(character))
		return func_24(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_24(eCharacter echParam0) // Position - 0x2444
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_25(eCharacter echParam0) // Position - 0x2453
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x245F
{
	func_20();
	return Global_114370.f_2366.f_539.f_4321;
}

BOOL func_27() // Position - 0x2478
{
	if (unk_0x761778199FE1211C())
		if (unk_0xAB154BFC15F33733() == 1f)
			return true;

	return false;
}

BOOL func_28() // Position - 0x2495
{
	if (func_31() && !func_27())
		return true;

	if (func_30() && func_29())
		return true;

	return false;
}

BOOL func_29() // Position - 0x24C7
{
	return Global_114088 > 0;
}

BOOL func_30() // Position - 0x24D5
{
	if (Global_98294 != -1)
		return true;

	return false;
}

BOOL func_31() // Position - 0x24EA
{
	if (Global_98294 != -1)
		return IS_BIT_SET(Global_92160[Global_98294 /*34*/].f_15, 20);

	return false;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x250D
{
	return func_33(iParam0, Global_43922);
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x251E
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

BOOL func_34() // Position - 0x26FF
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uLocal_42) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_27())
			return false;
	}

	if (func_28())
		return true;

	if (func_13(100f, true) != -1)
		return true;

	return false;
}

void func_35(int iParam0, int iParam1) // Position - 0x2785
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x2796
{
	return iParam0 && iParam1 != false;
}

void func_37(BOOL bParam0) // Position - 0x27A5
{
	if (unk_0xFC8BFE4B41177C22(uLocal_94))
		unk_0x51C8BEA2005931AB(&uLocal_94);

	if (unk_0xC450B06E5AAA0985(uLocal_98))
		func_4(&uLocal_98);

	if (unk_0xFC8BFE4B41177C22(uLocal_93))
		if (bParam0)
			unk_0x734A9F4537A31459(&uLocal_93);
		else
			unk_0xF09E30AF1B8FB379(&uLocal_93);

	unk_0xBBC29EBE6E1A48FA();
	return;
}

