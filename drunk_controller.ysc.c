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
	BOOL bLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	int iLocal_17 = 8;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		func_32();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13 = iLocal_13 + 1;
	
		if (iLocal_13 >= 16)
			iLocal_13 = 0;
	
		iLocal_14 = iLocal_14 + 1;
	
		if (iLocal_14 >= 16)
			iLocal_14 = 0;
	
		iLocal_15 = iLocal_15 + 1;
	
		if (iLocal_15 >= 5)
			iLocal_15 = 0;
	
		if (!func_1())
			func_32();
	}

	return;
}

BOOL func_1() // Position - 0xA6
{
	if (Global_45087)
		return true;

	if (unk_0x78411E34CF90EA8C(Global_45088))
		return true;

	if (unk_0x486FF5D06E9659F1(joaat("drunk")) > 0)
		return true;

	if (Global_44880 > 0)
		return true;

	return false;
}

void func_2() // Position - 0xE3
{
	int i;
	int num;
	float num2;
	float num3;
	int num4;
	float num5;
	float num6;
	int num7;
	BOOL flag;

	if (!Global_45087)
		return;

	num = unk_0x1DD05E817C89C737();

	if (Global_45089 > num || Global_45089 == -1)
	{
		if (unk_0x3555462DB47B7AB1())
			return;
	
		num2 = func_14();
	
		for (i = iLocal_17 - 1; i >= 1; i = i + -1)
		{
			iLocal_17[i] = iLocal_17[i - 1];
		}
	
		iLocal_17[0] = num2;
		num4 = 0;
	
		for (i = 0; i < iLocal_17; i = i + 1)
		{
			num3 = num3 + iLocal_17[i];
			num4 = num4 + 1;
		}
	
		num3 = num3 / (float)num4;
		num5 = func_9();
	
		if (Global_45092 != Global_45093)
		{
			num6 = Global_45093 - Global_45092;
			Global_45092 = Global_45092 + (num6 * 0.1f);
		
			if (unk_0x1D5CD3EAAA7422B0(Global_45092 - Global_45093) < 0.01f)
				Global_45092 = Global_45093;
		}
	
		if (!unk_0x7F2356076C3D052D() && !func_8(unk_0x259BE71D8A81D4FA()))
			unk_0xD5681045964A2975("DRUNK_SHAKE", Global_45092 * num3 * num5);
	
		if (unk_0x1DD05E817C89C737() % 100 == 0)
		{
			if (Global_45089 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
					fLocal_26 = num3;
			
				unk_0xB3CAD109683148E3(Global_45092 * num3 * num5);
				unk_0x9B669C0440D2AB57(Global_45091 * num3 * num5);
				fLocal_26 = num3;
			}
		}
	
		if (Global_45091 * num3 * num5 < 1f)
			unk_0xC30B691CAD767629(Global_45091 * num3 * num5);
		else
			unk_0xC30B691CAD767629(1f);
	
		if (!unk_0x0E9A1CE27A31950D())
			unk_0xE31C735DEE2BF705("DRUNK_SHAKE", Global_45092 * Global_45086 * num3 * num5);
	
		unk_0xAD0E20104A60B568(Global_45092 * Global_45086 * num3 * num5);
	
		if (unk_0x78411E34CF90EA8C(Global_45088))
			if (unk_0xDD87838D03B64B0A(Global_45088))
				unk_0x17F06E9D89A05855(Global_45088, Global_45092 * num3 * num5);
	
		if (!unk_0xD6F9DEE4765092A9(&Global_45116) && !unk_0xD6F9DEE4765092A9(&Global_45100))
		{
			unk_0xCAC4020CCF361AC8(&Global_45100);
			TEXT_LABEL_ASSIGN_STRING(&Global_45116, "", 16);
		}
	
		unk_0x513E63C787EE96A7();
	
		if (Global_45095 > 0f)
		{
			if (fLocal_16 != Global_45095)
			{
				if (unk_0x765B41E82372AA97() != -1)
				{
				}
				else if (!unk_0x382F60C368A6D416())
				{
					unk_0xDA3EE68EF78AA786(&Global_45096, 15f);
					fLocal_16 = Global_45095;
				
					if (Global_45094 != 1f)
						unk_0x886C31F5E888F079(Global_45094);
				}
			}
			else
			{
				if (unk_0x765B41E82372AA97() != -1 && unk_0x8960847E5FD7B48F() != -1)
					fLocal_16 = -99f;
			
				unk_0xC5EE3F8EC7822462(2);
				num7 = Global_45089 - num;
			
				if (num7 <= Global_45090 / 2 && Global_45089 != -1)
				{
					flag = false;
				
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						if (unk_0x75E315E7679F4F24(unk_0x4A8C381C258A124D()))
							flag = true;
				
					if (func_6(unk_0x4A8C381C258A124D()))
					{
						Global_45089 = Global_45089 + 1000;
					}
					else if (flag)
					{
						Global_45089 = Global_45089 + 1000;
					}
					else if (unk_0x765B41E82372AA97() != -1)
					{
						Global_45089 = Global_45089 + 1000;
					}
					else if (func_5())
					{
						Global_45089 = Global_45089 + 1000;
					}
					else
					{
						if (unk_0x8960847E5FD7B48F() != -1)
							unk_0x20C160A285F3529C(SYSTEM::TO_FLOAT(Global_45090 / 2) / 1000f);
					
						fLocal_16 = -99f;
						Global_45095 = 0f;
						TEXT_LABEL_ASSIGN_STRING(&Global_45096, "", 16);
					}
				}
			}
		}
	
		return;
	}

	for (i = 0; i < iLocal_17; i = i + 1)
	{
		iLocal_17[i] = 0f;
	}

	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(true);
	bLocal_12 = true;
	return;
}

void func_3(BOOL bParam0) // Position - 0x408
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
	func_4();
	return;
}

void func_4() // Position - 0x4E2
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

BOOL func_5() // Position - 0x518
{
	return Global_2710107;
}

BOOL func_6(int iParam0) // Position - 0x524
{
	if (iParam0 == 0)
		return false;

	if (func_7(iParam0) == -1)
		return false;

	return true;
}

int func_7(int iParam0) // Position - 0x545
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

BOOL func_8(int iParam0) // Position - 0x58E
{
	return IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_321.f_3, 13);
}

float func_9() // Position - 0x5A7
{
	float num;
	int value;
	int value2;

	num = 0.1f;
	value = func_13(unk_0x4A8C381C258A124D());
	value2 = func_10(unk_0x4A8C381C258A124D());

	if (value2 == 0)
	{
		if (value == 0)
		{
			num = 0.1f;
		}
		else
		{
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(10);
		
			if (num > 1f)
				num = 1f;
		}
	}
	else if (value2 == 0)
	{
		num = 0.1f;
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(5);
	
		if (num > 1f)
			num = 1f;
	}

	return num;
}

int func_10(int iParam0) // Position - 0x626
{
	int num;
	int num2;

	if (iParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	num = func_12(iParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44908[num2 /*5*/].f_4;
}

int func_11(int iParam0) // Position - 0x669
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44908[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_12(int iParam0) // Position - 0x699
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

int func_13(int iParam0) // Position - 0x6DA
{
	int num;
	int num2;

	if (iParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	num = func_12(iParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44908[num2 /*5*/].f_3;
}

float func_14() // Position - 0x71D
{
	var unk;
	float num;
	int value;

	unk = unk_0x1DD05E817C89C737();
	num = 1f;
	value = Global_45089 - unk;

	if (value <= Global_45090)
		if (Global_45089 != -1)
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(Global_45090);

	return num;
}

void func_15() // Position - 0x757
{
	if (Global_44882[iLocal_15 /*5*/] == 0)
		func_16(iLocal_15);

	return;
}

void func_16(int iParam0) // Position - 0x770
{
	int num;
	struct<5> args;

	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (unk_0x1C2F771CDC87A3A5(Global_44882[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}

	if (func_6(Global_44882[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}

	if (!unk_0xA6E4F7A73ABC4A76("drunk"))
	{
		unk_0x97A5024CE91641F1("drunk");
		return;
	}

	num = func_18();

	if (num == -1)
	{
		func_19(iParam0);
		return;
	}

	Global_44908[num /*5*/] = func_17();
	Global_44908[num /*5*/].f_1 = Global_44882[iParam0 /*5*/].f_1;
	Global_44908[num /*5*/].f_2 = 0;
	args = { Global_44882[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &args, 5, DEFAULT);
	unk_0xFD49725F3FE7EE13("drunk");
	func_19(iParam0);
	return;
}

int func_17() // Position - 0x838
{
	int num;

	num = Global_44879;
	Global_44879 = Global_44879 + 1;
	return num;
}

int func_18() // Position - 0x84F
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44908[i /*5*/] == -1)
			return i;
	}

	return -1;
}

void func_19(int iParam0) // Position - 0x87E
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

void func_20() // Position - 0x901
{
	if (!(Global_44989[iLocal_13 /*6*/].f_2 == 6))
	{
		if (Global_44989[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}

	return;
}

void func_21(int iParam0) // Position - 0x931
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44989[iParam0 /*6*/] = -1;
	Global_44989[iParam0 /*6*/].f_1 = -1;
	Global_44989[iParam0 /*6*/].f_2 = 6;
	Global_44989[iParam0 /*6*/].f_3 = 0;
	Global_44989[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_22(int iParam0) // Position - 0x97E
{
	int num;

	num = Global_44989[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_23() // Position - 0x9C8
{
	int num;

	num = -1;

	if (!(Global_44908[iLocal_14 /*5*/] == -1))
	{
		num = func_29(Global_44908[iLocal_14 /*5*/], 0);
	
		if (num == -1)
			func_24(Global_44908[iLocal_14 /*5*/]);
		else
			func_21(num);
	}

	return;
}

void func_24(int iParam0) // Position - 0xA08
{
	int num;

	func_27(iParam0);
	num = func_26(iParam0);

	if (num == -1)
		return;

	func_25(num);
	return;
}

void func_25(int iParam0) // Position - 0xA2D
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44908[iParam0 /*5*/] = -1;
	Global_44908[iParam0 /*5*/].f_1 = 0;
	Global_44908[iParam0 /*5*/].f_2 = -1;
	Global_44908[iParam0 /*5*/].f_3 = 0;
	Global_44908[iParam0 /*5*/].f_4 = 0;
	return;
}

int func_26(int iParam0) // Position - 0xA7A
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44908[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

void func_27(int iParam0) // Position - 0xAAA
{
	func_31(iParam0);
	func_28(iParam0);
	return;
}

void func_28(int iParam0) // Position - 0xABE
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44989[i /*6*/].f_1)
			func_21(i);
	}

	return;
}

int func_29(int iParam0, int iParam1) // Position - 0xAF0
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam1 == Global_44989[i /*6*/].f_2)
			if (iParam0 == Global_44989[i /*6*/])
				return i;
	}

	return -1;
}

void func_30() // Position - 0xB2E
{
	if (Global_44989[iLocal_13 /*6*/] == 1)
		Global_44989[iLocal_13 /*6*/] = 0;

	return;
}

void func_31(int iParam0) // Position - 0xB49
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44989[i /*6*/])
			func_21(i);
	}

	return;
}

void func_32() // Position - 0xB79
{
	func_33();

	if (!bLocal_12)
		func_3(true);

	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_33() // Position - 0xB94
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_45121 = 0;
	Global_45120 = 0;
	Global_44880 = 0;
	unk_0xD13237BC328B938E("drunk");
	return;
}

void func_34() // Position - 0xBBF
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_21(i);
	}

	return;
}

void func_35() // Position - 0xBE3
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_25(i);
	}

	return;
}

void func_36() // Position - 0xC07
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		func_19(i);
	}

	return;
}

