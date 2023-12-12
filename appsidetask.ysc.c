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
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	BOOL bLocal_29 = 0;
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
	fLocal_25 = 0.72f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x51CC1333A10C4E09();
	Global_23232 = 0;
	Global_21024 = 0;
	func_18();
	Global_20813.f_1 = 7;
	func_17(Global_20794, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_20794, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					if (Global_23232 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
			
				case 8:
					if (Global_23232 == 1)
						func_5();
					break;
			
				case 3:
					unk_0xBBC29EBE6E1A48FA();
					break;
			
				default:
					break;
			}
		
			if (Global_23232 == 0)
			{
				if (func_4())
					func_3();
			}
			else if (func_2(2, Global_20781, 0))
			{
				Global_20791 = true;
				Global_23232 = 0;
				Global_20813.f_1 = 7;
				func_18();
				func_17(Global_20794, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_20794, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
			}
		}
	
		if (func_1())
			func_3();
	}

	return;
}

BOOL func_1() // Position - 0x163
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

BOOL func_2(int iParam0, int iParam1, int iParam2) // Position - 0x1A6
{
	if (unk_0x875A214D5EBCA509(iParam0, iParam1) || iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1))
	{
		if (unk_0x761778199FE1211C())
			if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2))
				return false;
	
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
			return false;
		else
			return true;
	}

	return false;
}

void func_3() // Position - 0x218
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_4() // Position - 0x224
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x24D
{
	unk_0x81645EE95A114FAE(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
	return;
}

void func_6() // Position - 0x277
{
	int i;

	fLocal_27 = fLocal_25;
	fLocal_28 = fLocal_26;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_27, fLocal_28, &(Global_2139[Global_23454[iLocal_23 /*9*/] /*29*/].f_3), 0);
	fLocal_27 = fLocal_27 + 0.07f;
	func_10(255, 255, 255, 205);

	if (Global_23454[iLocal_23 /*9*/].f_2.f_1 < 10)
		func_7(fLocal_27, fLocal_28, "CELL_506" /*~1~:0~1~*/, Global_23454[iLocal_23 /*9*/].f_2.f_2, Global_23454[iLocal_23 /*9*/].f_2.f_1);
	else
		func_7(fLocal_27, fLocal_28, "CELL_503" /*~1~:~1~*/, Global_23454[iLocal_23 /*9*/].f_2.f_2, Global_23454[iLocal_23 /*9*/].f_2.f_1);

	fLocal_27 = fLocal_27 + 0.07f;
	func_10(255, 255, 255, 205);
	func_7(fLocal_27, fLocal_28, "CELL_505" /*~1~/~1~*/, Global_23454[iLocal_23 /*9*/].f_2.f_3, Global_23454[iLocal_23 /*9*/].f_2.f_4);
	fLocal_27 = fLocal_25;
	func_10(255, 255, 255, 205);
	fLocal_28 = fLocal_28 + 0.02f;

	if (Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_8 == 0)
		func_9();

	unk_0xE05EB1EAE7CCDC59(0f, 0.93f);
	func_8(fLocal_27, fLocal_28, &(Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_28 = fLocal_28 + 0.07f;

	for (i = 1; i <= Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_9; i = i + 1)
	{
		func_10(255, 255, 255, 255);
		fLocal_28 = fLocal_28 + 0.04f;
	
		if (Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_32[i] == -1)
			func_8(fLocal_27, fLocal_28, &Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_10[i /*4*/], 0);
		else
			func_7(fLocal_27, fLocal_28, &Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_10[i /*4*/], Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_27[i], Global_23285[Global_23454[iLocal_23 /*9*/].f_1 /*42*/].f_32[i]);
	}

	return;
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4) // Position - 0x458
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(iParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
	return;
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47B
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
	return;
}

void func_9() // Position - 0x493
{
	unk_0xBFE94E91C83D8794(0.4f, 0.4f);
	unk_0x5A18938160AE52D0(255, 128, 0, 255);
	unk_0xB91BC43E3A58E2C8(1, 0, 78, 255, 255);
	return;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4BD
{
	unk_0xBFE94E91C83D8794(0.3f, 0.3f);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(1, 0, 0, 0, 205);
	unk_0xEA62FB8CA7210CF3(1);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0x5A18938160AE52D0(iParam0, iParam1, iParam2, iParam3);
	return;
}

void func_11() // Position - 0x4FC
{
	if (func_2(2, Global_20782, 0))
	{
		iLocal_23 = uLocal_16[iLocal_22];
		Global_23232 = 1;
		func_12(Global_20794, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, "CELL_285" /*Move*/, "CELL_284" /*Zoom*/, 0);
		func_17(Global_20794, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_20794, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
		Global_20813.f_1 = 8;
		Global_23232 = 1;
	}

	return;
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x57A
{
	unk_0x88F483FBD433696A(iParam0, sParam1);
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
		func_13(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_13(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_13(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_13(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_13(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_13(char* sParam0) // Position - 0x62D
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_14() // Position - 0x63F
{
	if (bLocal_29)
		if (SYSTEM::TIMERA() > 50)
			bLocal_29 = false;

	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_2(2, 181, 0))
			if (iLocal_22 > 0)
				iLocal_22 = iLocal_22 - 1;
	
		if (func_2(2, 180, 0))
		{
			iLocal_22 = iLocal_22 + 1;
		
			if (iLocal_22 == iLocal_21)
				iLocal_22 = 0;
		}
	}

	if (bLocal_29 == false)
	{
		if (func_2(2, Global_20789, 0))
		{
			if (iLocal_22 > 0)
				iLocal_22 = iLocal_22 - 1;
		
			bLocal_29 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_2(2, Global_20790, 0))
		{
			iLocal_22 = iLocal_22 + 1;
		
			if (iLocal_22 == iLocal_21)
				iLocal_22 = 0;
		
			bLocal_29 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_15() // Position - 0x6DC
{
	int num;

	num = 0;
	fLocal_27 = fLocal_25;
	fLocal_28 = fLocal_26;
	iLocal_24 = iLocal_21;

	while (num < iLocal_24)
	{
		func_10(255, 255, 255, 205);
	
		if (num == iLocal_22)
			func_9();
	
		func_8(fLocal_27, fLocal_28, &(Global_2139[Global_23454[uLocal_16[num] /*9*/] /*29*/].f_3), 0);
		fLocal_27 = fLocal_27 + 0.07f;
		func_10(255, 255, 255, 205);
	
		if (Global_23454[uLocal_16[num] /*9*/].f_2.f_1 < 10)
			func_7(fLocal_27, fLocal_28, "CELL_506" /*~1~:0~1~*/, Global_23454[uLocal_16[num] /*9*/].f_2.f_2, Global_23454[uLocal_16[num] /*9*/].f_2.f_1);
		else
			func_7(fLocal_27, fLocal_28, "CELL_503" /*~1~:~1~*/, Global_23454[uLocal_16[num] /*9*/].f_2.f_2, Global_23454[uLocal_16[num] /*9*/].f_2.f_1);
	
		fLocal_27 = fLocal_27 + 0.07f;
		func_10(255, 255, 255, 205);
		func_7(fLocal_27, fLocal_28, "CELL_505" /*~1~/~1~*/, Global_23454[uLocal_16[num] /*9*/].f_2.f_3, Global_23454[uLocal_16[num] /*9*/].f_2.f_4);
		fLocal_27 = fLocal_25;
		func_10(255, 255, 255, 205);
	
		if (num == iLocal_22)
			func_9();
	
		fLocal_28 = fLocal_28 + 0.02f;
		unk_0xE05EB1EAE7CCDC59(0f, 0.93f);
		func_8(fLocal_27, fLocal_28, &Global_23285[Global_23454[uLocal_16[num] /*9*/].f_1 /*42*/], 0);
		fLocal_28 = fLocal_28 + 0.05f;
		num = num + 1;
	}

	return;
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x83F
{
	unk_0x88F483FBD433696A(iParam0, sParam1);
	func_13(sParam2);

	if (!unk_0xD6F9DEE4765092A9(sParam3))
		func_13(sParam3);

	if (!unk_0xD6F9DEE4765092A9(sParam4))
		func_13(sParam4);

	if (!unk_0xD6F9DEE4765092A9(sParam5))
		func_13(sParam5);

	if (!unk_0xD6F9DEE4765092A9(sParam6))
		func_13(sParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_17(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x89A
{
	unk_0x88F483FBD433696A(iParam0, sParam1);
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

void func_18() // Position - 0x8FD
{
	var unk;
	int i;
	int num;
	int num2;

	iLocal_21 = 0;
	unk = 4;

	for (i = 0; i < 4; i = i + 1)
	{
		num = 0;
		num2 = 3;
		Global_23454[num2 /*9*/].f_2 = -1;
		Global_23454[num2 /*9*/].f_2.f_1 = 0;
		Global_23454[num2 /*9*/].f_2.f_2 = 0;
		Global_23454[num2 /*9*/].f_2.f_3 = 0;
		Global_23454[num2 /*9*/].f_2.f_5 = 0;
	
		while (num < 4)
		{
			if (unk[num] == 0)
				if (Global_23454[num /*9*/].f_8 != 0)
					if (func_19(Global_23454[num /*9*/].f_2, Global_23454[num2 /*9*/].f_2))
						num2 = num;
		
			num = num + 1;
		}
	
		uLocal_16[i] = num2;
		unk[num2] = 1;
	
		if (Global_23454[i /*9*/].f_8 != 0)
			iLocal_21 = iLocal_21 + 1;
	}

	func_12(Global_20794, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, 0, 0, 0);
	return;
}

BOOL func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x9E8
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

