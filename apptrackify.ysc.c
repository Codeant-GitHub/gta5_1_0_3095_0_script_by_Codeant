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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0x51CC1333A10C4E09();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
				
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_27) * 30 && SYSTEM::TIMERB() > 150)
					{
						unk_0x88F483FBD433696A(Global_20794, "APP_FUNCTION");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
						SYSTEM::SETTIMERB(0);
					}
				
					if (SYSTEM::TIMERB() > 2000)
					{
						unk_0x88F483FBD433696A(Global_20794, "APP_FUNCTION");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
						SYSTEM::SETTIMERB(0);
					}
					break;
			
				case 8:
					if (func_6(2, Global_20781, 0))
					{
						func_5();
						Global_20791 = true;
						func_10();
						func_7();
					
						if (Global_20813.f_1 > 3)
							Global_20813.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_4())
				func_2();
		}
		else
		{
			Global_20815 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x144
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x187
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x8744D2E3FC95740E(&Global_8684, 22);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3(int iParam0, int iParam1) // Position - 0x1BA
{
	Global_4543236[iParam0] = iParam1;
	return;
}

BOOL func_4() // Position - 0x1CC
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x1F5
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20802, 1);

	return;
}

BOOL func_6(int iParam0, int iParam1, int iParam2) // Position - 0x216
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

void func_7() // Position - 0x288
{
	if (Global_20801)
	{
		func_8(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		func_8(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_8(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8683, 17);
	return;
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x31A
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
		func_9(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_9(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_9(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_9(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_9(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_9(char* sParam0) // Position - 0x3CD
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_10() // Position - 0x3DF
{
	int i;
	BOOL flag;

	if (func_18() == 0)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			uLocal_18 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			fLocal_21 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
			func_17();
			func_16();
			func_15();
			fLocal_22 = 360f - fLocal_21;
			fLocal_25 = fLocal_25 - fLocal_22;
		
			if (fLocal_25 < 0f)
				fLocal_25 = fLocal_25 + 360f;
		
			if (iLocal_29 == 0)
			{
				unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
			
				if (IS_BIT_SET(Global_8684, 30))
				{
					unk_0x330108B080A2132F(-99);
					unk_0x330108B080A2132F(0);
				}
				else
				{
					unk_0x330108B080A2132F(SYSTEM::FLOOR(fLocal_25));
					unk_0x330108B080A2132F(SYSTEM::FLOOR(fLocal_26));
				}
			
				unk_0x330108B080A2132F(100);
			
				if (IS_BIT_SET(Global_8684, 22))
					unk_0x330108B080A2132F(1);
				else
					unk_0x330108B080A2132F(0);
			
				if (IS_BIT_SET(Global_8684, 29))
					unk_0x557F1E2300EF1A3E(0);
				else
					unk_0x557F1E2300EF1A3E(1);
			
				if (IS_BIT_SET(Global_8685, 1))
					unk_0x74BF156C860580D4(fLocal_28);
			
				unk_0xE6B753D52F4CA222();
			}
		
			fLocal_21 == fLocal_21;
			func_14(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		uLocal_18 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		fLocal_21 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
		Global_4543258 > 21;
	
		for (i = 0; i < Global_4543258; i = i + 1)
		{
			func_13(i);
			func_12(i);
			func_11(i);
			fLocal_22 = 360f - fLocal_21;
			fLocal_25 = fLocal_25 - fLocal_22;
		
			if (fLocal_25 < 0f)
				fLocal_25 = fLocal_25 + 360f;
		
			if (iLocal_29 == 0)
			{
				unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(i);
				flag = false;
			
				switch (i)
				{
					case 0:
						if (IS_BIT_SET(Global_4542983, 5))
							flag = true;
						break;
				
					case 1:
						if (IS_BIT_SET(Global_4542983, 6))
							flag = true;
						break;
				
					case 2:
						if (IS_BIT_SET(Global_4542983, 7))
							flag = true;
						break;
				
					case 3:
						if (IS_BIT_SET(Global_4542983, 8))
							flag = true;
						break;
				}
			
				if (flag)
				{
					unk_0x330108B080A2132F(-99);
					unk_0x330108B080A2132F(0);
				}
				else
				{
					unk_0x330108B080A2132F(SYSTEM::FLOOR(fLocal_25));
					unk_0x330108B080A2132F(SYSTEM::FLOOR(fLocal_26));
				}
			
				unk_0x330108B080A2132F(100);
			
				if (IS_BIT_SET(Global_8684, 22))
					unk_0x557F1E2300EF1A3E(1);
				else
					unk_0x557F1E2300EF1A3E(1);
			
				if (IS_BIT_SET(Global_8684, 29))
					unk_0x557F1E2300EF1A3E(0);
				else
					unk_0x557F1E2300EF1A3E(1);
			
				unk_0x74BF156C860580D4(fLocal_28);
				unk_0x330108B080A2132F(Global_4543236[i]);
				unk_0xE6B753D52F4CA222();
			}
		
			fLocal_21 == fLocal_21;
			func_14(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

float func_11(int iParam0) // Position - 0x68E
{
	fLocal_23 = Global_4543172[iParam0 /*3*/] - uLocal_18;
	fLocal_24 = SYSTEM::COS((3.14159f / 180f) * uLocal_18) * (Global_4543172[iParam0 /*3*/].f_1 - uLocal_18.f_1);
	fLocal_25 = unk_0x4964D7A2BFD2F9A3(fLocal_23, fLocal_24);

	if (fLocal_25 < 0f)
		fLocal_25 = fLocal_25 + 360f;

	return fLocal_25;
}

float func_12(int iParam0) // Position - 0x6E4
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_4543172[iParam0 /*3*/], uLocal_18));
	fLocal_28 = Global_4543172[iParam0 /*3*/].f_2 - uLocal_18.f_2;
	return fLocal_27;
}

float func_13(int iParam0) // Position - 0x717
{
	fLocal_26 = SYSTEM::SQRT(((Global_4543172[iParam0 /*3*/] - uLocal_18) * (Global_4543172[iParam0 /*3*/] - uLocal_18)) + ((Global_4543172[iParam0 /*3*/].f_1 - uLocal_18.f_1) * (Global_4543172[iParam0 /*3*/].f_1 - uLocal_18.f_1)));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x75E
{
	unk_0x88F483FBD433696A(iParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam3));

	if (iParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam6));

	unk_0xE6B753D52F4CA222();
	return;
}

float func_15() // Position - 0x7C1
{
	fLocal_23 = Global_23272 - uLocal_18;
	fLocal_24 = SYSTEM::COS((3.14159f / 180f) * uLocal_18) * (Global_23272.f_1 - uLocal_18.f_1);
	fLocal_25 = unk_0x4964D7A2BFD2F9A3(fLocal_23, fLocal_24);

	if (fLocal_25 < 0f)
		fLocal_25 = fLocal_25 + 360f;

	return fLocal_25;
}

float func_16() // Position - 0x80D
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_23272, uLocal_18));
	fLocal_28 = Global_23272.f_2 - uLocal_18.f_2;
	return fLocal_27;
}

float func_17() // Position - 0x836
{
	fLocal_26 = SYSTEM::SQRT(((Global_23272 - uLocal_18) * (Global_23272 - uLocal_18)) + ((Global_23272.f_1 - uLocal_18.f_1) * (Global_23272.f_1 - uLocal_18.f_1)));
	return fLocal_26;
}

int func_18() // Position - 0x869
{
	if (Global_79248 == true)
		return 1;

	return 0;
}

