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
	var uLocal_16 = 20;
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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	BOOL bLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_56 = 0.82f;
	fLocal_57 = 0.42f;
	fLocal_58 = 0f;
	fLocal_59 = 0f;
	unk_0x51CC1333A10C4E09();
	func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_20758 == 0)
	{
		fLocal_61 = 0.75f;
		fLocal_62 = 0.8f;
	}
	else
	{
		fLocal_61 = 0.65f;
		fLocal_62 = 0.77f;
	}

	Global_9488[Global_20813 /*2811*/][2 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_6;
	Global_9488[Global_20813 /*2811*/][4 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_9;

	for (i = 0; i < 9; i = i + 1)
	{
		if (Global_79248)
		{
			Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 = func_45(1199, -1);
			Global_9488[Global_20813 /*2811*/][2 /*281*/].f_259 = func_45(2030, -1);
			Global_9488[Global_20813 /*2811*/][4 /*281*/].f_259 = func_45(2029, -1);
		}
		else if (unk_0x1B79E937E91F40C3(&(Global_114370.f_14054[Global_20813 /*20*/].f_11), &Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[i /*6*/]))
		{
			Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 = i;
		}
	}

	if (Global_79248)
		Global_114370.f_14054[3 /*20*/].f_10 = func_45(1198, -1);

	Global_9488[Global_20813 /*2811*/][3 /*281*/].f_259 = Global_114370.f_14054[Global_20813 /*20*/].f_10;
	func_44();

	if (Global_79248)
	{
		Global_9488[3 /*2811*/][0 /*281*/] = 190;
		Global_9488[3 /*2811*/][0 /*281*/].f_1 = 190;
		TEXT_LABEL_ASSIGN_STRING(&(Global_9488[3 /*2811*/][0 /*281*/].f_2), "CELL_701" /*Snapmatic*/, 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9488[3 /*2811*/][0 /*281*/].f_280 = 1;
		TEXT_LABEL_ASSIGN_STRING(&Global_9488[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], "CELL_704" /*Quick launch Off*/, 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9488[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], "CELL_703" /*Quick launch On*/, 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9488[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], "CELL_801" /*Sleep Mode*/, 16);
		Global_9488[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9488[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9488[3 /*2811*/][0 /*281*/].f_104[2] = 26;
	
		if (func_45(2092, -1) == 0)
			Global_9488[3 /*2811*/][0 /*281*/].f_259 = 0;
		else
			Global_9488[3 /*2811*/][0 /*281*/].f_259 = 1;
	}

	func_34();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_48)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
			
				bLocal_48 = false;
			}
		}
	
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					func_29();
					func_27();
					break;
			
				case 8:
					if (bLocal_54 || bLocal_55)
					{
						if (bLocal_54)
						{
							bLocal_54 = false;
							SYSTEM::SETTIMERB(0);
							Global_114370.f_14054.f_82 = 1;
							bLocal_55 = true;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							bLocal_55 = false;
							unk_0x428C32CC68809A35(1);
						}
					}
					else
					{
						func_29();
						func_12();
					
						if (bLocal_51)
							func_11();
					
						if (func_10(2, Global_20781, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
								unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
						
							bLocal_51 = false;
							func_9();
							Global_20791 = true;
							func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_34();
						
							if (Global_20813.f_1 > 3)
								Global_20813.f_1 = 7;
						}
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
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

BOOL func_1() // Position - 0x449
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x48C
{
	func_7();

	if (func_4(0))
		func_3();

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());

	if (bLocal_54)
		unk_0x428C32CC68809A35(1);

	if (Global_114370.f_14054.f_83 == 0 || Global_114370.f_14054.f_82 == 0)
		func_3();

	unk_0x98E393364463951A(0);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3() // Position - 0x4EF
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

BOOL func_4(int iParam0) // Position - 0x56C
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x58E
{
	return func_6(iParam0, Global_43922);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x59F
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

void func_7() // Position - 0x780
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9488[Global_20813 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x79F
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_9() // Position - 0x7C8
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20802, 1);

	return;
}

BOOL func_10(int iParam0, int iParam1, int iParam2) // Position - 0x7E9
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

void func_11() // Position - 0x85B
{
	int num;

	iLocal_52 = unk_0x1DD05E817C89C737();
	num = iLocal_52 - uLocal_53;

	if (num % 600 <= 300 && num < 3000)
		unk_0x97A041099E92C69F(0, 100, 100);

	return;
}

void func_12() // Position - 0x890
{
	int num;
	var unk;
	var unk17;
	int num2;

	if (iLocal_41 == 1)
	{
		if (bLocal_50)
		{
			iLocal_52 = unk_0x1DD05E817C89C737();
		
			if (iLocal_52 - uLocal_53 > 1000)
			{
				bLocal_49 = true;
				bLocal_50 = false;
			}
		}
	
		if (unk_0xAE231F549813BBDF(2))
		{
			if (unk_0x875A214D5EBCA509(2, 180))
			{
				iLocal_63 = 1;
				iLocal_64 = 0;
			}
		
			if (unk_0x875A214D5EBCA509(2, 181))
			{
				iLocal_63 = 0;
				iLocal_64 = 1;
			}
		}
	
		if (func_10(2, Global_20789, 0) || func_10(2, Global_20790, 0) || bLocal_49 || iLocal_63 == 1 || iLocal_64 == 1)
		{
			iLocal_63 = 0;
			iLocal_64 = 0;
			bLocal_49 = false;
			bLocal_50 = false;
			SYSTEM::SETTIMERB(0);
			bLocal_48 = true;
			unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
			uLocal_39 = unk_0x6CA3F2B87712B6A4();
		
			while (!unk_0xA6F779AA284EB20E(uLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_45 = uLocal_16[unk_0x5DEF122A58D4F685(uLocal_39)];
		
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x92187CF73A8D1B96(unk_0x4A8C381C258A124D());
				SYSTEM::WAIT(100);
			
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (!unk_0x129DE7ED6456C4CA(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x1B79E937E91F40C3(&Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/], "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x1BC60757AC20ACCF(&Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/], unk_0x4A8C381C258A124D(), 1);
						}
					}
				}
			}
		}
	}

	if (Global_20791 == false)
	{
		if (func_10(2, Global_20782, 0))
		{
			func_24();
			Global_20791 = true;
			unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
			uLocal_39 = unk_0x6CA3F2B87712B6A4();
		
			while (!unk_0xA6F779AA284EB20E(uLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_44 = unk_0x5DEF122A58D4F685(uLocal_39);
		
			if (iLocal_44 < 0)
				iLocal_44 = 0;
		
			Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
		
			if (iLocal_41 == 2)
			{
				num = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
				Global_114370.f_14054[Global_20813 /*20*/].f_6 = Global_9488[Global_20813 /*2811*/][2 /*281*/].f_260[num];
				func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_79248)
				{
					Global_4543259 = Global_9488[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_9488[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543259), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_47(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_19();
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 4)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_9 = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
			
				if (Global_79248)
				{
					Global_4543260 = Global_9488[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_9488[3 /*2811*/][4 /*281*/].f_259, -1, 1);
				
					if (Global_4543260 == 0)
					{
						unk17 = { func_17(unk_0x259BE71D8A81D4FA()) };
						num2 = 0;
						unk_0x97DD063A9C6137F8(0) == 0;
					
						if (unk_0xE582BF3EDDBB1A68(&unk17) && unk_0x97DD063A9C6137F8(0) && Global_4543263 == 0)
						{
							SYSTEM::SETTIMERA(0);
						
							while (!unk_0xE460920F3D75C34D(&unk17, &unk) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
							
								if (SYSTEM::TIMERA() > 2999)
									num2 = 1;
							}
						
							if (num2 == 0)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x882AEFD55B8D51FB("CELL_2000" /*~a~*/);
								unk_0x60D332F23943B34F(&unk);
								unk_0xCFAD3D478C87321A();
								unk_0xE6B753D52F4CA222();
							}
						}
						else
						{
							func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4543260), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_47(Global_20794, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 1)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_11 = { Global_9488[Global_20813 /*2811*/][1 /*281*/].f_144[Global_9488[Global_20813 /*2811*/][1 /*281*/].f_259 /*6*/] };
			
				if (Global_79248)
					func_20(1199, Global_9488[3 /*2811*/][1 /*281*/].f_259, -1, 1);
			
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(18), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 3)
			{
				Global_114370.f_14054[Global_20813 /*20*/].f_10 = Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259;
			
				if (Global_79248)
					func_20(1198, Global_114370.f_14054[3 /*20*/].f_10, -1, 1);
			
				if (Global_114370.f_14054[Global_20813 /*20*/].f_10 == 1)
				{
					bLocal_51 = true;
					uLocal_53 = unk_0x1DD05E817C89C737();
				}
				else
				{
					bLocal_51 = false;
				}
			}
		
			if (iLocal_41 == 0)
			{
				if (Global_79248 == true)
				{
					Global_9488[3 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(19), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
					func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
					iLocal_43 = iLocal_44;
					func_47(Global_20794, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_9488[3 /*2811*/][iLocal_41 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_9488[0 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					Global_9488[1 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					Global_9488[2 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
				
					if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43922 == 15)
						{
							if (Global_114370.f_14054.f_82 == 0)
							{
								unk_0x428C32CC68809A35(1);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_61 == fLocal_62;
								bLocal_54 = true;
							}
							else
							{
								func_47(Global_20794, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 25);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
							
								if (Global_114370.f_14054.f_83 == 0)
								{
									unk_0x428C32CC68809A35(1);
									_DISPLAY_HELP_TEXT("CELL_7051" /*When Sleep Mode is active, the Sleep symbol will be displayed near the Radar.*/, -1);
									Global_114370.f_14054.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_47(Global_20794, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x8744D2E3FC95740E(&Global_8683, 25);
						unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
					}
				}
			}
		
			func_13(Global_20794, "SET_HEADER", &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x1148
{
	unk_0x88F483FBD433696A(iParam0, sParam1);
	func_14(sParam2);

	if (!unk_0xD6F9DEE4765092A9(sParam3))
		func_14(sParam3);

	if (!unk_0xD6F9DEE4765092A9(sParam4))
		func_14(sParam4);

	if (!unk_0xD6F9DEE4765092A9(sParam5))
		func_14(sParam5);

	if (!unk_0xD6F9DEE4765092A9(sParam6))
		func_14(sParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_14(char* sParam0) // Position - 0x11A3
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x11B5
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

void func_16(char* sParam0) // Position - 0x11CC
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
	return;
}

struct<13> func_17(var uParam0) // Position - 0x11E2
{
	var unk;

	unk_0x464E131FD68B953F(uParam0, &unk, 13);
	return unk;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x11F9
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
		func_14(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_14(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_14(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_14(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_14(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_19() // Position - 0x12AC
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20813 == CHAR_MICHAEL)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
			
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
			
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
			
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
			
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
			
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
			
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_FRANKLIN)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
			
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
			
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
			
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
			
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
			
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
			
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_TREVOR)
		{
			switch (Global_114370.f_14054[Global_20813 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
			
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
			
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
			
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
			
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
			
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
			
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20813 == CHAR_MULTIPLAYER)
		{
			switch (Global_4543259)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
			
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
			
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
			
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
			
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
			
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
			
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1523
{
	int num;

	if (iParam0 != 14626)
	{
		num = func_21(iParam0, iParam2);
	
		if (num != 0)
			unk_0x1164A75E490C27B6(num, iParam1, iParam3);
	}

	return;
}

int func_21(int iParam0, int iParam1) // Position - 0x1551
{
	return unk_0xD69CE161FE614531(0, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x1566
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_23();
	
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

int func_23() // Position - 0x159A
{
	return Global_1574925;
}

void func_24() // Position - 0x15A6
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20802, 1);
		func_25();
	}

	return;
}

void func_25() // Position - 0x15CB
{
	if (func_26())
		unk_0xBF3F90E670404C44(5);

	return;
}

BOOL func_26() // Position - 0x15DF
{
	var unk;
	int num;
	BOOL flag;

	if (Global_79248)
		return false;

	flag = 0;
	unk = unk_0xBF03D0685ADC793B();
	num = unk_0xBCF87EE3DC296C2A(unk);

	if (num == 4)
		flag = 1;

	if (Global_4543261 || flag)
		return true;

	return true;
}

void func_27() // Position - 0x1626
{
	if (Global_20791 == false)
	{
		if (func_10(2, Global_20782, 0))
		{
			func_24();
			Global_20791 = true;
			unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
			uLocal_39 = unk_0x6CA3F2B87712B6A4();
		
			while (!unk_0xA6F779AA284EB20E(uLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_42 = unk_0x5DEF122A58D4F685(uLocal_39);
			iLocal_41 = uLocal_16[iLocal_42];
		
			switch (iLocal_41)
			{
				case 0:
					if (Global_79248 == false)
					{
						if (Global_43922 == 15)
						{
							if (Global_114370.f_14054.f_82 == 0)
							{
								unk_0x428C32CC68809A35(1);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_61 == fLocal_62;
								bLocal_54 = true;
							}
						}
					}
					break;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			}
		
			if (Global_20813.f_1 > 3)
				Global_20813.f_1 = 8;
		
			func_28();
			bLocal_50 = true;
			uLocal_53 = unk_0x1DD05E817C89C737();
		}
	}

	return;
}

void func_28() // Position - 0x16F8
{
	var unk;
	int value;
	var unk21;
	int num;
	int num2;

	func_47(Global_20794, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_37 = 0;
	unk = 19;
	value = 0;

	if (Global_79248)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_9488[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_CREWEMB" /*Crew Emblem*/, 16);
		unk21 = { func_17(unk_0x259BE71D8A81D4FA()) };
	
		if (!unk_0xE582BF3EDDBB1A68(&unk21))
			TEXT_LABEL_ASSIGN_STRING(&Global_9488[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_840" /*Default*/, 16);
	}

	while (value < 19)
	{
		num = 0;
		num2 = 18;
		Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[num2] = 5000;
	
		while (num < 19)
		{
			if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[num] < Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_84[num2])
					{
						num2 = num;
						func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_104[num2]), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[value] = num2;
		unk[num2] = 1;
	
		if (unk_0x1B79E937E91F40C3(&Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/]))
		{
			iLocal_46 = value;
		
			if (iLocal_46 < 0)
				iLocal_46 = 0;
		
			if (iLocal_41 == 1 || iLocal_41 == 4 || iLocal_41 == 2)
			{
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_43 = value;
			}
		
			if (iLocal_41 == 0 && Global_79248 == true)
			{
				func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_43 = value;
			}
		}
	
		if (Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_124[value] == 1)
			iLocal_37 = iLocal_37 + 1;
	
		value = value + 1;
	}

	func_47(Global_20794, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20794, "SET_HEADER", &Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_7[Global_9488[Global_20813 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20801)
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8683, 17);
	return;
}

void func_29() // Position - 0x1A3D
{
	if (bLocal_60)
		if (SYSTEM::TIMERA() > 50)
			bLocal_60 = false;

	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_38 > 0)
				iLocal_38 = iLocal_38 - 1;
		
			func_32();
		}
	
		if (func_10(2, 180, 0))
		{
			iLocal_38 = iLocal_38 + 1;
		
			if (iLocal_38 == iLocal_37)
				iLocal_38 = 0;
		
			func_30();
		}
	}

	if (bLocal_60 == false)
	{
		if (func_10(2, Global_20789, 0))
		{
			if (iLocal_38 > 0)
				iLocal_38 = iLocal_38 - 1;
		
			func_32();
			bLocal_60 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_10(2, Global_20790, 0))
		{
			iLocal_38 = iLocal_38 + 1;
		
			if (iLocal_38 == iLocal_37)
				iLocal_38 = 0;
		
			func_30();
			bLocal_60 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_30() // Position - 0x1AEA
{
	func_47(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
	func_31();
	return;
}

void func_31() // Position - 0x1B27
{
	if (func_26())
		if (Global_21030 == 0)
			unk_0xBF3F90E670404C44(2);
		else
			unk_0xBF3F90E670404C44(1);

	return;
}

void func_32() // Position - 0x1B4A
{
	func_47(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
	func_33();
	return;
}

void func_33() // Position - 0x1B87
{
	if (func_26())
		if (Global_21030 == 0)
			unk_0xBF3F90E670404C44(1);
		else
			unk_0xBF3F90E670404C44(2);

	return;
}

void func_34() // Position - 0x1BAA
{
	var unk;
	int i;
	int num;
	int num2;

	iLocal_37 = 0;
	unk = 20;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9488[Global_20813 /*2811*/][num2 /*281*/] = 5000;
	
		if (unk_0x38640D2193CB547F(2) == 0)
			Global_9488[Global_20813 /*2811*/][3 /*281*/].f_280 = 0;
		else
			Global_9488[Global_20813 /*2811*/][3 /*281*/].f_280 = 1;
	
		while (num < 9)
		{
			if (Global_9488[Global_20813 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9488[Global_20813 /*2811*/][num /*281*/] < Global_9488[Global_20813 /*2811*/][num2 /*281*/])
					{
						if (Global_79248)
						{
							if (num == 0)
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_35() == 2)
						{
							if (num == 4 || num == 5)
							{
							}
							else
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (num == 5)
						{
						}
						else
						{
							num2 = num;
							func_43(num, num2);
							func_18(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9488[Global_20813 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[i] = num2;
		unk[num2] = 1;
	
		if (Global_9488[Global_20813 /*2811*/][i /*281*/].f_280 == 1)
			iLocal_37 = iLocal_37 + 1;
	}

	func_47(Global_20794, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_42), -1082130432, -1082130432, -1082130432);
	func_13(Global_20794, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_20801)
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8683, 17);
	return;
}

int func_35() // Position - 0x1E76
{
	if (Global_79248)
		Global_20813 = CHAR_MULTIPLAYER;
	else
		Global_20813 = _GET_CURRENT_PLAYER_CHARACTER();

	if (Global_20813 > CHAR_MULTIPLAYER)
		Global_20813 = CHAR_MULTIPLAYER;

	return Global_114370.f_14054[Global_20813 /*20*/].f_7;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1EAC
{
	func_37();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_37() // Position - 0x1EC5
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_39(character) && !func_38(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_39(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_38(int iParam0) // Position - 0x1FC2
{
	return Global_43922 == iParam0;
}

BOOL func_39(eCharacter echParam0) // Position - 0x1FD0
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x1FDC
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2019
{
	if (func_39(character))
		return func_42(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_42(eCharacter echParam0) // Position - 0x203E
{
	return Global_2139[echParam0 /*29*/];
}

void func_43(int iParam0, int iParam1) // Position - 0x204D
{
	switch (iParam0)
	{
		case 0:
			if (Global_79248)
				iLocal_47 = 19;
			else if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				iLocal_47 = 26;
			else
				iLocal_47 = 25;
			break;
	
		case 3:
			if (Global_9488[Global_20813 /*2811*/][3 /*281*/].f_259 == 1)
				iLocal_47 = 20;
			else
				iLocal_47 = 21;
			break;
	
		default:
			iLocal_47 = Global_9488[Global_20813 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}

	return;
}

void func_44() // Position - 0x20CF
{
	if (Global_43922 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9488[Global_20813 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

int func_45(int iParam0, int iParam1) // Position - 0x20F6
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_21(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2125
{
	if (func_38(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[0 /*29*/])
				Global_20813 = CHAR_MICHAEL;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[1 /*29*/])
				Global_20813 = CHAR_FRANKLIN;
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_114370.f_28053[2 /*29*/])
				Global_20813 = CHAR_TREVOR;
			else
				Global_20813 = CHAR_MICHAEL;
	}
	else
	{
		Global_20813 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20813 == _CHAR_NULL)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_79248)
			Global_20813 = CHAR_MULTIPLAYER;
	
		if (Global_20813 > CHAR_MULTIPLAYER)
			Global_20813 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_47(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21C7
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

