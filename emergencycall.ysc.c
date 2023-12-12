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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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

	if (unk_0x96CFB880BAC634CE(11))
		iLocal_41 = 5;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			switch (iLocal_41)
			{
				case 0:
					func_10();
					break;
			
				case 1:
					break;
			
				case 2:
					func_9();
				
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (unk_0xDD121F61016F3CE0(7, unk_0x4A8C381C258A124D(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_41 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(7, uLocal_43, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_41 = 5;
					}
					break;
			
				case 3:
					func_9();
				
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (func_8(unk_0x259BE71D8A81D4FA(), false) && func_4(unk_0x259BE71D8A81D4FA()) == 5 && Global_1961311)
						{
							if (Global_1961312 == 0)
								Global_1961312 = 1;
						
							iLocal_41 = 5;
						}
						else if (unk_0xDD121F61016F3CE0(5, unk_0x4A8C381C258A124D(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_41 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(5, uLocal_43, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_41 = 5;
					}
					break;
			
				case 4:
					func_9();
				
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (unk_0xDD121F61016F3CE0(3, unk_0x4A8C381C258A124D(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_41 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(3, uLocal_43, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_97869.f_358 == unk_0x70E57E9927B6BA58("AGENCY_PREP_1") || unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("agency_prep1")) > 0 && _IS_MISSION_REPEAT_ACTIVE(false))
							Global_97869.f_358 = unk_0x70E57E9927B6BA58("AHP1_TRUCKCALLED");
						else if (func_2(67) && !func_2(68))
							Global_97799 = true;
					
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_41 = 5;
					}
					break;
			
				case 5:
					if (unk_0x1DD05E817C89C737() > iLocal_46 + 60000 || !unk_0x5BA108AB15E668B7(uLocal_47))
						func_1();
					else if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
							if (unk_0x5BA108AB15E668B7(uLocal_47))
								unk_0x3D09B44C2ACEA592(uLocal_47);
					break;
			}
		}
	}

	return;
}

void func_1() // Position - 0x27A
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_2(int iParam0) // Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2B8
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

int func_4(int iParam0) // Position - 0x2E0
{
	if (func_6(iParam0) == 233)
		return func_5(iParam0);

	return -1;
}

int func_5(int iParam0) // Position - 0x2FD
{
	if (func_8(iParam0, false))
		return Global_1886967[iParam0 /*609*/].f_10.f_182;

	return -1;
}

int func_6(int iParam0) // Position - 0x320
{
	if (func_7(iParam0))
		if (func_8(iParam0, false))
			return Global_1886967[iParam0 /*609*/].f_10.f_33;

	return -1;
}

BOOL func_7(int iParam0) // Position - 0x34C
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_8(int iParam0, BOOL bParam1) // Position - 0x36E
{
	if (func_7(iParam0))
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || bParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1)
			return true;

	return false;
}

void func_9() // Position - 0x3B2
{
	if (unk_0x1DD05E817C89C737() > iLocal_46 + 30000)
		iLocal_41 = 5;

	return;
}

void func_10() // Position - 0x3C9
{
	var unk;

	switch (iLocal_42)
	{
		case 0:
			iLocal_42 = 1;
			iLocal_46 = unk_0x1DD05E817C89C737();
			break;
	
		case 1:
			while (!func_20())
			{
				SYSTEM::WAIT(0);
			
				if (func_19() == 3)
					iLocal_41 = 3;
			
				if (func_19() == 4)
					iLocal_41 = 4;
			
				if (func_19() == 5)
					iLocal_41 = 2;
			
				if (unk_0x1DD05E817C89C737() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x1DD05E817C89C737();
					func_13(0);
				}
			}
		
			if (iLocal_41 == 0)
				iLocal_41 = 5;
		
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				func_11(unk_0x4A8C381C258A124D(), &uLocal_43, &unk);
		
			iLocal_46 = unk_0x1DD05E817C89C737();
			break;
	}

	return;
}

void func_11(var uParam0, var uParam1, var uParam2) // Position - 0x462
{
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	var unk6;
	var unk9;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int num9;
	var unk12;
	int num10;
	var unk13;
	var unk16;
	var unk19;

	num8 = 5f;
	num = 1;
	num9 = 0;

	while (num9 < 2)
	{
		switch (num9)
		{
			case 0:
				unk_0x6009FBA2EAAA60BE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), num, uParam1, &num6, &num2, 5, 1077936128, 0);
				unk_0x748728E3BFD8E371(*uParam1, 1f, 1, &unk3, &unk6, &unk, &unk2, &num3, 0);
			
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
			
				unk9 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(uParam0, 1) };
				num4 = unk_0x97BC40FFA2FFCCD2(unk9, unk9.f_1);
				num5 = num6 + 180f;
			
				if (num5 > 360f)
					num5 = num5 - 360f;
			
				if (func_12(num4, num6, 90f))
					*uParam2 = num6;
				else
					*uParam2 = num5;
			
				if (num3 < 0f)
				{
					num7 = 0f;
				}
				else if (unk_0xD2507ABB3A05C571(unk_0x97C50CC028477E0D(*uParam1, 1, 1, 1077936128, 0)))
				{
					num7 = 0f;
				}
				else
				{
					num7 = num8 * SYSTEM::TO_FLOAT(num2 / 2);
				
					if (num7 == 0f)
						num7 = num7 + num8;
				
					if (num2 == 5)
						num7 = num7 + num8;
				
					if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 294f, -895f, 28f, 1) < 25f || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
						num7 = num7 + 5f;
					else
						num7 = num7 + 3.75f;
				
					num7 = num7 + (num3 / 2f);
				}
			
				if (SYSTEM::VDIST(unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, num7, 0f, 0f), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > SYSTEM::VDIST(unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, -num7, 0f, 0f), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)))
					num7 = -num7;
			
				*uParam1 = { unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, num7, 0f, 0f) };
				unk12 = unk_0x26C582EF5CD8A3A2(*uParam1 + { uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f }, *uParam1 + { 4.5f, 0.5f, 0.5f }, 2.5f, 1, 0, 4);
				num9 = num9 + 1;
				break;
		
			case 1:
				if (num <= 2)
				{
					if (unk_0x0E7DD1EBCA8D2DE3(unk12, &num10, &unk16, &unk13, &unk19) == 2)
					{
						if (num10 != 0)
						{
							if (unk16.f_2 > uParam1->f_2 + 8.5f)
							{
								num9 = num9 + 1;
							}
							else
							{
								num = num + 1;
								num9 = 0;
							}
						}
						else
						{
							num9 = num9 + 1;
						}
					}
				}
				else
				{
					num9 = num9 + 1;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_12(float fParam0, float fParam1, float fParam2) // Position - 0x708
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x77D
{
	if (func_18())
		return;

	if (Global_21025)
		if (func_17())
			func_15(true, true);
		else
			func_15(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_14())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_14() // Position - 0x807
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_15(BOOL bParam0, BOOL bParam1) // Position - 0x82E
{
	if (bParam0)
	{
		if (func_16(0))
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

BOOL func_16(int iParam0) // Position - 0x8A2
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

BOOL func_17() // Position - 0x8F9
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_18() // Position - 0x907
{
	return IS_BIT_SET(Global_1956030, 19);
}

int func_19() // Position - 0x916
{
	return Global_23183;
}

BOOL func_20() // Position - 0x921
{
	if (Global_22166 == 0)
		return true;

	return false;
}

