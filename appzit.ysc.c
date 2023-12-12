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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
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
	iLocal_49 = -99;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_50, "TRACKID", 32);
	unk_0x51CC1333A10C4E09();
	unk_0xF2CB0224D3BE0B42(&uLocal_50, 1);

	while (!unk_0xDCB78A15E5F495DC(1))
	{
		SYSTEM::WAIT(0);
	}

	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_59)
		{
			if (iLocal_61 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_61 = iLocal_61 + 1;
					unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(23);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(1);
					func_10("CELL_4005");
					unk_0x330108B080A2132F(iLocal_61);
					unk_0xE6B753D52F4CA222();
					func_9(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xE6B753D52F4CA222();
				func_9(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_60 = 1;
				bLocal_59 = false;
			}
		}
	
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					func_8();
				
					if (bLocal_58 == false)
						func_6();
					break;
			
				case 8:
					if (func_5(2, Global_20781, 0))
					{
						func_4();
						bLocal_59 = false;
						iLocal_60 = 0;
						Global_20791 = true;
						func_14();
					
						if (Global_20813.f_1 > 3)
							Global_20813.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
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

BOOL func_1() // Position - 0x1C6
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x209
{
	bLocal_59 = false;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_3() // Position - 0x218
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x241
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20802, 1);

	return;
}

BOOL func_5(int iParam0, int iParam1, int iParam2) // Position - 0x262
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

void func_6() // Position - 0x2D4
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_20801)
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		bLocal_58 = true;
	}

	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x324
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
		func_10(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_10(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_10(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_10(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_10(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_8() // Position - 0x3D7
{
	if (Global_20791 == false)
	{
		if (func_5(2, Global_20782, 0))
		{
			if (bLocal_58 && iLocal_60 == 0 && bLocal_59 == false)
			{
				iLocal_61 = 0;
				unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(1);
				func_10("CELL_4005");
				unk_0x330108B080A2132F(iLocal_61);
				unk_0xE6B753D52F4CA222();
				func_9(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
			
				if (Global_20801)
				{
					func_7(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					func_7(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			
				func_7(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8683, 17);
				bLocal_59 = true;
				SYSTEM::SETTIMERA(0);
			}
		}
	}

	return;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4ED
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

void func_10(char* sParam0) // Position - 0x550
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_11() // Position - 0x562
{
	var unk;

	func_13(134, 1);
	unk = unk_0xE1799BB6E4C1CDFB();

	switch (func_12(unk))
	{
		case 1:
			func_13(82, 1);
			break;
	
		case 2:
			func_13(81, 1);
			break;
	
		default:
			func_13(83, 1);
			break;
	}

	return;
}

int func_12(int iParam0) // Position - 0x5AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_13(int iParam0, int iParam1) // Position - 0x638
{
	int num;

	if (iParam1 < 1)
		return;

	if (Global_59780[iParam0 /*7*/].f_2)
		return;

	if (unk_0x76CD105BCAC6EB9F())
		return;

	if (Global_59780[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59780[iParam0 /*7*/].f_1, &num, -1);
		num = num + iParam1;
		unk_0x1164A75E490C27B6(Global_59780[iParam0 /*7*/].f_1, num, 1);
	}

	return;
}

void func_14() // Position - 0x695
{
	unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(23);
	unk_0x330108B080A2132F(0);
	unk_0x330108B080A2132F(0);
	func_10("CELL_4001");
	func_10(&uLocal_18);
	func_10(&(uLocal_18.f_16));
	func_10("CELL_4002");
	unk_0x330108B080A2132F(uLocal_18.f_24);
	func_10("CELL_4003");
	func_10(&(uLocal_18.f_25));
	func_10("CELL_4004");
	unk_0xE6B753D52F4CA222();
	func_9(Global_20794, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);

	if (Global_20801)
	{
		if (bLocal_58)
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
	
		func_7(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		if (bLocal_58)
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		else
			func_7(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		func_7(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_7(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8683, 17);
	return;
}

void func_15() // Position - 0x7E5
{
	iLocal_49 = unk_0x6E5F2B4C6A398419();
	TEXT_LABEL_ASSIGN_STRING(&uLocal_18, "", 64);
	TEXT_LABEL_APPEND_INT(&uLocal_18, iLocal_49, 64);
	TEXT_LABEL_APPEND_STRING(&uLocal_18, "S", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_16), "", 32);
	TEXT_LABEL_APPEND_INT(&(uLocal_18.f_16), iLocal_49, 32);
	TEXT_LABEL_APPEND_STRING(&(uLocal_18.f_16), "A", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_25), unk_0xA9CB3A11303C5801(), 24);

	if (!unk_0x6BA487C862DB8DDF(&uLocal_18))
		TEXT_LABEL_ASSIGN_STRING(&uLocal_18, "CELL_195" /*Unknown*/, 64);

	if (!unk_0x6BA487C862DB8DDF(&(uLocal_18.f_16)))
	{
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_16), "CELL_195" /*Unknown*/, 32);
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_18.f_25), "CELL_195" /*Unknown*/, 24);
	}

	return;
}

