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
	int iLocal_16 = 0;
	char* sLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	eCharacter echLocal_53 = CHAR_MICHAEL;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	char* sLocal_67 = 0;
	float fLocal_68 = 0f;
	BOOL bLocal_69 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_58 = -1;
	iLocal_59 = -1;
	fLocal_68 = 0f;
	bLocal_69 = true;

	if (Global_79248)
		unk_0xBBC29EBE6E1A48FA();

	unk_0x51CC1333A10C4E09();
	echLocal_53 = _GET_CURRENT_PLAYER_CHARACTER();
	unk_0xF2CB0224D3BE0B42("email", 1);

	while (!unk_0xDCB78A15E5F495DC(1))
	{
		SYSTEM::WAIT(0);
	}

	Global_23199 = false;
	Global_23200 = false;
	Global_20813.f_1 = 8;
	Global_23200 = true;
	Global_45131 = 1;

	if (Global_20795)
	{
		func_78(false);
		func_77(true);
		func_75(false);
	}

	SYSTEM::SETTIMERB(0);
	uLocal_45 = { Global_20766[Global_20758 /*3*/] };
	fLocal_48 = { uLocal_45 };
	fLocal_48 = fLocal_48 - 10f;
	fLocal_48.f_1 = fLocal_48.f_1 + 20f;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20813.f_1 != 9)
		{
			if (Global_23200 && !Global_23199)
				func_73();
			else if (Global_23199)
				func_68();
		
			if (!bLocal_54)
			{
				bLocal_54 = true;
			}
			else if (Global_20795)
			{
				if (!bLocal_55)
				{
					bLocal_55 = true;
					func_66(Global_20794, echLocal_53);
					func_65(Global_20794, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_20794, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_45132)
					{
						Global_45132 = false;
						bLocal_56 = true;
					}
				
					if (bLocal_56)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
					
						if (iLocal_58 == -1)
						{
							if (bLocal_69)
							{
								bLocal_69 = false;
								fLocal_68 = 0f;
							}
						
							func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							num = func_66(Global_20794, echLocal_53);
							func_65(Global_20794, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							bLocal_57 = false;
						
							if (num > 0)
								func_78(true);
							else
								func_78(false);
						
							func_77(true);
							func_75(false);
							func_64(Global_20794, "DISPLAY_VIEW", 8f, fLocal_68, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_64(Global_20794, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_77(true);
							func_63();
						
							if (iLocal_59 == -1)
							{
								func_61(echLocal_53, iLocal_58);
								func_56(Global_20794, echLocal_53, iLocal_58);
								Global_23226 = false;
								bLocal_66 = func_54(echLocal_53, iLocal_58);
							
								if (bLocal_66)
								{
									sLocal_67 = func_51(echLocal_53, iLocal_58);
								
									if (!func_50(37))
									{
										switch (func_48("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/))
										{
											case 2:
												func_45("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_44(37);
												break;
										}
									}
									else if (unk_0x761778199FE1211C())
									{
										if (!IS_BIT_SET(Global_4542983, 17))
										{
											unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 17);
											_DISPLAY_HELP_TEXT("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/, -1);
										}
									}
								
									func_75(true);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/))
										{
											case 2:
												func_45("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/, 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_44(38);
												break;
										}
									}
								
									func_75(false);
								}
							
								func_64(Global_20794, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20794, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_20794, echLocal_53, iLocal_58);
								func_64(Global_20794, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
					
						bLocal_56 = false;
					}
					else
					{
						func_17();
					}
				}
			}
		
			if (!(echLocal_53 == _GET_CURRENT_PLAYER_CHARACTER()))
			{
				Global_45131 = 0;
				func_4();
			}
		}
	
		if (func_3())
		{
			Global_23199 = false;
			Global_23200 = false;
			Global_45131 = 0;
			func_1(0);
			unk_0xBBC29EBE6E1A48FA();
		}
	}

	return;
}

void func_1(int iParam0) // Position - 0x48F
{
	if (func_2())
		if (iParam0 == 1)
			unk_0xF3D5C578ED6C7528(1);
		else if (Global_20813.f_1 > 3)
			unk_0xF3D5C578ED6C7528(0);

	return;
}

BOOL func_2() // Position - 0x4BA
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

BOOL func_3() // Position - 0x501
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x544
{
	if (Global_54440 != -1)
	{
		unk_0x633E3833FB96BCCB(func_16(Global_54440));
		Global_54440 = -1;
	}

	Global_45131 = 0;

	if (Global_20813.f_1 > 4)
	{
		Global_20813.f_1 = 6;
		func_5();
	}

	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_5() // Position - 0x57D
{
	var unk;

	if (Global_20796 == 1)
		return;

	if (Global_20813.f_1 < 4)
		return;

	while (!unk_0xA0C7B98BCF1EEF9E(Global_20794))
	{
		if (Global_79248)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20813.f_1)
	{
		case 6:
			func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_9288);
		
			if (Global_9288 == 1)
			{
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
		
			if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21027 == 0)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == true)
					if (Global_20801)
						func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20801)
					func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 17);
			}
		
			if (Global_79248)
			{
				func_11();
				unk_0x8744D2E3FC95740E(&Global_8685, 9);
				func_64(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20812 == 1)
			{
				func_10();
				func_64(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22179)
				{
					unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON" /*~a~*/);
					unk_0x60D332F23943B34F(&Global_22181);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300" /*CHAR_DEFAULT*/);
					func_9("CELL_217" /*INCOMING CALL*/);
					func_9("CELL_217" /*INCOMING CALL*/);
					unk_0xE6B753D52F4CA222();
				}
				else if (func_8(Global_7998, Global_20813) == 0)
				{
					func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
			
				func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_64(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
			
				if (Global_22179)
				{
					unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON" /*~a~*/);
					unk_0x60D332F23943B34F(&Global_22181);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300" /*CHAR_DEFAULT*/);
					func_9("CELL_219" /*CONNECTED*/);
					func_9("CELL_219" /*CONNECTED*/);
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_22424)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_8(Global_7998, Global_20813) == 0)
					{
						func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_64(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &unk, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
			
				func_64(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_6();
			break;
	
		default:
			break;
	}

	return;
}

void func_6() // Position - 0xB35
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20794))
	{
		func_7();
	
		if (Global_20812 == 1)
		{
			if (Global_20801)
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_13(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22213)
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8683, 20))
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20801)
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		}
		else
		{
			func_13(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_7() // Position - 0xCB3
{
	if (Global_79248)
	{
		func_13(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8683, 17);
	}

	return;
}

int func_8(eCharacter echParam0, eCharacter echParam1) // Position - 0xCE3
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_24[echParam1];
}

void func_9(char* sParam0) // Position - 0xD0D
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_10() // Position - 0xD1F
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

void func_11() // Position - 0xF96
{
	if (Global_79248)
	{
		if (func_12() == 0)
			return;
	
		func_13(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 17);
	}

	return;
}

int func_12() // Position - 0xFD1
{
	return 0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0xFDA
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
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

void func_14(int iParam0) // Position - 0x108D
{
	int i;
	int num;
	int num2;
	int j;
	int value;
	int k;
	int value2;
	int num3;
	int num4;
	int value3;

	Global_23234 = 0;
	Global_9288 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9252[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_15(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == 0)
						{
							Global_9216[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									num2 = 42;
									Global_21029 = 1;
								}
								else
								{
									num2 = 255;
									Global_21029 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num2);
								unk_0xE6B753D52F4CA222();
							}
						
							if (Global_2695946)
								if (num == 14)
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
						
							Global_9252[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8690[num /*15*/].f_11)
				{
					if (i == Global_8690[num /*15*/].f_4)
					{
						if (Global_9252[i] == 0)
						{
							Global_9216[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114370.f_14144[j /*104*/].f_24 != 0)
										if (Global_114370.f_14144[j /*104*/].f_28 == 0)
											if (Global_114370.f_14144[j /*104*/].f_99[Global_20813] == 1)
												Global_23234 = Global_23234 + 1;
								}
							
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79248)
								{
									value = 0;
									value = Global_4541717;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541718[k /*104*/].f_24 != 0)
											if (Global_4541718[k /*104*/].f_28 == 0)
												if (Global_4541718[k /*104*/].f_99[Global_20813] == 1)
													value = value + 1;
									}
								
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case CHAR_MICHAEL:
											value2 = Global_45133;
											break;
									
										case CHAR_FRANKLIN:
											value2 = Global_45134;
											break;
									
										case CHAR_TREVOR:
											value2 = Global_45135;
											break;
									
										default:
											break;
									}
								
									func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(Global_8689);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8684, 6))
									num3 = 42;
								else
									num3 = 255;
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num3);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8684, 3))
								{
									num4 = 42;
									Global_21029 = 1;
								}
								else
								{
									num4 = 255;
									Global_21029 = 0;
								}
							
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num4);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 8)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (num == 23 && unk_0x1B79E937E91F40C3(&Global_8690[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8684, 6))
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8690[num /*15*/].f_10 == 57 && num == 23)
							{
								value3 = 0;
								value3 = Global_1881898.f_1;
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9252[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_15(int iParam0) // Position - 0x1619
{
	return Global_43922 == iParam0;
}

char* func_16(int iParam0) // Position - 0x1627
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
	
		case 1:
			return "Epsilon_Cars";
	
		case 2:
			return "Epsilon_Cars";
	
		case 3:
			return "Epsilon_Cars";
	
		case 4:
			return "Epsilon_Cars";
	
		case 5:
			return "Epsilon_Cars";
	
		case 6:
			return "Epsilon_Cars";
	
		case 12:
			return "Assassinations";
	
		case 13:
			return "Assassinations";
	
		case 14:
			return "Assassinations";
	
		case 15:
			return "Assassinations";
	
		case 64:
			return "BSPBadHacker";
	
		case 65:
			return "BPDGoodHacker";
	
		case 66:
			return "BPSMedHacker";
	
		case 75:
			return "email_quarry_bail_bond";
	
		case 76:
			return "email_abandonedfarm_bail_bond";
	
		case 77:
			return "email_mountain_bail_bond";
	
		case 78:
			return "email_hobocamp_bail_bond";
	
		case 80:
			return "email_quarry_bail_bond";
	
		case 81:
			return "email_abandonedfarm_bail_bond";
	
		case 82:
			return "email_mountain_bail_bond";
	
		case 83:
			return "email_hobocamp_bail_bond";
	
		case 205:
			return "hush_foxymama21";
	
		case 209:
			return "hush_alterego";
	
		case 212:
			return "hush_michael";
	
		case 238:
			return "hush_trevor";
	
		default:
		
	}

	return "NULL";
}

void func_17() // Position - 0x1783
{
	BOOL flag;

	if (Global_23226)
	{
		iLocal_58 = 0;
		fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
	
		if (func_39(echLocal_53) == 0)
			iLocal_58 = -1;
	
		if (!(iLocal_58 == -1))
		{
			Global_20813.f_1 = 8;
			bLocal_56 = true;
			SYSTEM::SETTIMERB(0);
			func_37();
		}
	
		return;
	}

	if (func_36())
		return;

	if (Global_23199)
		return;

	if (!bLocal_62)
	{
		if (unk_0x875A214D5EBCA509(2, 172) || unk_0x875A214D5EBCA509(2, 181))
		{
			bLocal_62 = true;
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(1);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
			SYSTEM::SETTIMERA(0);
			bLocal_69 = true;
		}
	}
	else if (unk_0x6D05C5731A838CB3(2, 172) || unk_0x6D05C5731A838CB3(2, 181))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_58 != -1)
		{
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(1);
			unk_0xE6B753D52F4CA222();
			SYSTEM::SETTIMERA(0);
			bLocal_69 = true;
		}
	}
	else
	{
		bLocal_62 = false;
	}

	if (!bLocal_63)
	{
		if (unk_0x875A214D5EBCA509(2, 173) || unk_0x875A214D5EBCA509(2, 180))
		{
			bLocal_63 = true;
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(3);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
			SYSTEM::SETTIMERB(0);
			bLocal_69 = true;
		}
	}
	else if (unk_0x6D05C5731A838CB3(2, 173) || unk_0x6D05C5731A838CB3(2, 180))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_58 != -1)
		{
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(3);
			unk_0xE6B753D52F4CA222();
			SYSTEM::SETTIMERB(0);
			bLocal_69 = true;
		}
	}
	else
	{
		bLocal_63 = false;
	}

	if (!bLocal_64)
	{
		if (unk_0x6D05C5731A838CB3(2, 174))
		{
			bLocal_64 = true;
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(4);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 174))
	{
		bLocal_64 = false;
	}

	if (!bLocal_65)
	{
		if (unk_0x6D05C5731A838CB3(2, 175))
		{
			bLocal_65 = true;
			unk_0x88F483FBD433696A(Global_20794, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(2);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20802, 1);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 175))
	{
		bLocal_65 = false;
	}

	if (!bLocal_61)
	{
		if (unk_0x6D05C5731A838CB3(2, 176) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_58 == -1)
			{
				unk_0x88F483FBD433696A(Global_20794, "GET_CURRENT_SELECTION");
				uLocal_51 = unk_0x6CA3F2B87712B6A4();
			
				while (!unk_0xA6F779AA284EB20E(uLocal_51))
				{
					SYSTEM::WAIT(0);
				}
			
				iLocal_52 = unk_0x5DEF122A58D4F685(uLocal_51);
				iLocal_58 = iLocal_52;
			
				if (func_39(echLocal_53) == 0)
					iLocal_58 = -1;
			
				if (!(iLocal_58 == -1))
				{
					if (bLocal_69 == true)
					{
						fLocal_68 = SYSTEM::TO_FLOAT(iLocal_58);
						bLocal_69 = false;
					}
				
					Global_20813.f_1 = 8;
					bLocal_56 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else if (iLocal_59 == -1)
			{
				if (func_34(echLocal_53, iLocal_58) && !bLocal_57)
				{
					iLocal_59 = 0;
					bLocal_56 = true;
					SYSTEM::SETTIMERB(0);
					func_37();
				}
			}
			else
			{
				iLocal_59 = 0;
				func_22(echLocal_53, iLocal_58, iLocal_59);
				bLocal_57 = true;
				iLocal_59 = -1;
				bLocal_56 = true;
				func_37();
				SYSTEM::SETTIMERB(0);
			}
		
			bLocal_61 = true;
		}
	}
	else
	{
		bLocal_61 = false;
	}

	if (SYSTEM::TIMERB() > 100)
	{
		if (unk_0x6D05C5731A838CB3(2, 177))
		{
			flag = false;
		
			if (iLocal_60 == 0)
			{
				if (!(iLocal_58 == -1))
				{
					if (iLocal_59 == -1)
					{
						iLocal_58 = SYSTEM::ROUND(fLocal_68);
						bLocal_66 = false;
						SYSTEM::SETTIMERB(0);
						flag = true;
						func_21();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_59 = -1;
						func_21();
					}
				
					bLocal_56 = true;
				}
				else
				{
					if (func_48("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/) == 0)
						func_44(37);
				
					if (func_48("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/) == 0)
						func_44(38);
				
					if (Global_23200 == false && !Global_23199)
					{
						func_21();
						Global_23199 = true;
						Global_45131 = 0;
					}
				}
			
				iLocal_60 = 1;
			}
		
			if (flag)
				iLocal_58 = -1;
		}
		else
		{
			iLocal_60 = 0;
		}
	}

	if (unk_0x6D05C5731A838CB3(2, 179))
	{
		if (bLocal_66)
		{
			if (func_48("AM_H_FLINK" /*Some emails contain hyperlinks to web pages. Press ~INPUT_CELLPHONE_EXTRA_OPTION~ to jump to the linked page.*/) == 0)
				func_44(37);
		
			if (func_48("AM_H_SCROLL" /*Use ~INPUTGROUP_CELLPHONE_NAVIGATE_UD~ to scroll through an email.*/) == 0)
				func_44(38);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_76352, sLocal_67, 64);
			func_18(7, false, 0);
			bLocal_66 = false;
			func_37();
		}
	}

	return;
}

int func_18(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1B69
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76482 = iParam0;
	flag = iParam2 == 1;
	flag2 = iParam2 == 2;
	flag3 = iParam2 == 3;

	switch (Global_76482)
	{
		case 3:
			Global_76480 = 0;
			break;
	
		case 4:
			Global_76480 = 3;
			break;
	}

	if (unk_0x486FF5D06E9659F1(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return 0;
	}

	if (unk_0x486FF5D06E9659F1(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return 0;
	}

	if (unk_0x486FF5D06E9659F1(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return 0;
	}

	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return 0;
	}

	if (Global_79248 && func_20())
		return 0;

	if (!Global_79248 && func_19())
		return 0;

	if (flag)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appSecuroServ"))
		{
			unk_0x97A5024CE91641F1("appSecuroServ");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0xA6E4F7A73ABC4A76("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		unk_0xFD49725F3FE7EE13("appSecuroServ");
		return 1;
	}

	if (flag2)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appBikerBusiness"))
		{
			unk_0x97A5024CE91641F1("appBikerBusiness");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0xA6E4F7A73ABC4A76("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		unk_0xFD49725F3FE7EE13("appBikerBusiness");
		return 1;
	}

	if (flag3)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appImportExport"))
		{
			unk_0x97A5024CE91641F1("appImportExport");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0xA6E4F7A73ABC4A76("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		unk_0xFD49725F3FE7EE13("appImportExport");
		return 1;
	}

	if (!unk_0xA6E4F7A73ABC4A76("appInternet"))
	{
		unk_0x97A5024CE91641F1("appInternet");
	
		if (bParam1)
			return 0;
	}

	while (!unk_0xA6E4F7A73ABC4A76("appInternet"))
	{
		SYSTEM::WAIT(0);
	}

	SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
	unk_0xFD49725F3FE7EE13("appInternet");
	return 1;
}

BOOL func_19() // Position - 0x1D84
{
	return Global_76370;
}

BOOL func_20() // Position - 0x1D90
{
	return Global_1928228;
}

void func_21() // Position - 0x1D9C
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20802, 1);

	return;
}

void func_22(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x1DBE
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num < -1 && num > 3)
		return;

	for (i = Global_54079[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_54079[num /*120*/].f_18[num2];
	num4 = Global_54079[num /*120*/].f_1[num2];

	if (num4 < 0 || num3 < 0 || !(num4 < 9) || !(num3 < 122))
		return;

	num5 = Global_48466[num3 /*46*/].f_32[num4];

	if (Global_45141[num5 /*12*/].f_4 == 0)
		return;

	Global_54079[num /*120*/].f_35[num2] = 1;
	Global_54079[num /*120*/].f_52[num2] = iParam2;
	func_23(num3, iParam2);
	return;
}

void func_23(int iParam0, int iParam1) // Position - 0x1EB8
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;
	int num5;
	int i;
	int num6;

	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
		return;

	num = Global_48466[iParam0 /*46*/].f_42 - 1;

	if (num < 0)
		return;

	num2 = Global_48466[iParam0 /*46*/].f_32[num];

	if (!(iParam1 < Global_45141[num2 /*12*/].f_4))
		return;

	num3 = Global_45141[num2 /*12*/].f_5[iParam1 /*4*/].f_1;
	flag = false;

	if (Global_48466[iParam0 /*46*/].f_31 < Global_48466[iParam0 /*46*/].f_30 - 1)
	{
		num4 = Global_48466[iParam0 /*46*/].f_8[Global_48466[iParam0 /*46*/].f_31];
	
		if (num3 == num4)
			flag = true;
	}

	if (!flag)
	{
		if (num3 > -1)
		{
			func_33(iParam0, num3);
			num5 = Global_48466[iParam0 /*46*/].f_2;
			i = 0;
			num6 = Global_45141[num3 /*12*/].f_2;
		
			for (i = 0; i < num5; i = i + 1)
			{
				if (!(i == num6))
					func_27(Global_48466[iParam0 /*46*/].f_3[i], iParam0, false, false, false);
			}
		}
	}

	if (Global_45141[num2 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
		func_24(Global_45141[num2 /*12*/].f_5[iParam1 /*4*/].f_3, false);

	if (Global_45141[num2 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_48466[iParam0 /*46*/].f_1 = 1;
	}
	else if (num3 > -1)
	{
		Global_48466[iParam0 /*46*/].f_45 = Global_45141[num3 /*12*/].f_10;
		Global_48466[iParam0 /*46*/].f_43 = Global_45141[num3 /*12*/].f_11;
	}
	else
	{
		Global_48466[iParam0 /*46*/].f_45 = 0;
	}

	if (Global_48466[iParam0 /*46*/].f_43 < 30000)
		Global_48466[iParam0 /*46*/].f_43 = 30000;

	return;
}

void func_24(int iParam0, BOOL bParam1) // Position - 0x205B
{
	Global_45132 = true;

	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
	{
		Global_48466[iParam0 /*46*/] = true;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}

	return;
}

void func_25(int iParam0) // Position - 0x20A2
{
	Global_48466[iParam0 /*46*/] = false;
	Global_48466[iParam0 /*46*/].f_31 = 0;
	Global_48466[iParam0 /*46*/].f_42 = 0;
	Global_48466[iParam0 /*46*/].f_45 = 0;
	Global_48466[iParam0 /*46*/].f_43 = 0;
	Global_48466[iParam0 /*46*/].f_1 = 0;
	return;
}

void func_26(int iParam0, BOOL bParam1) // Position - 0x20E4
{
	int num;
	int num2;
	int num3;
	int i;

	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
		return;

	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		num = Global_48466[iParam0 /*46*/].f_42 - 1;
	
		if (num < 0)
			return;
	
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[num] /*12*/].f_4 == 0)
			Global_48466[iParam0 /*46*/].f_1 = 1;
	
		return;
	}

	if (Global_48466[iParam0 /*46*/].f_1)
		return;

	num2 = Global_48466[iParam0 /*46*/].f_8[Global_48466[iParam0 /*46*/].f_31];
	Global_48466[iParam0 /*46*/].f_31 = Global_48466[iParam0 /*46*/].f_31 + 1;
	func_33(iParam0, num2);
	Global_48466[iParam0 /*46*/].f_45 = Global_45141[num2 /*12*/].f_10;
	Global_48466[iParam0 /*46*/].f_43 = Global_45141[num2 /*12*/].f_11;
	num3 = Global_48466[iParam0 /*46*/].f_2;
	func_27(Global_45141[num2 /*12*/].f_3, iParam0, false, false, bParam1);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_48466[iParam0 /*46*/].f_3[i] != Global_45141[num2 /*12*/].f_2 && Global_48466[iParam0 /*46*/].f_3[i] != Global_45141[num2 /*12*/].f_3)
			func_27(Global_48466[iParam0 /*46*/].f_3[i], iParam0, false, false, bParam1);
	}

	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[Global_48466[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_48466[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}

	return;
}

void func_27(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2280
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL i;
	BOOL j;
	int num6;
	int k;
	int num7;
	int num8;

	if (!(iParam0 < 3))
		return;

	num = -1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "UNSET", 64);

	if (!bParam2)
	{
		num4 = Global_48466[iParam1 /*46*/].f_42 - 1;
	
		if (num4 < 0)
			return;
	
		num5 = Global_48466[iParam1 /*46*/].f_32[num4];
		num3 = num5;
		unk = { func_32(Global_45141[num5 /*12*/].f_1) };
	
		if (Global_45141[num5 /*12*/].f_2 == iParam0 && !(Global_45141[num5 /*12*/].f_3 == iParam0))
			return;
	
		num2 = Global_45141[num5 /*12*/].f_2;
		num = Global_54079[iParam0 /*120*/];
	
		for (i = false; num >= 16; i = true)
		{
			num = num - 16;
		}
	
		if (i)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = Global_45133 - 1;
					
						if (Global_45133 < 0)
							Global_45133 = 0;
						break;
				
					case 1:
						Global_45134 = Global_45134 - 1;
					
						if (Global_45134 < 0)
							Global_45134 = 0;
						break;
				
					case 2:
						Global_45135 = Global_45135 - 1;
					
						if (Global_45135 < 0)
							Global_45135 = 0;
						break;
				}
			}
		}
	
		Global_54079[iParam0 /*120*/].f_18[num] = iParam1;
		Global_54079[iParam0 /*120*/].f_1[num] = num4;
		Global_54079[iParam0 /*120*/].f_35[num] = 0;
		Global_54079[iParam0 /*120*/].f_86[num] = false;
		Global_54079[iParam0 /*120*/].f_69[num] = false;
		Global_54079[iParam0 /*120*/] = Global_54079[iParam0 /*120*/] + 1;
	}
	else
	{
		num = Global_54079[iParam0 /*120*/];
	
		for (j = false; num >= 16; j = true)
		{
			num = num - 16;
		}
	
		if (j)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[num])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = Global_45133 - 1;
					
						if (Global_45133 < 0)
							Global_45133 = 0;
						break;
				
					case 1:
						Global_45134 = Global_45134 - 1;
					
						if (Global_45134 < 0)
							Global_45134 = 0;
						break;
				
					case 2:
						Global_45135 = Global_45135 - 1;
					
						if (Global_45135 < 0)
							Global_45135 = 0;
						break;
				}
			}
		}
	
		num6 = -1;
		k = 0;
	
		for (k = 0; k < 7; k = k + 1)
		{
			if (Global_54441[k /*203*/].f_1 == iParam1 && Global_54441[k /*203*/].f_9 > 0)
				num6 = k;
		}
	
		if (num6 == -1)
			return;
	
		Global_54079[iParam0 /*120*/].f_18[num] = Global_54441[num6 /*203*/].f_1;
		Global_54079[iParam0 /*120*/].f_1[num] = Global_54441[num6 /*203*/].f_9 - 1;
		Global_54079[iParam0 /*120*/].f_35[num] = 0;
		Global_54079[iParam0 /*120*/].f_86[num] = true;
		Global_54079[iParam0 /*120*/].f_69[num] = false;
		Global_54079[iParam0 /*120*/] = Global_54079[iParam0 /*120*/] + 1;
		num7 = Global_54079[iParam0 /*120*/].f_1[num];
		num8 = Global_54441[num6 /*203*/].f_10[num7 /*48*/];
		num3 = num8;
		num2 = Global_45141[num8 /*12*/].f_2;
	
		if (Global_54441[num6 /*203*/].f_10[Global_54441[num6 /*203*/].f_9 - 1 /*48*/].f_1)
			TEXT_LABEL_COPY(&unk, { Global_54441[num6 /*203*/].f_10[Global_54441[num6 /*203*/].f_9 - 1 /*48*/].f_2 }, 16);
		else
			unk = { func_32(Global_45141[num8 /*12*/].f_1) };
	}

	if (!bParam4)
	{
		if (!Global_54079[iParam0 /*120*/].f_69[num] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 1:
					if (num3 == 249)
						func_28(CHAR_FRANKLIN, num2, num3, "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					else
						func_28(CHAR_FRANKLIN, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			
				case 2:
					func_28(CHAR_TREVOR, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
			}
		}
	}

	return;
}

void func_28(eCharacter echParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x2655
{
	eCharacter character;
	BOOL flag;
	var unk;

	if (unk_0xFD216000DC314A92())
		return;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	flag = false;
	TEXT_LABEL_ASSIGN_STRING(&unk, func_31(iParam1, &flag), 64);

	if (character == echParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 73:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/);
				break;
		
			case 74:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/);
				break;
		
			default:
				unk_0xCCDB0041859B85A6(sParam3);
			
				if (!unk_0xD6F9DEE4765092A9(iParam4))
					unk_0xACF853FB3F6EA7D4(iParam4);
			
				if (!unk_0xD6F9DEE4765092A9(iParam5))
					unk_0xACF853FB3F6EA7D4(iParam5);
			
				if (!unk_0xD6F9DEE4765092A9(iParam6))
					unk_0xACF853FB3F6EA7D4(iParam6);
			
				if (!unk_0xD6F9DEE4765092A9(iParam7))
					unk_0xACF853FB3F6EA7D4(iParam7);
			
				if (!unk_0xD6F9DEE4765092A9(iParam8))
					unk_0xACF853FB3F6EA7D4(iParam8);
			
				if (!unk_0xD6F9DEE4765092A9(iParam9))
					unk_0xACF853FB3F6EA7D4(iParam9);
			
				if (!unk_0xD6F9DEE4765092A9(iParam10))
					unk_0xACF853FB3F6EA7D4(iParam10);
			
				if (!unk_0xD6F9DEE4765092A9(iParam11))
					unk_0xACF853FB3F6EA7D4(iParam11);
			
				if (!unk_0xD6F9DEE4765092A9(iParam12))
					unk_0xACF853FB3F6EA7D4(iParam12);
			
				if (!unk_0xD6F9DEE4765092A9(iParam13))
					unk_0xACF853FB3F6EA7D4(iParam13);
				break;
		}
	
		if (flag)
			func_29(unk_0x5C7E2225D7451992(&unk, &unk, 0, 2, unk_0xFACCDE46E24AD056(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
		else
			func_29(unk_0x5C7E2225D7451992("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFACCDE46E24AD056(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
	
		switch (Global_20813)
		{
			case CHAR_MICHAEL:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Michael", 24);
				Global_45133 = Global_45133 + 1;
			
				if (Global_45133 > 16)
					Global_45133 = 16;
				break;
		
			case CHAR_TREVOR:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Trevor", 24);
				Global_45135 = Global_45135 + 1;
			
				if (Global_45135 > 16)
					Global_45135 = 16;
				break;
		
			case CHAR_FRANKLIN:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Franklin", 24);
				Global_45134 = Global_45134 + 1;
			
				if (Global_45134 > 16)
					Global_45134 = 16;
				break;
		
			default:
				TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Default", 24);
				break;
		}
	
		unk_0xBF3D28CA44F3BE2D(-1, "Notification", &Global_20802, 1);
	}

	return;
}

void func_29(int iParam0) // Position - 0x283D
{
	Global_45136[Global_45140] = iParam0;
	Global_23224 = 1;
	Global_23223 = iParam0;
	Global_45140 = Global_45140 + 1;

	if (Global_45140 == 3)
		Global_45140 = 0;

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x286B
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /*Mike*/;
	
		case 3:
			return "EMSTR_3" /*Jimmy*/;
	
		case 1:
			return "EMSTR_6" /*Franklin*/;
	
		case 2:
			return "EMSTR_9" /*Trevor*/;
	
		case 4:
			return "EMSTR_12" /*Marnie*/;
	
		case 5:
			return "EMSTR_29" /*Epsilon Store*/;
	
		case 6:
			return "EMSTR_36" /*Maude*/;
	
		case 7:
			return "EMSTR_39" /*Lester*/;
	
		case 8:
			return "EMSTR_52" /*Maze Bank*/;
	
		case 9:
			return "EMSTR_55" /*Fleeca*/;
	
		case 10:
			return "EMSTR_58" /*Bank of Liberty*/;
	
		case 11:
			return "EMSTR_78" /*Legendary Motorsport Sales*/;
	
		case 12:
			return "EMSTR_81" /*Elitas Sales*/;
	
		case 13:
			return "EMSTR_84" /*Cache & Carry*/;
	
		case 14:
			return "EMSTR_87" /*Dock Tease*/;
	
		case 15:
			return "EMSTR_106" /*LSC*/;
	
		case 16:
			return "EMSTR_114" /*AMMU-NATION*/;
	
		case 17:
			return "EMSTR_142" /*Christian Feltz*/;
	
		case 18:
			return "EMSTR_145" /*Paige Harris*/;
	
		case 19:
			return "EMSTR_152" /*Los Santos Tourist Info*/;
	
		case 20:
			return "EMSTR_157" /*Rickie Luckens*/;
	
		case 21:
			return "EMSTR_163" /*Minotaur Property Management*/;
	
		case 22:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 23:
			return "EMSTR_187" /*Vanilla Unicorn*/;
	
		case 24:
			return "EMSTR_190" /*Dr Isiah Friedlander*/;
	
		case 25:
			return "EMSTR_206" /*TRACEYHEARTSTEALER*/;
	
		case 26:
			return "EMSTR_219" /*Dave Norton*/;
	
		case 27:
			return "EMSTR_226" /*Amanda De Santa*/;
	
		case 28:
			return "EMSTR_233" /*Donald Percival*/;
	
		case 29:
			return "EMSTR_242" /*Ron*/;
	
		case 30:
			return "EMSTR_249" /*Tanisha Marks*/;
	
		case 31:
			return "EMSTR_262" /*Denise*/;
	
		case 32:
			return "EMSTR_269" /*Lamar Davis*/;
	
		case 33:
			return "EMSTR_319" /*Brad*/;
	
		case 34:
			return "EMSTR_340" /*Patricia Madrazo*/;
	
		case 35:
			return "EMSTR_348" /*Eileen Haworth*/;
	
		case 36:
			return "EMSTR_182" /*Saeeda Kadam*/;
	
		case 37:
			return "EMSTR_357" /*Gray Nicholson*/;
	
		case 38:
			return "EMSTR_360" /*Nigel*/;
	
		case 39:
			return "EMSTR_369" /*Hookies*/;
	
		case 40:
			return "EMSTR_376" /*Towing Impound*/;
	
		case 41:
			return "EMSTR_379" /*Downtown Cab Co,*/;
	
		case 42:
			return "EMSTR_382" /*McKenzie Field Hangar*/;
	
		case 43:
			return "EMSTR_384" /*Sonar Collections Dock*/;
	
		case 44:
			return "EMSTR_387" /*Los Santos Customs*/;
	
		case 45:
			return "EMSTR_390" /*Cinema Doppler*/;
	
		case 46:
			return "EMSTR_393" /*Ten Cent Theater*/;
	
		case 47:
			return "EMSTR_396" /*Tivoli Cinema*/;
	
		case 48:
			return "EMSTR_399" /*Los Santos Golf Club*/;
	
		case 49:
			return "EMSTR_402" /*Car Scrap Yard*/;
	
		case 50:
			return "EMSTR_405" /*Smoke on the Water*/;
	
		case 51:
			return "EMSTR_408" /*Tequi-la-la*/;
	
		case 52:
			return "EMSTR_411" /*Pitchers*/;
	
		case 53:
			return "EMSTR_414" /*The Hen House*/;
	
		case 54:
			return "EMSTR_465" /*Pedal & Metal Sales*/;
	
		case 55:
			return "EMSTR_468" /*SSA Super Autos Sales*/;
	
		case 56:
			return "EMSTR_489" /*Hush Smush*/;
	
		case 57:
			return "EMSTR_492" /*foxymama21*/;
	
		case 58:
			return "EMSTR_495" /*Altarego12*/;
	
		case 59:
			return "EMSTR_498" /*BadKitty11*/;
	
		case 60:
			return "EMSTR_501" /*7yearbitch*/;
	
		case 61:
			return "EMSTR_504" /*Froggy69*/;
	
		case 62:
			return "EMSTR_507" /*Misscuddles*/;
	
		case 63:
			return "EMSTR_640" /*Offroad Events*/;
	
		case 64:
			return "EMSTR_643" /*Dock Tease*/;
	
		case 65:
			return "EMSTR_652" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

char* func_31(int iParam0, var uParam1) // Position - 0x2BD6
{
	*uParam1 = 1;

	switch (iParam0)
	{
		case 0:
			return unk_0xFACCDE46E24AD056(&(Global_2139[0 /*29*/].f_7));
	
		case 1:
			return unk_0xFACCDE46E24AD056(&(Global_2139[1 /*29*/].f_7));
	
		case 2:
			return unk_0xFACCDE46E24AD056(&(Global_2139[2 /*29*/].f_7));
	
		case 7:
			return unk_0xFACCDE46E24AD056(&(Global_2139[12 /*29*/].f_7));
	
		case 4:
			return unk_0xFACCDE46E24AD056(&(Global_2139[60 /*29*/].f_7));
	
		case 6:
			return unk_0xFACCDE46E24AD056(&(Global_2139[62 /*29*/].f_7));
	
		case 3:
			return unk_0xFACCDE46E24AD056(&(Global_2139[14 /*29*/].f_7));
	
		case 16:
			return unk_0xFACCDE46E24AD056(&(Global_2139[97 /*29*/].f_7));
	
		case 19:
			return unk_0xFACCDE46E24AD056(&(Global_2139[99 /*29*/].f_7));
	
		case 15:
			return unk_0xFACCDE46E24AD056(&(Global_2139[96 /*29*/].f_7));
	
		case 63:
			return "CHAR_CARSITE2";
	
		case 64:
			return "CHAR_BOATSITE";
	
		case 8:
			return "CHAR_BANK_MAZE";
	
		case 9:
			return "CHAR_BANK_FLEECA";
	
		case 10:
			return "CHAR_BANK_BOL";
	
		case 21:
			return "CHAR_MINOTAUR";
	
		case 25:
			return unk_0xFACCDE46E24AD056(&(Global_2139[15 /*29*/].f_7));
	
		case 26:
			return unk_0xFACCDE46E24AD056(&(Global_2139[30 /*29*/].f_7));
	
		case 27:
			return unk_0xFACCDE46E24AD056(&(Global_2139[17 /*29*/].f_7));
	
		case 29:
			return unk_0xFACCDE46E24AD056(&(Global_2139[20 /*29*/].f_7));
	
		case 30:
			return unk_0xFACCDE46E24AD056(&(Global_2139[43 /*29*/].f_7));
	
		case 31:
			return unk_0xFACCDE46E24AD056(&(Global_2139[44 /*29*/].f_7));
	
		case 32:
			return unk_0xFACCDE46E24AD056(&(Global_2139[19 /*29*/].f_7));
	
		case 34:
			return unk_0xFACCDE46E24AD056(&(Global_2139[40 /*29*/].f_7));
	
		case 36:
			return unk_0xFACCDE46E24AD056("CELL_E_381" /*CHAR_SAEEDA*/);
	
		case 38:
			return unk_0xFACCDE46E24AD056(&(Global_2139[64 /*29*/].f_7));
	
		case 5:
			return "CHAR_EPSILON";
	
		case 13:
			return "CHAR_MILSITE";
	
		case 11:
			return "CHAR_CARSITE";
	
		case 14:
			return "CHAR_BOATSITE";
	
		case 12:
			return "CHAR_PLANESITE";
	
		case 24:
			return "CHAR_DR_FRIEDLANDER";
	
		case 55:
			return "CHAR_CARSITE2";
	
		case 54:
			return "CHAR_BIKESITE";
	
		case 39:
			return unk_0xFACCDE46E24AD056(&(Global_2139[122 /*29*/].f_7));
	
		case 40:
			return unk_0xFACCDE46E24AD056(&(Global_2139[125 /*29*/].f_7));
	
		case 41:
			return unk_0xFACCDE46E24AD056(&(Global_2139[113 /*29*/].f_7));
	
		case 42:
			return unk_0xFACCDE46E24AD056(&(Global_2139[126 /*29*/].f_7));
	
		case 43:
			return unk_0xFACCDE46E24AD056(&(Global_2139[127 /*29*/].f_7));
	
		case 44:
			return unk_0xFACCDE46E24AD056(&(Global_2139[124 /*29*/].f_7));
	
		case 45:
			return unk_0xFACCDE46E24AD056(&(Global_2139[114 /*29*/].f_7));
	
		case 46:
			return unk_0xFACCDE46E24AD056(&(Global_2139[115 /*29*/].f_7));
	
		case 47:
			return unk_0xFACCDE46E24AD056(&(Global_2139[116 /*29*/].f_7));
	
		case 48:
			return unk_0xFACCDE46E24AD056(&(Global_2139[123 /*29*/].f_7));
	
		case 49:
			return unk_0xFACCDE46E24AD056(&(Global_2139[117 /*29*/].f_7));
	
		case 50:
			return unk_0xFACCDE46E24AD056(&(Global_2139[118 /*29*/].f_7));
	
		case 51:
			return unk_0xFACCDE46E24AD056(&(Global_2139[119 /*29*/].f_7));
	
		case 52:
			return unk_0xFACCDE46E24AD056(&(Global_2139[120 /*29*/].f_7));
	
		case 53:
			return unk_0xFACCDE46E24AD056(&(Global_2139[121 /*29*/].f_7));
	
		default:
		
	}

	*uParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0) // Position - 0x2FA1
{
	var unk;
	var unk17;

	if (iParam0 > -1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "EMSTR_", 64);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
		return unk;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk17, "FAIL", 64);
	return unk17;
}

int func_33(int iParam0, int iParam1) // Position - 0x2FD2
{
	if (Global_48466[iParam0 /*46*/].f_42 >= 9)
		return 0;

	Global_48466[iParam0 /*46*/].f_32[Global_48466[iParam0 /*46*/].f_42] = iParam1;
	Global_48466[iParam0 /*46*/].f_42 = Global_48466[iParam0 /*46*/].f_42 + 1;
	return 1;
}

BOOL func_34(eCharacter echParam0, int iParam1) // Position - 0x3017
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return false;

	for (i = Global_54079[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_54079[num /*120*/].f_86[num2])
	{
		num3 = Global_54079[num /*120*/].f_18[num2];
		num4 = Global_54079[num /*120*/].f_1[num2];
		num5 = Global_48466[num3 /*46*/].f_32[num4];
	
		if (Global_45141[num5 /*12*/].f_4 == 0)
			return false;
	
		if (Global_54079[num /*120*/].f_35[num2] == 1)
			return false;
	
		if (!func_35(num, num2))
			return false;
	
		return true;
	}

	return false;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0x30F6
{
	int num;
	int num2;
	int num3;

	if (!(iParam0 < 3))
		return false;

	num = Global_54079[iParam0 /*120*/].f_1[iParam1];
	num2 = Global_54079[iParam0 /*120*/].f_18[iParam1];

	if (!(Global_48466[num2 /*46*/] && !Global_48466[num2 /*46*/].f_1))
		return false;

	if (!(num == Global_48466[num2 /*46*/].f_42 - 1))
		return false;

	num3 = Global_48466[num2 /*46*/].f_32[Global_48466[num2 /*46*/].f_42 - 1];

	if (Global_45141[num3 /*12*/].f_4 > 0)
		return true;

	return false;
}

BOOL func_36() // Position - 0x3186
{
	return Global_76369;
}

void func_37() // Position - 0x3192
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20802, 1);
		func_38();
	}

	return;
}

void func_38() // Position - 0x31B8
{
	if (func_2())
		unk_0xBF3F90E670404C44(5);

	return;
}

int func_39(eCharacter echParam0) // Position - 0x31CC
{
	int num;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	return Global_54079[num /*120*/];
}

void func_40(var uParam0, eCharacter echParam1, int iParam2) // Position - 0x3209
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	int j;
	int num6;
	int num7;
	var unk;
	var unk17;

	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_54079[num /*120*/] - 1 - iParam2; i >= 16; i = i - 16)
	{
	}

	num2 = i;

	if (!Global_54079[num /*120*/].f_86[num2])
	{
		num3 = Global_54079[num /*120*/].f_18[num2];
		num4 = Global_54079[num /*120*/].f_1[num2];
		num5 = Global_48466[num3 /*46*/].f_32[num4];
	
		if (Global_45141[num5 /*12*/].f_4 == 0)
			return;
	
		j = 0;
		num6 = Global_45141[num5 /*12*/].f_4;
	
		if (num6 > 1)
			num6 = 1;
	
		for (j = 0; j < num6; j = j + 1)
		{
			num7 = Global_45141[num5 /*12*/].f_5[j /*4*/].f_1;
			unk = { func_32(Global_45141[num7 /*12*/].f_1) };
			unk17 = { func_32(Global_45141[num7 /*12*/].f_1) };
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(9);
			unk_0x330108B080A2132F(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW" /*Response:*/);
			func_9(&unk17);
			func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45141[num7 /*12*/].f_2));
			func_41(num7, Global_45141[num7 /*12*/].f_2);
			unk_0xE6B753D52F4CA222();
		}
	}

	return;
}

void func_41(int iParam0, int iParam1) // Position - 0x3372
{
	int num;

	num = iParam0;

	switch (num)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			unk_0x3585BEBEDC67FCC7("EmailAds_Elitas_Travel");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			unk_0x3585BEBEDC67FCC7("EmailAds_Dock_Tease");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		case 34:
		case 35:
		case 36:
			unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		case 31:
		case 32:
		case 33:
			unk_0x3585BEBEDC67FCC7("EmailAds_Legendary_Motorsport");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		default:
		
	}

	switch (iParam1)
	{
		case 13:
			unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		case 15:
			unk_0x3585BEBEDC67FCC7("EmailAds_LS_Customs");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		case 19:
			unk_0x3585BEBEDC67FCC7("EmailAds_LS_Tourist_Info");
			unk_0x557F1E2300EF1A3E(1);
			return;
	
		default:
			return;
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x348C
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2" /*-Michael*/;
	
		case 3:
			return "EMSTR_5" /*J*/;
	
		case 1:
			return "EMSTR_8" /*F*/;
	
		case 2:
			return "EMSTR_11" /*T*/;
	
		case 4:
			return "EMSTR_14" /*M*/;
	
		case 5:
			return "EMSTR_31" /*Praise Kraff*/;
	
		case 6:
			return "EMSTR_38" /*-Maude*/;
	
		case 7:
			return "EMSTR_41" /*-Lester*/;
	
		case 8:
			return "EMSTR_54" /*Maze Online Support*/;
	
		case 9:
			return "EMSTR_57" /*Fleeca Customer Services*/;
	
		case 10:
			return "EMSTR_60" /*BoL Transaction Services*/;
	
		case 11:
			return "EMSTR_80" /*Legendary Motorsport*/;
	
		case 12:
			return "EMSTR_83" /*Elitas Travel*/;
	
		case 13:
			return "EMSTR_86" /*C&C*/;
	
		case 14:
			return "EMSTR_89" /*DT Sales*/;
	
		case 15:
			return "EMSTR_106" /*LSC*/;
	
		case 16:
			return "EMSTR_116" /*~b~<u>www.ammunation.net</u>~s~*/;
	
		case 17:
			return "EMSTR_144" /*C*/;
	
		case 18:
			return "EMSTR_147" /*P*/;
	
		case 19:
			return "EMSTR_154" /*LS Tourist Info*/;
	
		case 20:
			return "EMSTR_159" /*R*/;
	
		case 21:
			return "EMSTR_165" /*Minotaur Finance - navigating the maze that is property ownership*/;
	
		case 22:
			return "EMSTR_184" /*-Saeeda Kadam*/;
	
		case 23:
			return "EMSTR_189" /*-Vanilla Unicorn*/;
	
		case 24:
			return "EMSTR_192" /*Isiah Friedlander*/;
	
		case 25:
			return "EMSTR_208" /*- Tracey*/;
	
		case 26:
			return "EMSTR_221" /*- Davey*/;
	
		case 27:
			return "EMSTR_228" /*- Amanda*/;
	
		case 28:
			return "EMSTR_235" /*- Donald Percival*/;
	
		case 29:
			return "EMSTR_244" /*- Ron*/;
	
		case 30:
			return "EMSTR_251" /*- Tanisha*/;
	
		case 31:
			return "EMSTR_264" /*- Denise*/;
	
		case 32:
			return "EMSTR_271" /*- Lamar*/;
	
		case 33:
			return "EMSTR_321" /*- Brad*/;
	
		case 34:
			return "EMSTR_342" /*- Patricia M*/;
	
		case 35:
			return "EMSTR_350" /*- Eileen Haworth*/;
	
		case 36:
			return "EMSTR_354" /*- Saeeda Kadam*/;
	
		case 37:
			return "EMSTR_359" /*- Gray N*/;
	
		case 38:
			return "EMSTR_362" /*- Nigel*/;
	
		case 39:
			return "EMSTR_371" /*- Hookies*/;
	
		case 40:
			return "EMSTR_378" /*- Towing Impound*/;
	
		case 41:
			return "EMSTR_381" /*- Downtown Cab Co.*/;
	
		case 42:
			return "EMSTR_382" /*McKenzie Field Hangar*/;
	
		case 43:
			return "EMSTR_386" /*- Sonar Collections Dock*/;
	
		case 44:
			return "EMSTR_389" /*- Los Santos Customs*/;
	
		case 45:
			return "EMSTR_392" /*- Cinema Doppler*/;
	
		case 46:
			return "EMSTR_395" /*- Ten Cent Theater*/;
	
		case 47:
			return "EMSTR_398" /*- Tivoli Cinema*/;
	
		case 48:
			return "EMSTR_401" /*- Los Santos Golf Club*/;
	
		case 49:
			return "EMSTR_404" /*- Car Scrap Yard*/;
	
		case 50:
			return "EMSTR_407" /*- Smoke on the Water*/;
	
		case 51:
			return "EMSTR_410" /*- Tequi-la-la*/;
	
		case 52:
			return "EMSTR_413" /*- Pitchers*/;
	
		case 53:
			return "EMSTR_416" /*- The Hen House*/;
	
		case 54:
			return "EMSTR_467" /*Pedal & Metal Cycles*/;
	
		case 55:
			return "EMSTR_470" /*SSA Super Autos*/;
	
		case 56:
			return "EMSTR_491" /*Hush Smush*/;
	
		case 57:
			return "EMSTR_494" /*foxymama21*/;
	
		case 58:
			return "EMSTR_497" /*Altarego12*/;
	
		case 59:
			return "EMSTR_500" /*BadKitty11*/;
	
		case 60:
			return "EMSTR_503" /*7yearbitch*/;
	
		case 61:
			return "EMSTR_506" /*Froggy69*/;
	
		case 62:
			return "EMSTR_509" /*Misscuddles*/;
	
		case 63:
			return "EMSTR_642" /*- Southern San Andreas Super Autos*/;
	
		case 64:
			return "EMSTR_645" /*- Dock Tease Events*/;
	
		case 65:
			return "EMSTR_654" /*Brother Adrian*/;
	
		default:
		
	}

	return "NULL";
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x37F7
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

void func_44(int iParam0) // Position - 0x380E
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_20413.f_150[i], num);

	return;
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x3850
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_46(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x3872
{
	int i;

	if (unk_0x1B79E937E91F40C3(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_114370.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(&Global_114370.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_114370.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = unk_0x1DD05E817C89C737() + iParam3;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = unk_0x1DD05E817C89C737() + iParam3 + iParam4;
		else
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_114370.f_20413.f_145 = Global_114370.f_20413.f_145 + 1;
		func_47();
	}

	return;
}

void func_47() // Position - 0x3A46
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114370.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_114370.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 0))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[0])
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 1))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[1])
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20413[i /*16*/].f_11, 2))
			if (Global_114370.f_20413[i /*16*/].f_12 > Global_114370.f_20413.f_146[2])
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_48(char* sParam0) // Position - 0x3B5D
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_113012))
		return 1;

	if (func_49(sParam0))
		return 0;

	return 2;
}

BOOL func_49(char* sParam0) // Position - 0x3B84
{
	int i;

	for (i = 0; i < Global_114370.f_20413.f_145; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &Global_114370.f_20413[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_50(int iParam0) // Position - 0x3BBF
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114370.f_20413.f_150[i], num);

	return false;
}

char* func_51(eCharacter echParam0, int iParam1) // Position - 0x3BFF
{
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return "";

	num4 = func_53(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_54079[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_48466[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_54441[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_54441[num6 /*203*/].f_10[num3 /*48*/];
	}

	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(num5);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x3CBF
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
	
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
	
		case 17:
			return "WWW_MAZE_D_BANK_COM";
	
		case 18:
			return "WWW_FLEECA_COM";
	
		case 19:
			return "WWW_MAZE_D_BANK_COM";
	
		case 20:
			return "WWW_MAZE_D_BANK_COM";
	
		case 21:
			return "WWW_MAZE_D_BANK_COM";
	
		case 22:
			return "WWW_MAZE_D_BANK_COM";
	
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 24:
			return "WWW_FLEECA_COM";
	
		case 25:
			return "WWW_FLEECA_COM";
	
		case 26:
			return "WWW_FLEECA_COM";
	
		case 27:
			return "WWW_FLEECA_COM";
	
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
	
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
	
		case 47:
			return "WWW_AMMUNATION_NET";
	
		case 48:
			return "WWW_AMMUNATION_NET";
	
		case 49:
			return "WWW_AMMUNATION_NET";
	
		case 50:
			return "WWW_AMMUNATION_NET";
	
		case 51:
			return "WWW_AMMUNATION_NET";
	
		case 52:
			return "WWW_AMMUNATION_NET";
	
		case 53:
			return "WWW_AMMUNATION_NET";
	
		case 54:
			return "WWW_AMMUNATION_NET";
	
		case 55:
			return "WWW_ELITASTRAVEL_COM";
	
		case 56:
			return "WWW_DOCKTEASE_COM";
	
		case 57:
			return "WWW_ELITASTRAVEL_COM";
	
		case 58:
			return "WWW_ELITASTRAVEL_COM";
	
		case 59:
			return "WWW_ELITASTRAVEL_COM";
	
		case 60:
			return "WWW_DOCKTEASE_COM";
	
		case 61:
			return "WWW_DOCKTEASE_COM";
	
		case 62:
			return "WWW_ELITASTRAVEL_COM";
	
		case 63:
			return "WWW_ELITASTRAVEL_COM";
	
		case 68:
			return "WWW_AMMUNATION_NET";
	
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
	
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
	
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
	
		case 194:
			return "WWW_HUSHSMUSH_COM";
	
		case 195:
			return "WWW_HUSHSMUSH_COM";
	
		case 196:
			return "WWW_HUSHSMUSH_COM";
	
		case 197:
			return "WWW_HUSHSMUSH_COM";
	
		case 198:
			return "WWW_HUSHSMUSH_COM";
	
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
	
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
	
		case 270:
			return "WWW_AMMUNATION_NET";
	
		case 271:
			return "WWW_AMMUNATION_NET";
	
		case 272:
			return "WWW_AMMUNATION_NET";
	
		case 273:
			return "WWW_AMMUNATION_NET";
	
		case 274:
			return "WWW_AMMUNATION_NET";
	
		case 275:
			return "WWW_AMMUNATION_NET";
	
		case 276:
			return "WWW_AMMUNATION_NET";
	
		default:
		
	}

	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3FCF
{
	int i;
	int num;

	for (i = Global_54079[iParam0 /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num = i;
	*uParam2 = Global_54079[iParam0 /*120*/].f_18[num];
	*uParam3 = Global_54079[iParam0 /*120*/].f_1[num];
	*uParam4 = Global_54079[iParam0 /*120*/].f_35[num];
	return num;
}

BOOL func_54(eCharacter echParam0, int iParam1) // Position - 0x402E
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int i;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	num4 = func_53(num, iParam1, &num2, &num3, &unk);
	unk = unk;
	num5 = -1;
	flag = Global_54079[num /*120*/].f_86[num4];

	if (!flag)
	{
		num5 = Global_48466[num2 /*46*/].f_32[num3];
	}
	else
	{
		num6 = -1;
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (Global_54441[i /*203*/].f_1 == num2)
				num6 = i;
		}
	
		num5 = Global_54441[num6 /*203*/].f_10[num3 /*48*/];
	}

	return func_55(num5);
}

int func_55(int iParam0) // Position - 0x40EB
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_56(var uParam0, eCharacter echParam1, int iParam2) // Position - 0x4261
{
	int num;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	var unk;
	var unk17;
	int num6;
	int num7;
	int i;
	int num8;
	int num9;
	int j;
	int num10;
	int num11;
	var unk33;
	var unk49;
	BOOL flag3;
	int k;

	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(9);
	unk_0xE6B753D52F4CA222();
	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	num4 = func_53(num, iParam2, &num2, &num3, &flag);
	flag2 = Global_54079[num /*120*/].f_86[num4];

	if (!Global_54079[num /*120*/].f_69[num4])
		func_60(-1);

	Global_54079[num /*120*/].f_69[num4] = true;

	if (!flag2)
	{
		num5 = Global_48466[num2 /*46*/].f_32[num3];
		unk = { func_32(Global_45141[num5 /*12*/]) };
		unk17 = { func_32(Global_45141[num5 /*12*/].f_1) };
		unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(9);
		unk_0x330108B080A2132F(0);
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num5 /*12*/].f_3));
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num5 /*12*/].f_2));
		func_9(&unk);
		func_9(&unk17);
		func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45141[num5 /*12*/].f_2));
		func_41(num5, Global_45141[num5 /*12*/].f_2);
		unk_0xE6B753D52F4CA222();
	
		if (Global_45141[num5 /*12*/].f_4 == 0)
			func_78(false);
		else if (flag || !func_35(num, num4))
			func_78(false);
		else
			func_78(true);
	
		if (Global_48466[num2 /*46*/].f_42 > 1)
		{
			num6 = num3;
			num7 = num3 - 1;
			i = 0;
		
			for (i = 0; i < num6; i = i + 1)
			{
				num5 = Global_48466[num2 /*46*/].f_32[num7];
				unk = { func_32(Global_45141[num5 /*12*/]) };
				unk17 = { func_32(Global_45141[num5 /*12*/].f_1) };
				num8 = func_58(echParam1, Global_45141[num5 /*12*/].f_3);
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(i + 1);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(num8));
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num5 /*12*/].f_2));
				func_9(&unk);
				func_9(&unk17);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45141[num5 /*12*/].f_2));
				func_41(num5, Global_45141[num5 /*12*/].f_2);
				unk_0xE6B753D52F4CA222();
				num7 = num7 - 1;
			}
		}
	}
	else
	{
		num9 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_54441[j /*203*/].f_1 == num2)
				num9 = j;
		}
	
		if (num9 == -1)
		{
			return;
		}
		else
		{
			num10 = Global_54441[num9 /*203*/].f_10[num3 /*48*/];
			num11 = Global_54441[num9 /*203*/].f_10[num3 /*48*/];
			unk33 = { func_32(Global_45141[num10 /*12*/]) };
			unk49 = { func_32(Global_45141[num10 /*12*/].f_1) };
		
			if (Global_54441[num9 /*203*/].f_10[num3 /*48*/].f_1)
				TEXT_LABEL_COPY(&unk49, { Global_54441[num9 /*203*/].f_10[num3 /*48*/].f_2 }, 16);
		
			if (Global_45141[num10 /*12*/].f_4 == 0)
				func_78(false);
			else if (flag)
				func_78(false);
			else
				func_78(true);
		
			flag3 = false;
			flag3 = func_57(uParam0, Global_54441[num9 /*203*/].f_1, num3, num11);
		
			if (!flag3)
			{
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(0);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num10 /*12*/].f_3));
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num10 /*12*/].f_2));
				func_9(&unk33);
			
				if (Global_54441[num9 /*203*/].f_10[num3 /*48*/].f_6 > 0)
				{
					unk_0x882AEFD55B8D51FB(&unk49);
					k = 0;
				
					for (k = 0; k < Global_54441[num9 /*203*/].f_10[num3 /*48*/].f_6; k = k + 1)
					{
						unk_0xACF853FB3F6EA7D4(&Global_54441[num9 /*203*/].f_10[num3 /*48*/].f_7[k /*4*/]);
					}
				
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_9(&unk49);
				}
			
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45141[num10 /*12*/].f_2));
				func_41(num10, Global_45141[num10 /*12*/].f_2);
				unk_0xE6B753D52F4CA222();
			}
		}
	}

	return;
}

BOOL func_57(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x464E
{
	int num;
	int num2;
	int num3;
	var unk;
	var unk17;
	int i;
	int num4;
	BOOL flag;
	char* str;

	num = 0;
	num2 = iParam1;
	num2 = iParam2;
	num2 = num2;
	num3 = 0;
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0xE6B753D52F4CA222();
	unk = { func_32(Global_45141[iParam3 /*12*/]) };

	switch (iParam3)
	{
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk17, "PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/, 64);
			break;
	}

	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(9);
	unk_0x330108B080A2132F(num3);
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[iParam3 /*12*/].f_3));
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[iParam3 /*12*/].f_2));
	func_9(&unk);
	func_9(&unk17);
	func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_45141[iParam3 /*12*/].f_2));
	func_9("");
	unk_0x330108B080A2132F(0);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	num3 = num3 + 1;

	for (i = 0; i < 16; i = i + 1)
	{
		num4 = i;
		flag = false;
	
		switch (iParam3)
		{
			case 72:
				if (Global_114370.f_24907[num4 /*4*/] == CHAR_MICHAEL)
					flag = true;
				break;
		
			case 73:
				if (Global_114370.f_24907[num4 /*4*/] == CHAR_FRANKLIN)
					flag = true;
				break;
		
			case 74:
				if (Global_114370.f_24907[num4 /*4*/] == CHAR_TREVOR)
					flag = true;
				break;
		}
	
		if (flag)
		{
			switch (num4)
			{
				case 0:
					str = "ACCNA_TOWING" /*Towing Impound*/;
					break;
			
				case 1:
					str = "ACCNA_TAXI_LOT" /*Downtown Cab Co.*/;
					break;
			
				case 2:
					str = "ACCNA_ARMS" /*McKenzie Field Hangar*/;
					break;
			
				case 3:
					str = "ACCNA_SONAR" /*Sonar Collections Dock*/;
					break;
			
				case 4:
					str = "ACCNA_CARMOD" /*Los Santos Customs*/;
					break;
			
				case 5:
					str = "ACCNA_VCINEMA" /*Cinema Doppler*/;
					break;
			
				case 6:
					str = "ACCNA_DCINEMA" /*Ten Cent Theater*/;
					break;
			
				case 7:
					str = "ACCNA_MCINEMA" /*Tivoli Cinema*/;
					break;
			
				case 8:
					str = "ACCNA_GOLF" /*Los Santos Golf Club*/;
					break;
			
				case 9:
					str = "ACCNA_CSCRAP" /*Car Scrapyard*/;
					break;
			
				case 10:
					str = "ACCNA_SMOKE" /*Smoke on the Water*/;
					break;
			
				case 11:
					str = "ACCNA_TEQUILA" /*Tequi-la-la*/;
					break;
			
				case 12:
					str = "ACCNA_PITCHERS" /*Pitchers*/;
					break;
			
				case 13:
					str = "ACCNA_HEN" /*The Hen House*/;
					break;
			
				case 14:
					str = "ACCNA_HOOKIES" /*Hookies*/;
					break;
			
				case 15:
					str = "ACCNA_STRP" /*Vanilla Unicorn*/;
					break;
			}
		
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(9);
			unk_0x330108B080A2132F(num3);
			unk_0x882AEFD55B8D51FB("PROPR_INCEMAIL4" /*~a~: $~1~*/);
			unk_0xACF853FB3F6EA7D4(str);
			unk_0x511D14ED2DA887E1(Global_114370.f_24907[num4 /*4*/].f_3);
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			num3 = num3 + 1;
			num = 1;
		}
	}

	return num;
}

int func_58(eCharacter echParam0, int iParam1) // Position - 0x48E7
{
	if (iParam1 == 0)
		if (echParam0 == CHAR_FRANKLIN)
			return 1;
		else if (echParam0 == CHAR_TREVOR)
			return 2;

	return iParam1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x490E
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1" /*Mike@eyefind.info*/;
	
		case 3:
			return "EMSTR_4" /*jimmy@eyefind.info*/;
	
		case 1:
			return "EMSTR_7" /*Frankie@eyefind.info*/;
	
		case 2:
			return "EMSTR_10" /*trev@eyefind.info*/;
	
		case 4:
			return "EMSTR_13" /*Marnie@epsilonprogram.com*/;
	
		case 5:
			return "EMSTR_30" /*noreply@epsilonprogram.com*/;
	
		case 6:
			return "EMSTR_37" /*Maude@eyefind.info*/;
	
		case 7:
			return "EMSTR_40" /*t34b4g99@eyefind.info*/;
	
		case 8:
			return "EMSTR_53" /*services@maze-bank.com*/;
	
		case 9:
			return "EMSTR_56" /*services@fleeca.com*/;
	
		case 10:
			return "EMSTR_59" /*transactions@thebankofliberty.com*/;
	
		case 11:
			return "EMSTR_79" /*sales@legendarymotorsport.net*/;
	
		case 12:
			return "EMSTR_82" /*sales@elitastravel.com*/;
	
		case 13:
			return "EMSTR_85" /*CnCsales@warstock-cache-and-carry.com*/;
	
		case 14:
			return "EMSTR_88" /*sales@docktease.com*/;
	
		case 15:
			return "EMSTR_107" /*MODS@lossantoscustoms.com*/;
	
		case 16:
			return "EMSTR_115" /*GUNS@ammunation.net*/;
	
		case 17:
			return "EMSTR_143" /*Feltz@eyefind.info*/;
	
		case 18:
			return "EMSTR_146" /*Paige@eyefind.info*/;
	
		case 19:
			return "EMSTR_153" /*info@LSTouristInfo.com*/;
	
		case 20:
			return "EMSTR_158" /*Rickie@lifeinvader.com*/;
	
		case 21:
			return "EMSTR_164" /*property@minotaurfinance.com*/;
	
		case 22:
			return "EMSTR_183" /*SKadam@eyefind.info*/;
	
		case 23:
			return "EMSTR_188" /*promotions@vanillaunicorn.xxx*/;
	
		case 24:
			return "EMSTR_191" /*DrFriedlander@eyefind.info*/;
	
		case 25:
			return "EMSTR_207" /*tracey@eyefind.info*/;
	
		case 26:
			return "EMSTR_220" /*DaveNorton@eyefind.info*/;
	
		case 27:
			return "EMSTR_227" /*AmandaDS@eyefind.info*/;
	
		case 28:
			return "EMSTR_234" /*Don.Percival@merryweather.com*/;
	
		case 29:
			return "EMSTR_243" /*BigBadRon@eyefind.info*/;
	
		case 30:
			return "EMSTR_250" /*TanishaMarks@eyefind.info*/;
	
		case 31:
			return "EMSTR_263" /*denise@eyefind.info*/;
	
		case 32:
			return "EMSTR_270" /*LamDav@eyefind.info*/;
	
		case 33:
			return "EMSTR_320" /*Bradley@eyefind.info*/;
	
		case 34:
			return "EMSTR_341" /*PatriciaMadrazo@eyefind.info*/;
	
		case 35:
			return "EMSTR_349" /*EileenHaworth@eyefind.info*/;
	
		case 36:
			return "EMSTR_353" /*SaeedaKadam@eyefind.info*/;
	
		case 37:
			return "EMSTR_358" /*GrayNicholson@eyefind.info*/;
	
		case 38:
			return "EMSTR_361" /*Nigel@eyefind.info*/;
	
		case 39:
			return "EMSTR_370" /*Hookies@eyefind.info*/;
	
		case 40:
			return "EMSTR_377" /*TowingImpound@eyefind.info*/;
	
		case 41:
			return "EMSTR_380" /*DowntownCabCo@eyefind.info*/;
	
		case 42:
			return "EMSTR_383" /*McKenzieField@eyefind.info*/;
	
		case 43:
			return "EMSTR_385" /*SonarCollections@eyefind.info*/;
	
		case 44:
			return "EMSTR_388" /*LosSantosCustoms@eyefind.info*/;
	
		case 45:
			return "EMSTR_391" /*CinemaDoppler@eyefind.info*/;
	
		case 46:
			return "EMSTR_394" /*TenCentTheater@eyefind.info*/;
	
		case 47:
			return "EMSTR_397" /*TivoliCinema@eyefind.info*/;
	
		case 48:
			return "EMSTR_400" /*LosSantosGolfClub@eyefind.info*/;
	
		case 49:
			return "EMSTR_403" /*CarScrapYard@eyefind.info*/;
	
		case 50:
			return "EMSTR_406" /*SmokeOnTheWater@eyefind.info*/;
	
		case 51:
			return "EMSTR_409" /*Tequi-la-la@eyefind.info*/;
	
		case 52:
			return "EMSTR_412" /*Pitchers@eyefind.info*/;
	
		case 53:
			return "EMSTR_415" /*TheHenHouse@eyefind.info*/;
	
		case 54:
			return "EMSTR_466" /*sales@pandmcycles.com*/;
	
		case 55:
			return "EMSTR_469" /*sales@southernsanandreassuperautos.com*/;
	
		case 56:
			return "EMSTR_490" /*promotions@hushmush.com*/;
	
		case 57:
			return "EMSTR_493" /*foxymama21@hushmush.com*/;
	
		case 58:
			return "EMSTR_496" /*Altarego12@hushmush.com*/;
	
		case 59:
			return "EMSTR_499" /*BadKitty11@hushmush.com*/;
	
		case 60:
			return "EMSTR_502" /*7yearbitch@hushmush.com*/;
	
		case 61:
			return "EMSTR_505" /*Froggy69@hushmush.com*/;
	
		case 62:
			return "EMSTR_508" /*Misscuddles@hushmush.com*/;
	
		case 63:
			return "EMSTR_641" /*events@SouthernSanAndreasSuperAutos.com*/;
	
		case 64:
			return "EMSTR_644" /*RaceOrganiser@docktease.com*/;
	
		case 65:
			return "EMSTR_653" /*adrian@mydivinewithin.com*/;
	
		default:
		
	}

	return "NULL";
}

void func_60(int iParam0) // Position - 0x4C79
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			Global_45133 = Global_45133 + iParam0;
		
			if (Global_45133 < 0)
				Global_45133 = 0;
			break;
	
		case CHAR_TREVOR:
			Global_45135 = Global_45135 + iParam0;
		
			if (Global_45135 < 0)
				Global_45135 = 0;
			break;
	
		case CHAR_FRANKLIN:
			Global_45134 = Global_45134 + iParam0;
		
			if (Global_45134 < 0)
				Global_45134 = 0;
			break;
	
		default:
			break;
	}

	return;
}

void func_61(eCharacter echParam0, int iParam1) // Position - 0x4CE4
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int j;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	for (i = Global_54079[num /*120*/] - 1 - iParam1; i >= 16; i = i - 16)
	{
	}

	num2 = i;
	num3 = Global_54079[num /*120*/].f_18[num2];
	num4 = Global_54079[num /*120*/].f_1[num2];
	num5 = -1;
	flag = Global_54079[num /*120*/].f_86[num2];

	if (!flag)
	{
		num5 = Global_48466[num3 /*46*/].f_32[num4];
	}
	else
	{
		num6 = -1;
		j = 0;
	
		for (j = 0; j < 7; j = j + 1)
		{
			if (Global_54441[j /*203*/].f_1 == num3)
				num6 = j;
		}
	
		if (num6 == -1)
			return;
	
		num5 = Global_54441[num6 /*203*/].f_10[num4 /*48*/];
	}

	if (!func_62(num5))
		return;

	if (Global_54440 != -1)
		unk_0x633E3833FB96BCCB(func_16(Global_54440));

	Global_54440 = num5;
	unk_0xD0D00ED689D6CA81(func_16(num5), 0);

	while (!unk_0x38D063D8CF6D1967(func_16(num5)))
	{
		SYSTEM::WAIT(100);
	}

	return;
}

BOOL func_62(int iParam0) // Position - 0x4E16
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return true;
	
		default:
		
	}

	return false;
}

void func_63() // Position - 0x4EC6
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_45136[i] != -1)
		{
			unk_0xFE3A52C5B7AE3101(Global_45136[i]);
			Global_45136[i] = -1;
		}
	}

	Global_45140 = 0;
	return;
}

void func_64(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4F05
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
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

void func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x4F68
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_9(sParam2);

	if (!unk_0xD6F9DEE4765092A9(sParam3))
		func_9(sParam3);

	if (!unk_0xD6F9DEE4765092A9(sParam4))
		func_9(sParam4);

	if (!unk_0xD6F9DEE4765092A9(sParam5))
		func_9(sParam5);

	if (!unk_0xD6F9DEE4765092A9(sParam6))
		func_9(sParam6);

	unk_0xE6B753D52F4CA222();
	return;
}

int func_66(var uParam0, eCharacter echParam1) // Position - 0x4FC3
{
	int num;
	int i;
	int num2;
	int j;
	int num3;
	int num4;
	int num5;
	int num6;
	var unk;
	int num7;
	int num8;
	int k;
	int num9;
	int num10;
	int num11;
	var unk5;

	func_67(echParam1);
	num = -1;

	switch (echParam1)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return 0;

	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(8);
	unk_0xE6B753D52F4CA222();

	if (Global_54079[num /*120*/] < 1)
		return 0;

	for (i = Global_54079[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_54079[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return 0;

	j = 0;

	for (j = 0; j < num2; j = j + 1)
	{
		if (!Global_54079[num /*120*/].f_86[i])
		{
			num3 = Global_54079[num /*120*/].f_18[i];
			num4 = Global_54079[num /*120*/].f_1[i];
			num5 = Global_48466[num3 /*46*/].f_32[num4];
			num6 = 0;
		
			if (Global_54079[num /*120*/].f_69[i])
				num6 = 1;
		
			if (num6 == 1)
				if (Global_45141[num5 /*12*/].f_4 > 0)
					if (Global_54079[num /*120*/].f_35[i] == 0)
						num6 = 2;
		
			TEXT_LABEL_COPY(&unk, { func_32(Global_45141[num5 /*12*/]) }, 4);
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(8);
			unk_0x330108B080A2132F(j);
			unk_0x330108B080A2132F(num6);
			unk_0x330108B080A2132F(0);
			func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num5 /*12*/].f_2));
			func_9(&unk);
			unk_0xE6B753D52F4CA222();
		}
		else
		{
			num7 = Global_54079[num /*120*/].f_18[i];
			num8 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_54441[k /*203*/].f_1 == num7)
					num8 = k;
			}
		
			if (num8 == -1)
			{
				return 1;
			}
			else
			{
				num9 = Global_54079[num /*120*/].f_1[i];
				num10 = 0;
			
				if (Global_54079[num /*120*/].f_69[i])
					num10 = 1;
			
				num11 = Global_54441[num8 /*203*/].f_10[num9 /*48*/];
			
				if (num10 == 1)
					if (Global_45141[num11 /*12*/].f_4 > 0)
						if (Global_54079[num /*120*/].f_35[i] == 0)
							num10 = 2;
			
				unk5 = { func_32(Global_45141[num11 /*12*/]) };
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(8);
				unk_0x330108B080A2132F(j);
				unk_0x330108B080A2132F(num10);
				unk_0x330108B080A2132F(0);
				func_9(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Global_45141[num11 /*12*/].f_2));
				func_9(&unk5);
				unk_0xE6B753D52F4CA222();
			}
		}
	
		i = i - 1;
	
		if (i < 0)
			i = 15;
	}

	return num2;
}

void func_67(eCharacter echParam0) // Position - 0x5252
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;
	int j;
	BOOL flag;
	int unk120;
	int num5;
	int k;
	int num6;

	num = -1;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = 0;
			break;
	
		case CHAR_FRANKLIN:
			num = 1;
			break;
	
		case CHAR_TREVOR:
			num = 2;
			break;
	}

	if (num == -1)
		return;

	if (Global_54079[num /*120*/] < 1)
		return;

	for (i = Global_54079[num /*120*/] - 1; i >= 16; i = i - 16)
	{
	}

	num2 = Global_54079[num /*120*/];

	if (num2 > 16)
		num2 = 16;

	if (i < 0 || i > 15)
		return;

	num3 = i - num2 - 1;

	if (num3 < 0)
		num3 = 16 + num3;

	num4.f_1 = 16;
	num4.f_18 = 16;
	num4.f_35 = 16;
	num4.f_52 = 16;
	num4.f_69 = 16;
	num4.f_86 = 16;
	num4.f_103 = 16;

	for (j = 0; j < num2; j = j + 1)
	{
		flag = true;
	
		if (Global_54079[num /*120*/].f_103[num3])
			flag = false;
	
		if (Global_54079[num /*120*/].f_86[num3])
		{
			unk120 = Global_54079[num /*120*/].f_18[num3];
			num5 = -1;
			k = 0;
		
			for (k = 0; k < 7; k = k + 1)
			{
				if (Global_54441[k /*203*/].f_1 == unk120)
					num5 = k;
			}
		
			if (num5 == -1)
				flag = false;
		}
	
		if (flag)
		{
			num6 = num4;
			num4.f_1[num6] = Global_54079[num /*120*/].f_1[num3];
			num4.f_18[num6] = Global_54079[num /*120*/].f_18[num3];
			num4.f_35[num6] = Global_54079[num /*120*/].f_35[num3];
			num4.f_52[num6] = Global_54079[num /*120*/].f_52[num3];
			num4.f_69[num6] = Global_54079[num /*120*/].f_69[num3];
			num4.f_86[num6] = Global_54079[num /*120*/].f_86[num3];
			num4 = num4 + 1;
		}
	
		num3 = num3 + 1;
	
		if (num3 == 16)
			num3 = 0;
	}

	Global_54079[num /*120*/] = num4;

	for (j = 0; j < 16; j = j + 1)
	{
		Global_54079[num /*120*/].f_103[j] = false;
		Global_54079[num /*120*/].f_1[j] = num4.f_1[j];
		Global_54079[num /*120*/].f_18[j] = num4.f_18[j];
		Global_54079[num /*120*/].f_35[j] = num4.f_35[j];
		Global_54079[num /*120*/].f_52[j] = num4.f_52[j];
		Global_54079[num /*120*/].f_69[j] = num4.f_69[j];
		Global_54079[num /*120*/].f_86[j] = num4.f_86[j];
	}

	return;
}

void func_68() // Position - 0x54EE
{
	float num;

	num = func_69(fLocal_48, uLocal_45, -90f, 0f, 90f, Global_20773, 350f, false);

	if (Global_9487 == 0)
		unk_0xBA290C9390813C9F(500f + (75f * (1f - num)));

	if (num >= 1f)
	{
		Global_23199 = false;
		func_1(0);
		func_4();
		iLocal_16 = 0;
	}

	return;
}

float func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x554C
{
	var unk;
	float num;
	float num2;
	float num3;

	if (Global_4543262 == 0)
	{
		if (IS_BIT_SET(Global_8683, 14) && Global_20813.f_1 < 4)
		{
			unk_0x78C4EBB0251847E2(&unk);
		
			if (Global_20766[Global_20758 /*3*/].f_1 == unk.f_1)
				Global_4543262 = 1;
		}
	}

	if (func_72() && Global_4543262 == 0)
		return 2f;

	if (iLocal_16 == 0)
		iLocal_16 = unk_0x1DD05E817C89C737();

	num = func_71(SYSTEM::TO_FLOAT(unk_0x1DD05E817C89C737() - iLocal_16) / fParam12, 0f, 1f);

	if (num < 1f)
	{
		num2 = num;
	
		if (bParam13)
		{
			num2 = num2 - 1f;
			num3 = 0.670158f;
			num2 = (num2 * num2 * (((num3 + 1f) * num2) + num3)) + 1f;
		}
		else
		{
			num2 = SYSTEM::SIN(num * 90f);
		}
	
		Global_20741 = { func_70(uParam0, uParam3, num2) };
		Global_20744 = { func_70(fParam6, fParam9, num2) };
	}
	else
	{
		Global_20741 = { uParam3 };
		Global_20744 = { fParam9 };
	}

	unk_0x6B7EA0158D00C600(Global_20741);
	unk_0xA0382000AA987093(Global_20744, 0);
	return num;
}

Vector3 func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x565B
{
	return uParam0 + ((uParam3 - uParam0) * { fParam6, fParam6, fParam6 });
}

float func_71(float fParam0, float fParam1, float fParam2) // Position - 0x5675
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_72() // Position - 0x569C
{
	int num;
	int num2;
	int num3;
	var unk;

	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
			if (Global_20756 == false)
				if (Global_7998 != _CHAR_DETONATEBOMB_2)
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						Global_22166 != 2;
	
		if (func_15(14))
			return false;
	
		if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
			return false;
	
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			if (!unk_0x9CA0AFAD60564183())
				if (unk_0x69799E0840A34AFB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
					return false;
	
		if (unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()) || unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && unk_0x834C960822A4683F() || Global_1919171))
			return false;
	
		if (Global_113418)
			return false;
	}

	if (Global_79248)
		return false;

	num3 = 0;
	num = unk_0xBF03D0685ADC793B();
	num2 = unk_0xBCF87EE3DC296C2A(num);

	if (num2 == 4 && num == 0 || unk_0x9CA0AFAD60564183())
	{
		num3 = 1;
	
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x4B423FAA24E8ABF0(unk) == joaat("seashark") || unk_0x4B423FAA24E8ABF0(unk) == joaat("seashark2") || unk_0x4B423FAA24E8ABF0(unk) == joaat("rhino") || unk_0x4B423FAA24E8ABF0(unk) == joaat("submersible") || unk_0x4B423FAA24E8ABF0(unk) == joaat("submersible2") || unk_0x4B423FAA24E8ABF0(unk) == joaat("toro"))
					num3 = 0;
			}
		}
	}

	if (Global_4543261 || num3 == 1)
		if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0 || Global_114370.f_14054.f_89)
			if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

void func_73() // Position - 0x58E5
{
	float num;

	num = func_69(uLocal_45, fLocal_48, Global_20773, -90f, 0f, 90f, 350f, false);

	if (Global_9487 == 0)
		if (unk_0x761778199FE1211C())
			if (!func_74())
				unk_0xBA290C9390813C9F(500f + (75f * num));
		else
			unk_0xBA290C9390813C9F(500f + (75f * num));

	if (num >= 1f)
	{
		func_1(1);
		Global_23200 = false;
		iLocal_16 = 0;
	}

	return;
}

BOOL func_74() // Position - 0x5961
{
	var unk;
	int num;

	unk = unk_0xBF03D0685ADC793B();
	num = unk_0xBCF87EE3DC296C2A(unk);

	if (num == 4)
		return true;

	return false;
}

void func_75(BOOL bParam0) // Position - 0x5985
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (unk_0x1226C55CA7D2269A() || func_76())
		unk_0xA306E6FD2A6558E6(9, &unk, &unk2, &unk3, &unk4);
	else
		unk_0xA306E6FD2A6558E6(126, &unk, &unk2, &unk3, &unk4);

	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(16);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(16);
		unk_0xE6B753D52F4CA222();
	}

	return;
}

BOOL func_76() // Position - 0x5A03
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

void func_77(BOOL bParam0) // Position - 0x5A19
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (unk_0x1226C55CA7D2269A() || func_76())
		unk_0xA306E6FD2A6558E6(6, &unk, &unk2, &unk3, &unk4);
	else
		unk_0xA306E6FD2A6558E6(6, &unk, &unk2, &unk3, &unk4);

	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(3);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(4);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(3);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(4);
		unk_0xE6B753D52F4CA222();
	}

	return;
}

void func_78(BOOL bParam0) // Position - 0x5A93
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (unk_0x1226C55CA7D2269A() || func_76())
		unk_0xA306E6FD2A6558E6(18, &unk, &unk2, &unk3, &unk4);
	else
		unk_0xA306E6FD2A6558E6(9, &unk, &unk2, &unk3, &unk4);

	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(2);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(2);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20794, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(2);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(2);
		unk_0xE6B753D52F4CA222();
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5B0F
{
	func_80();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_80() // Position - 0x5B28
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_81(character) && !func_15(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_81(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_81(eCharacter echParam0) // Position - 0x5C25
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x5C31
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x5C6E
{
	if (func_81(character))
		return func_84(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_84(eCharacter echParam0) // Position - 0x5C93
{
	return Global_2139[echParam0 /*29*/];
}

