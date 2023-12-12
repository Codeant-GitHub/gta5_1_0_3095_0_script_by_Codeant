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
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 2;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	BOOL bLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	BOOL bLocal_102 = 0;
	BOOL bLocal_103 = 0;
#endregion

void main() // Position - 0x0
{
	int i;

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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	uLocal_63 = { -1124.3922f, -514.70013f, 33.21493f };
	fLocal_66 = 200f;
	uLocal_67 = { 2490f, 3777f, 2402.879f };
	uLocal_70 = { -2052f, 3237f, 1450.078f };
	iLocal_73 = -1;
	iLocal_75 = -1;
	bLocal_84 = true;
	fLocal_85 = 10f;
	fLocal_86 = 90f;
	fLocal_87 = 35f;
	fLocal_88 = 60f;
	fLocal_89 = 275f;
	iLocal_90 = 1500;
	iLocal_91 = -1;
	iLocal_93 = 3000;
	iLocal_94 = 708;
	iLocal_95 = 377;
	iLocal_96 = 1000;
	iLocal_97 = 2093;
	iLocal_100 = -1;
	iLocal_101 = -1;
	bLocal_102 = true;
	bLocal_103 = true;

	if (unk_0x96CFB880BAC634CE(3))
		func_12();

	while (unk_0x15CCE8886267624F())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x5AEB336317DC4151("ufo"))
		unk_0xECFC57F5F11BCD83("ufo");

	iLocal_77[0 /*3*/] = { uLocal_67 };
	iLocal_77[1 /*3*/] = { uLocal_70 };

	while (true)
	{
		func_11(unk_0x4A8C381C258A124D());
	
		if (Global_32833 == 1)
			func_12();
	
		if (bLocal_84)
		{
			if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[0 /*3*/], 290f + 50f, 1))
				if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[1 /*3*/], 290f + 50f, 1))
					func_12();
		
			if (iLocal_76 != 0)
			{
				if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[0 /*3*/], fLocal_89 + 50f, 1))
				{
					if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[1 /*3*/], fLocal_89 + 50f, 1))
					{
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_76 = 0;
						iLocal_75 = -1;
					}
				}
			}
		}
	
		func_8();
	
		switch (iLocal_76)
		{
			case 0:
				i = 0;
			
				for (i = 0; i < iLocal_77; i = i + 1)
				{
					if (func_10(unk_0x4A8C381C258A124D(), iLocal_77[i /*3*/], fLocal_89, 1))
					{
						iLocal_75 = i;
						iLocal_76 = 1;
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 1, 1);
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 1, 1);
					}
				}
				break;
		
			case 1:
				i = 0;
			
				for (i = 0; i < iLocal_77; i = i + 1)
				{
					if (func_10(unk_0x4A8C381C258A124D(), iLocal_77[i /*3*/], fLocal_86, 1))
					{
						iLocal_75 = i;
						iLocal_76 = 2;
					}
				}
				break;
		
			case 2:
				if (iLocal_75 == -1)
				{
					iLocal_76 = 1;
				}
				else
				{
					iLocal_73 = unk_0x1DD05E817C89C737();
					iLocal_74 = 0;
					iLocal_76 = 3;
				}
				break;
		
			case 3:
				if (func_10(unk_0x4A8C381C258A124D(), iLocal_77[iLocal_75 /*3*/], fLocal_86, 1))
				{
					iLocal_74 = unk_0x1DD05E817C89C737() - iLocal_73;
				
					if (iLocal_74 >= iLocal_90)
					{
						iLocal_76 = 4;
						iLocal_91 = unk_0xCA369FBC0DE29517();
						iLocal_92 = unk_0x1DD05E817C89C737();
					
						if (iLocal_75 == 0)
							unk_0xF37CDE164C892195(iLocal_91, "SPECIAL_EVIL_UFO_DEATH_RAY", iLocal_77[iLocal_75 /*3*/], 0, 0, 0, 0);
						else
							unk_0xF37CDE164C892195(iLocal_91, "SPECIAL_EVIL_UFO_DEATH_RAY_3", iLocal_77[iLocal_75 /*3*/], 0, 0, 0, 0);
					
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_76 = 1;
				}
				break;
		
			case 4:
				func_5();
				func_7();
				func_6();
			
				if (unk_0x1DD05E817C89C737() > iLocal_92 + iLocal_93)
					func_4(&iLocal_91);
			
				if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[iLocal_75 /*3*/], fLocal_89, 1))
				{
					func_1();
					iLocal_75 = -1;
					iLocal_76 = 0;
					func_4(&iLocal_101);
					func_4(&iLocal_100);
					unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
					unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x3A3
{
	var unk;

	if (func_11(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		
			if (func_2(unk))
				unk_0xC229299217554C78(unk, 1, 0, 0);
		}
	}

	return;
}

BOOL func_2(var uParam0) // Position - 0x3DF
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
			if (!unk_0x5B702A5D1F2635BE(uParam0))
				return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x409
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x42A
{
	if (*uParam0 != -1)
	{
		unk_0x8E4825CCACA34B58(*uParam0);
		unk_0x394AFAC073E1F277(*uParam0);
		*uParam0 = -1;
	}

	return;
}

void func_5() // Position - 0x44B
{
	var unk;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (func_2(unk))
		{
			unk_0xC229299217554C78(unk, 0, 0, 0);
			unk_0xE592D924D5438108(unk, 2, 0f, 0f, -fLocal_85, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}

	return;
}

void func_6() // Position - 0x491
{
	if (bLocal_103)
	{
		if (unk_0x1DD05E817C89C737() > iLocal_98)
		{
			if (iLocal_100 != -1)
			{
				func_4(&iLocal_100);
				iLocal_98 = unk_0x1DD05E817C89C737() + iLocal_97;
			}
			else
			{
				iLocal_100 = unk_0xCA369FBC0DE29517();
				unk_0x85E83A170EF61477(iLocal_100, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_98 = unk_0x1DD05E817C89C737() + iLocal_95;
			}
		}
	}

	return;
}

void func_7() // Position - 0x4DB
{
	if (bLocal_102)
	{
		if (unk_0x1DD05E817C89C737() > iLocal_99)
		{
			if (iLocal_101 != -1)
			{
				func_4(&iLocal_101);
				iLocal_99 = unk_0x1DD05E817C89C737() + iLocal_96;
			}
			else
			{
				iLocal_101 = unk_0xCA369FBC0DE29517();
				unk_0x85E83A170EF61477(iLocal_101, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_99 = unk_0x1DD05E817C89C737() + iLocal_94;
			}
		}
	}

	return;
}

void func_8() // Position - 0x525
{
	var unk;

	if (iLocal_75 == -1)
		return;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		return;

	if (!func_10(unk_0x4A8C381C258A124D(), iLocal_77[iLocal_75 /*3*/], fLocal_87, 1))
		return;

	unk = { func_9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - iLocal_77[iLocal_75 /*3*/]) * { fLocal_88, fLocal_88, fLocal_88 } };
	unk_0xE592D924D5438108(unk_0x4A8C381C258A124D(), 2, unk, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
	return;
}

Vector3 func_9(float fParam0, var uParam1, var uParam2) // Position - 0x593
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

BOOL func_10(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x5D2
{
	return SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(uParam0, iParam5), vParam1) <= fParam4 * fParam4;
}

BOOL func_11(var uParam0) // Position - 0x5F0
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return false;

	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

void func_12() // Position - 0x60E
{
	if (unk_0x5AEB336317DC4151("ufo"))
		unk_0x5373E9377066509E("ufo");

	func_4(&iLocal_101);
	func_4(&iLocal_100);
	func_4(&iLocal_91);
	unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
	unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

