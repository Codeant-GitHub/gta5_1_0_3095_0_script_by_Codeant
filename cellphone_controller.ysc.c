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
	BOOL bLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	BOOL bLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	BOOL bLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 4;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 4;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 4;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 4;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	eCharacter echLocal_79 = CHAR_MICHAEL;
	BOOL bLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	fLocal_37 = 0f;
	fLocal_38 = 0f;
	fLocal_84 = 0.95f;
	fLocal_85 = 0.07f;
	fLocal_86 = 0.755f;
	iLocal_95 = 9999;
	unk_0x51CC1333A10C4E09();
	Global_114312 = unk_0x1DD05E817C89C737();
	func_138();
	func_135();
	func_133();
	Global_20813.f_1 = 3;
	Global_20801 = false;
	Global_21027 = 0;
	Global_23201 = 0;
	unk.f_23 = 2;
	unk.f_56 = 16;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20813.f_1 > 3)
		{
			unk_0x66EFB3D6110055C4(0, 337, 1);
			unk_0x66EFB3D6110055C4(0, 353, 1);
			unk_0x66EFB3D6110055C4(0, 354, 1);
			unk_0x66EFB3D6110055C4(0, 357, 1);
			unk_0x66EFB3D6110055C4(0, 353, 1);
		}
	
		if (iLocal_93 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				iLocal_93 = 1;
				iLocal_95 = func_129(12728, -1);
			}
		}
		else if (unk_0x76CD105BCAC6EB9F())
		{
			if (iLocal_93 == 1)
			{
				switch (unk_0x8608526719A575EE())
				{
					case -1:
						unk_0xED8D0AF79CFA040D("gta5mkt_en");
						break;
				
					case 0:
						unk_0xED8D0AF79CFA040D("gta5mkt_en");
						break;
				
					case 1:
						unk_0xED8D0AF79CFA040D("gta5mkt_fr");
						break;
				
					case 2:
						unk_0xED8D0AF79CFA040D("gta5mkt_ge");
						break;
				
					case 3:
						unk_0xED8D0AF79CFA040D("gta5mkt_it");
						break;
				
					case 4:
						unk_0xED8D0AF79CFA040D("gta5mkt_sp");
						break;
				
					case 5:
						unk_0xED8D0AF79CFA040D("gta5mkt_pt");
						break;
				
					case 6:
						unk_0xED8D0AF79CFA040D("gta5mkt_pl");
						break;
				
					case 7:
						unk_0xED8D0AF79CFA040D("gta5mkt_ru");
						break;
				
					case 8:
						unk_0xED8D0AF79CFA040D("gta5mkt_ko");
						break;
				
					case 9:
						unk_0xED8D0AF79CFA040D("gta5mkt_ch");
						break;
				
					case 10:
						unk_0xED8D0AF79CFA040D("gta5mkt_ja");
						break;
				
					case 11:
						unk_0xED8D0AF79CFA040D("gta5mkt_me");
						break;
				
					case 12:
						unk_0xED8D0AF79CFA040D("gta5mkt_cn");
						break;
				}
			
				if (Global_2738587.f_5063)
					unk_0x9286D4F3BBB483D0(0, 1);
			
				iLocal_93 = 2;
			}
		
			if (iLocal_93 == 2)
			{
				iLocal_94 = unk_0x80CA040BF6D2FA31();
			
				switch (iLocal_94)
				{
					case 3:
						break;
				
					case 0:
						if (unk_0x6109CAB6F2F7BB46() > 0)
						{
							unk_0xEC552A25287441B8(0, &unk);
						
							if (unk.f_1 != iLocal_95)
								Global_4541717 = 1;
							else
								Global_4541717 = 0;
						}
					
						iLocal_93 = 3;
						break;
				
					case 1:
						break;
				
					case 4:
						Global_4541717 = 0;
						iLocal_93 = 3;
						break;
				}
			}
		}
		else
		{
			Global_4541717 = 0;
			iLocal_93 = 0;
		}
	
		if (unk_0x761778199FE1211C())
			if (unk_0xF6D8C7059C3C2495())
				if (Global_20813.f_1 == 6)
					Global_20813.f_1 = 3;
	
		if (func_128(146))
		{
			if (Global_79248 == false)
			{
				num = func_95(0, false, 119);
			
				if (num != 0)
					func_93(num);
				else
					func_92();
			
				func_88(0);
			}
		}
	
		if (Global_2738587.f_4649 == true)
			if (Global_20813.f_1 > 3)
				Global_20813.f_1 = 3;
	
		if (Global_79248 == true)
		{
			if (Global_20813.f_1 == 3)
			{
				if (IS_BIT_SET(Global_4542983, 15))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(3, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x8744D2E3FC95740E(&Global_4542983, 14);
					unk_0x8744D2E3FC95740E(&Global_4542983, 15);
				}
			
				if (IS_BIT_SET(Global_4542983, 16))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(17, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x8744D2E3FC95740E(&Global_4542983, 14);
					unk_0x8744D2E3FC95740E(&Global_4542983, 16);
					unk_0x8744D2E3FC95740E(&Global_4542983, 27);
				}
			
				if (IS_BIT_SET(Global_4542983, 27))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(23, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x8744D2E3FC95740E(&Global_4542983, 14);
					unk_0x8744D2E3FC95740E(&Global_4542983, 16);
					unk_0x8744D2E3FC95740E(&Global_4542983, 27);
				}
			
				if (IS_BIT_SET(Global_4542983, 29))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(1, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x8744D2E3FC95740E(&Global_4542983, 14);
					unk_0x8744D2E3FC95740E(&Global_4542983, 29);
				}
			}
		}
	
		if (Global_79248 == false)
		{
			if (IS_BIT_SET(Global_4542983, 11))
			{
				if (Global_20813.f_1 != 10 && Global_20813.f_1 != 9 || func_85() == false)
				{
					unk_0x8744D2E3FC95740E(&Global_4542983, 11);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
				}
			}
			else if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
			{
				if (func_85())
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 11);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
				}
			}
		
			if (IS_BIT_SET(Global_4542983, 12))
			{
				unk_0x8744D2E3FC95740E(&Global_4542983, 12);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
			}
		}
		else if (IS_BIT_SET(Global_4542983, 12))
		{
			if (Global_23229 == 0 || Global_23230 == false && !Global_23231)
			{
				unk_0x8744D2E3FC95740E(&Global_4542983, 12);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
			}
		}
		else if (Global_23231 || Global_23229 > 0 && Global_23230 == true)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 12);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
		}
	
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x00C58A2B1D95D090())
			{
				if (!IS_BIT_SET(Global_4542983, 19))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 19);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
				}
			}
			else if (IS_BIT_SET(Global_4542983, 19))
			{
				unk_0x8744D2E3FC95740E(&Global_4542983, 19);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 11);
			}
		}
	
		if (iLocal_91 == 0)
		{
			if (IS_BIT_SET(Global_8683, 25))
			{
				unk_0xDF7F16323520B858(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_90, -1);
				uLocal_88 = unk_0x1DD05E817C89C737();
				iLocal_91 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8683, 25))
		{
			unk_0xDF7F16323520B858(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_90, -1);
			iLocal_89 = unk_0x1DD05E817C89C737();
			iLocal_91 = 0;
			unk_0x1164A75E490C27B6(joaat("SP_CELLPHONE_SLEEP_TIME"), iLocal_90 + (iLocal_89 - uLocal_88), 1);
		}
	
		func_84();
		func_83();
		func_82();
		func_80();
		func_62();
		func_61();
		func_60();
	
		if (IS_BIT_SET(Global_8684, 21))
			if (!unk_0x56D84C8BC3CE3EF9())
				unk_0x8744D2E3FC95740E(&Global_8684, 21);
	
		if (IS_BIT_SET(Global_8683, 7))
		{
			func_55();
			unk_0x8744D2E3FC95740E(&Global_8683, 7);
		}
	
		if (IS_BIT_SET(Global_8683, 0))
			func_54();
	
		if (IS_BIT_SET(Global_4542983, 0))
			func_53();
	
		if (IS_BIT_SET(Global_8684, 11))
		{
			Global_9387 = 0;
		
			if (IS_BIT_SET(Global_8683, 25))
				Global_9387 = Global_9387 + 1;
		
			if (IS_BIT_SET(Global_4542983, 11))
				if (Global_79248 == false)
					Global_9387 = Global_9387 + 1;
		
			if (IS_BIT_SET(Global_4542983, 28))
				if (Global_79248 == true)
					Global_9387 = Global_9387 + 1;
		
			if (IS_BIT_SET(Global_4542983, 12))
				if (Global_79248 && Global_23230 || Global_23231)
					Global_9387 = Global_9387 + 1;
		
			if (IS_BIT_SET(Global_4542983, 19))
				Global_9387 = Global_9387 + 1;
		
			if (Global_9387 == 0)
			{
				unk_0x8744D2E3FC95740E(&Global_8684, 11);
				bLocal_39 = false;
			}
			else
			{
				bLocal_39 = true;
			}
		}
	
		if (!func_52())
		{
			if (!unk_0xB11671B812399BA2())
				if (Global_20813.f_1 == 3)
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || unk_0xAF078BC665CCACB9())
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								if (Global_79248)
									func_37();
								else
									func_37();
		
			if (Global_20813.f_1 == 4)
				if (IS_BIT_SET(Global_8684, 21))
					func_37();
		
			func_23();
		}
		else
		{
			func_16();
		}
	
		switch (Global_23201)
		{
			case 0:
				func_15();
			
				if (Global_23203 == 1)
					func_14();
				break;
		
			case 1:
				func_13();
				break;
		
			case 2:
				func_12();
				break;
		
			case 3:
				func_11();
				break;
		
			case 4:
				func_10();
				break;
		
			case 5:
				func_9();
				break;
		
			case 14:
				func_14();
				break;
		
			case 6:
				if (Global_23203 == 1)
					func_14();
			
				if (Global_23204 == 1)
				{
					Global_23201 = 9;
					Global_23204 = 0;
				}
				break;
		
			case 8:
				func_8();
				break;
		
			case 9:
				func_5();
				break;
		
			case 10:
				func_4();
				break;
		
			case 11:
				func_3();
				break;
		
			case 12:
				func_2();
				break;
		
			case 13:
				func_1();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x850
{
	iLocal_68 = unk_0x7522B8298919A016(Global_23205);

	switch (iLocal_68)
	{
		case 0:
			Global_23201 = 4;
			break;
	
		case 1:
			break;
	
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 15);
			func_14();
			break;
	}

	return;
}

void func_2() // Position - 0x894
{
	if (unk_0xE2935008625A1BE0(Global_23205))
		Global_23201 = 13;
	else
		func_14();

	return;
}

void func_3() // Position - 0x8B2
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		iLocal_66 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_64);
	}
	else
	{
		iLocal_65 = unk_0x1DD05E817C89C737();
		iLocal_66 = iLocal_65 - uLocal_63;
	}

	if (iLocal_66 > 3000)
		unk_0x65662724C6BC4810();

	if (iLocal_66 > 3200)
		Global_23201 = 6;

	return;
}

void func_4() // Position - 0x8F5
{
	iLocal_68 = unk_0x9FE1211A2B698F5D();

	switch (iLocal_68)
	{
		case 0:
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_64 = unk_0x7E3F74F641EE6B27();
			else
				uLocal_63 = unk_0x1DD05E817C89C737();
		
			Global_23201 = 11;
			SYSTEM::SETTIMERB(0);
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_5() // Position - 0x949
{
	Global_23206 = -1;

	if (Global_79248)
	{
		if (func_7())
			unk_0x0F7689113DC97142(*Global_4718592.f_176310, Global_4718592.f_176310.f_1);
	
		if (func_6(&(Global_2657921[unk_0x259BE71D8A81D4FA() /*463*/].f_442), 0))
			unk_0xF4575C44910A9DF9(1);
		else
			unk_0xF4575C44910A9DF9(0);
	}

	if (unk_0xBA0D235D624BE8BD(Global_23206))
	{
		Global_23201 = 10;
		unk_0xB661D6EC3F065818("CELL_278" /*Saving Photo to Gallery*/);
		unk_0x654AFEEF256E650F(1);
	}
	else
	{
		func_14();
	}

	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x9C1
{
	return IS_BIT_SET(*iParam0, iParam1);
}

BOOL func_7() // Position - 0x9CF
{
	return IS_BIT_SET(*Global_4718592.f_176243, 12);
}

void func_8() // Position - 0x9E4
{
	iLocal_68 = unk_0x62830FDE95255DE5(1);

	switch (iLocal_68)
	{
		case 0:
			Global_23201 = 9;
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_9() // Position - 0xA1E
{
	iLocal_68 = unk_0x39CD1674039F82E0(iLocal_69);

	switch (iLocal_68)
	{
		case 0:
			unk_0x4FA503A6757253A7(1, 1);
			Global_23201 = 6;
			break;
	
		case 1:
			break;
	
		case 2:
			if (iLocal_69 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 14);
				unk_0x4FA503A6757253A7(0, 0);
				unk_0xE379C4B49924485C();
				unk_0x464C2B9EE565B093();
				Global_23201 = 6;
			}
		
			if (Global_23201 == 5)
			{
				if (iLocal_69 == 0)
				{
					Global_23201 = 4;
					iLocal_69 = 1;
					unk_0x464C2B9EE565B093();
					SYSTEM::WAIT(0);
				}
			}
		
			if (Global_23201 == 5)
			{
				if (iLocal_69 == 1)
				{
					Global_23201 = 4;
					iLocal_69 = 2;
					unk_0x464C2B9EE565B093();
					SYSTEM::WAIT(0);
				}
			}
		
			if (Global_23201 == 5)
			{
				if (iLocal_69 == 2)
				{
					Global_23201 = 4;
					iLocal_69 = 3;
					unk_0x464C2B9EE565B093();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}

	return;
}

void func_10() // Position - 0xAD2
{
	if (unk_0xF8E79D92A7C6EFE0(iLocal_69))
	{
		Global_23201 = 5;
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 15);
		func_14();
	}

	return;
}

void func_11() // Position - 0xAF7
{
	iLocal_68 = unk_0xB6C7ECEA9936790D();

	switch (iLocal_68)
	{
		case 0:
			Global_23201 = 4;
			iLocal_69 = 2;
			break;
	
		case 1:
			break;
	
		case 2:
			Global_20813.f_1 = 3;
			func_14();
			break;
	}

	return;
}

void func_12() // Position - 0xB38
{
	if (unk_0x48B40FC81A85F44B())
		Global_23201 = 3;

	return;
}

void func_13() // Position - 0xB4B
{
	if (SYSTEM::TIMERB() > 0)
		Global_23201 = 2;

	return;
}

void func_14() // Position - 0xB5F
{
	unk_0x4FA503A6757253A7(0, 0);
	unk_0xE379C4B49924485C();
	unk_0x464C2B9EE565B093();
	unk_0x65662724C6BC4810();
	Global_23202 = false;
	Global_23203 = 0;
	Global_23204 = 0;
	Global_23201 = 0;
	return;
}

void func_15() // Position - 0xB89
{
	if (Global_23202)
	{
		Global_23201 = 1;
		unk_0x8744D2E3FC95740E(&Global_8684, 14);
		SYSTEM::SETTIMERB(0);
	}

	return;
}

BOOL func_16() // Position - 0xBA9
{
	var unk;

	if (func_22(2, Global_20780, 0) && !unk_0x7B035E8A1D320F1B(19) && !unk_0xF6D8C7059C3C2495())
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0xD130E7CDEE903624(unk_0x4A8C381C258A124D(), "Synched"))
			{
				unk = unk_0xFACCDE46E24AD056("CELL_ANTIH_A" /*ALERT!*/);
				unk_0xCCDB0041859B85A6("CELL_ANTIH" /*You haven't paid your phone bill. Phone use may be impeded.*/);
				unk_0x5C7E2225D7451992("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, unk, 0);
			}
		}
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			if (func_21(unk_0x4A8C381C258A124D()) || unk_0xF5327658CA9AF463(unk_0x4A8C381C258A124D()))
				if (unk_0x6D05C5731A838CB3(0, 25) || unk_0x6D05C5731A838CB3(0, 68))
					return false;
	
		Global_23225 = 0;
		Global_23226 = false;
	
		if (unk_0x8DB6B5124B5217E1() == Global_23223 && unk_0x8DB6B5124B5217E1() != -1)
		{
			Global_23225 = Global_23224;
			uLocal_72 = unk_0x1DD05E817C89C737();
			iLocal_74 = 0;
			iLocal_75 = 0;
		
			while (func_20(2, Global_20780) && iLocal_74 < 250 && Global_21033 == 0 && !unk_0x7B035E8A1D320F1B(19))
			{
				if (Global_9387 > 0)
					func_17();
			
				SYSTEM::WAIT(0);
				iLocal_73 = unk_0x1DD05E817C89C737();
				iLocal_74 = iLocal_73 - uLocal_72;
			
				if (Global_9387 > 0)
					func_17();
			}
		
			if (func_20(2, Global_20780) && Global_21033 == 0 && !unk_0x7B035E8A1D320F1B(19))
				iLocal_75 = 1;
		
			if (Global_21033 == 0)
			{
				if (iLocal_75 == 1)
				{
					Global_23226 = true;
					Global_23225 = Global_23224;
					Global_23225 == 1;
					Global_23225 == 2;
					Global_23225 == 3;
					Global_23225 == 0;
					Global_23225 == 4;
				}
				else
				{
					Global_23225 = 0;
				}
			}
			else
			{
				Global_23225 = 0;
			}
		}
		else
		{
			Global_23225 = 0;
		}
	
		if (!unk_0x7B035E8A1D320F1B(19))
		{
			return true;
		}
		else
		{
			Global_23225 = 0;
			Global_23226 = false;
			return false;
		}
	}

	return false;
}

void func_17() // Position - 0xD62
{
	int num;

	num = 255;

	if (Global_23231)
	{
		fLocal_85 = -0.055f;
		fLocal_86 = 0.745f;
		uLocal_81 = unk_0x897B441FF18ECBBB();
		fLocal_87 = (100f * fLocal_84) - (100f * uLocal_81);
		fLocal_82 = fLocal_85 + (fLocal_87 * 0.005f);
		fLocal_83 = fLocal_86 - (fLocal_87 * 0.005f);
	
		if (!func_19())
		{
			unk_0xA66AC5949E305457(1);
			unk_0xA4F67CEB594AE064(7);
		
			if (unk_0x761778199FE1211C())
				unk_0x82987E4477EBF250();
		
			unk_0x6D16B99FEB0AFFF1(uLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, num, 0);
			unk_0xA66AC5949E305457(0);
			unk_0xA4F67CEB594AE064(4);
		}
	}
	else
	{
		if (unk_0x761778199FE1211C())
			if (Global_2647042.f_1593)
				bLocal_36 = false;
			else if (IS_BIT_SET(Global_8683, 13))
				if (IS_BIT_SET(Global_4542983, 19))
					bLocal_36 = false;
				else
					bLocal_36 = true;
			else
				bLocal_36 = false;
		else if (Global_2647042.f_1593 || IS_BIT_SET(Global_8683, 13))
			bLocal_36 = true;
		else
			bLocal_36 = false;
	
		if (func_52())
			bLocal_36 = true;
	
		if (IS_BIT_SET(Global_4542983, 28))
		{
			num = 125;
		
			if (bLocal_36 == true)
				bLocal_36 = false;
		}
	
		if (unk_0x6DA5456258FF887A())
		{
			if (!unk_0xBE259DBA45F2996E())
			{
				if (!bLocal_36)
				{
					if (!func_18())
					{
						if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
						{
							if (!unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
							{
								unk_0xA4F67CEB594AE064(4);
							
								if (unk_0x761778199FE1211C() && Global_2647042.f_1593)
								{
									fLocal_85 = 0.165f;
									fLocal_86 = 0.755f;
								}
								else
								{
									fLocal_85 = 0.07f;
									fLocal_86 = 0.755f;
								}
							
								uLocal_81 = unk_0x897B441FF18ECBBB();
								fLocal_87 = (100f * fLocal_84) - (100f * uLocal_81);
								fLocal_82 = fLocal_85 + (fLocal_87 * 0.005f);
								fLocal_83 = fLocal_86 - (fLocal_87 * 0.005f);
							
								if (!func_19())
								{
									if (unk_0x761778199FE1211C())
										unk_0x82987E4477EBF250();
								
									if (Global_2647042.f_1593)
									{
										fLocal_37 = 0.09f;
										fLocal_38 = -0.25f;
									
										if (unk_0x761778199FE1211C())
										{
											if (IS_BIT_SET(Global_4542983, 28))
											{
											}
											else
											{
												unk_0x6D16B99FEB0AFFF1(uLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, num, 0);
											}
										}
										else
										{
											unk_0x6D16B99FEB0AFFF1(uLocal_35, fLocal_82 + fLocal_37, fLocal_83 + fLocal_38, 0.27f, 0.45f, 255, 255, 255, num, 0);
										}
									}
									else
									{
										unk_0x6D16B99FEB0AFFF1(uLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, num, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_18() // Position - 0xFB1
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_19() // Position - 0xFCE
{
	if (IS_BIT_SET(Global_8685, 3))
		return true;

	return false;
}

BOOL func_20(int iParam0, var uParam1) // Position - 0xFE6
{
	if (unk_0x6D05C5731A838CB3(iParam0, uParam1))
	{
		if (unk_0x761778199FE1211C())
			if (unk_0x66DA7155B68E7638() == 0)
				return false;
	
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
			return false;
		else
			return true;
	}

	return false;
}

int func_21(var uParam0) // Position - 0x102C
{
	int num;

	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			unk_0x23B29877D0BE9547(uParam0, &num, 1);
		
			if (num == joaat("WEAPON_SNIPERRIFLE") || num == joaat("WEAPON_HEAVYSNIPER") || num == joaat("WEAPON_MARKSMANRIFLE") || num == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return 1;
		}
	}

	return 0;
}

BOOL func_22(int iParam0, var uParam1, int iParam2) // Position - 0x1089
{
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, uParam1))
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

void func_23() // Position - 0x10FB
{
	switch (Global_20813.f_1)
	{
		case 4:
			if (IS_BIT_SET(Global_8684, 21))
			{
			}
			else
			{
				if (unk_0xF40767E41852FB72(Global_20810))
				{
				}
				else
				{
					if (!unk_0xF40767E41852FB72(Global_20810))
					{
						if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x97A5024CE91641F1("cellphone_flashhand");
						
							while (!unk_0xA6E4F7A73ABC4A76("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
							
								if (Global_9387 > 0)
									func_17();
							}
						
							if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
								Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							unk_0xFD49725F3FE7EE13("cellphone_flashhand");
						}
					}
				
					func_36(false);
				}
			
				if (Global_22176 || Global_22177)
				{
					if (!unk_0xF40767E41852FB72(Global_20810))
					{
						if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x97A5024CE91641F1("cellphone_flashhand");
						
							while (!unk_0xA6E4F7A73ABC4A76("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
							
								if (Global_9387 > 0)
									func_17();
							}
						
							if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
								Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							unk_0xFD49725F3FE7EE13("cellphone_flashhand");
						}
					}
				
					while (!unk_0xA0C7B98BCF1EEF9E(Global_20794) && Global_20796 == 0)
					{
						SYSTEM::WAIT(0);
					
						if (Global_9387 > 0)
							func_17();
					}
				
					if (Global_20796 == 0)
					{
						Global_20813.f_1 = 9;
						func_24();
					}
				}
				else
				{
					bLocal_80 = false;
				
					if (Global_79248 && Global_23228 || Global_1881898.f_5)
						bLocal_80 = true;
				
					if (Global_114370.f_14054[Global_20813 /*20*/].f_18 == 1 || Global_114370.f_14054[Global_20813 /*20*/].f_17 == 1 || bLocal_80 == true || Global_23225 != 0)
					{
						while (!unk_0xA0C7B98BCF1EEF9E(Global_20794) && Global_20796 == 0)
						{
							SYSTEM::WAIT(0);
						
							if (Global_9387 > 0)
								func_17();
						}
					
						if (Global_20796 == 0)
						{
							if (Global_20813.f_1 > 3)
							{
								Global_20813.f_1 = 6;
							
								if (Global_23225 == 0)
								{
									if (bLocal_80)
									{
									}
									else if (Global_79248 == false)
									{
										if (Global_114370.f_14054[Global_20813 /*20*/].f_17 == 1)
											func_86(1, 0, 1, false);
									}
								}
								else
								{
									Global_23225 == 3;
									Global_23225 == 1;
									Global_23225 == 2;
									Global_23225 == 4;
								}
							}
						}
					}
					else
					{
						while (!unk_0xA0C7B98BCF1EEF9E(Global_20794) && Global_20796 == 0)
						{
							SYSTEM::WAIT(0);
						
							if (Global_9387 > 0)
								func_17();
						}
					
						if (Global_20796 == 0)
							if (Global_20813.f_1 > 3)
								if (Global_22176 || Global_22177)
									Global_20813.f_1 = 9;
								else
									Global_20813.f_1 = 6;
					}
				}
			}
			break;
	}

	return;
}

void func_24() // Position - 0x1384
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
			func_35(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_33(Global_9288);
		
			if (Global_9288 == 1)
			{
				func_35(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_35(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
		
			if (Global_20801)
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21027 == 0)
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == true)
					if (Global_20801)
						func_32(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_32(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20801)
					func_32(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_32(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 17);
			}
		
			if (Global_79248)
			{
				func_30();
				unk_0x8744D2E3FC95740E(&Global_8685, 9);
				func_35(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_35(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_32(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20812 == 1)
			{
				func_29();
				func_35(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_22179)
				{
					unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON" /*~a~*/);
					unk_0x60D332F23943B34F(&Global_22181);
					unk_0xCFAD3D478C87321A();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_217" /*INCOMING CALL*/);
					func_28("CELL_217" /*INCOMING CALL*/);
					unk_0xE6B753D52F4CA222();
				}
				else if (func_27(Global_7998, Global_20813) == 0)
				{
					func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
			
				func_35(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_35(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114370.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_29();
			
				if (Global_22179)
				{
					unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON" /*~a~*/);
					unk_0x60D332F23943B34F(&Global_22181);
					unk_0xCFAD3D478C87321A();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_219" /*CONNECTED*/);
					func_28("CELL_219" /*CONNECTED*/);
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_22424)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_27(Global_7998, Global_20813) == 0)
					{
						func_35(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_35(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &unk, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
			
				func_35(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_25();
			break;
	
		default:
			break;
	}

	return;
}

void func_25() // Position - 0x1969
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20794))
	{
		func_26();
	
		if (Global_20812 == 1)
		{
			if (Global_20801)
				func_32(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_32(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_22213)
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8683, 20))
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20801)
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		}
		else
		{
			func_32(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8683, 17);
		
			if (IS_BIT_SET(Global_8683, 20))
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20756)
					func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_26() // Position - 0x1AF7
{
	if (Global_79248)
	{
		func_32(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8683, 17);
	}

	return;
}

int func_27(eCharacter echParam0, eCharacter echParam1) // Position - 0x1B28
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[echParam0 /*29*/].f_24[echParam1];
}

void func_28(char* sParam0) // Position - 0x1B52
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_29() // Position - 0x1B64
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

void func_30() // Position - 0x1DDB
{
	if (Global_79248)
	{
		if (func_31() == 0)
			return;
	
		func_32(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 17);
	}

	return;
}

int func_31() // Position - 0x1E17
{
	return 0;
}

void func_32(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x1E20
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
		func_28(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_28(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_28(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_28(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_28(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_33(int iParam0) // Position - 0x1ED3
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
	
		if (func_34(14))
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
								func_28(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(num2);
								unk_0xE6B753D52F4CA222();
							}
						
							if (Global_2695946)
								if (num == 14)
									func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
						
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
							
								func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
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
								
									func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
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
								
									func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								unk_0x88F483FBD433696A(Global_20794, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(i);
								unk_0x330108B080A2132F(Global_8690[num /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_28(&Global_8690[num /*15*/]);
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
								func_28(&Global_8690[num /*15*/]);
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
								func_28(&Global_8690[num /*15*/]);
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
								func_28(&Global_8690[num /*15*/]);
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
								func_28(&Global_8690[num /*15*/]);
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8690[num /*15*/].f_10 == 57 && num == 23)
							{
								value3 = 0;
								value3 = Global_1881898.f_1;
								func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_32(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8690[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8690[num /*15*/], 0, 0, 0, 0);
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

BOOL func_34(int iParam0) // Position - 0x246D
{
	return Global_43922 == iParam0;
}

void func_35(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x247B
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

void func_36(BOOL bParam0) // Position - 0x24DE
{
	if (bParam0)
		if (Global_20813.f_1 == 9)
			Global_21025 = true;
	else
		Global_21025 = false;

	return;
}

void func_37() // Position - 0x2500
{
	if (func_16() || IS_BIT_SET(Global_8683, 8))
	{
		unk_0x8744D2E3FC95740E(&Global_8683, 8);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				if (func_44())
				{
				}
				else if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					if (IS_BIT_SET(Global_8684, 21))
						unk_0x8744D2E3FC95740E(&Global_8684, 21);
				
					if (Global_21033 == 1)
						Global_21033 = 0;
				
					switch (Global_20813.f_1)
					{
						case 3:
							Global_20813.f_1 = 4;
						
							if (iLocal_92 == 0)
							{
								func_38();
								iLocal_92 = 1;
							}
							break;
					
						default:
							break;
					}
				
					Global_21023 = 1;
				}
			}
		}
	}

	return;
}

void func_38() // Position - 0x25A2
{
	if (Global_4541717 == 1)
	{
		if (!func_43())
			return;
	
		if (func_39(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x38640D2193CB547F(803) == 1)
			{
				unk_0xCCDB0041859B85A6("CELL_EMAIL_EVENT" /*You have received an Eyefind message. Check your Eyefind inbox from the GTAO Eyefind website via a laptop or your cellphone's Internet application.*/);
				unk_0x25ABFB435E16C7D9(1, 1);
			}
			else
			{
				unk_0x38640D2193CB547F(803) != 1;
			}
		}
	}

	return;
}

BOOL func_39(int iParam0) // Position - 0x25F0
{
	int num;
	var unk;

	if (unk_0x62B038F95CEA3FE9() == 0)
		return false;

	num = -1;

	if (iParam0 != unk_0x259BE71D8A81D4FA())
	{
		num = iParam0;
	
		if (num == -1)
			return false;
	}

	if (unk_0x0BA1A956D36B210F() || func_42())
		if (unk_0x9A9677D7F3615A86(0, num))
			if (unk_0xD25970CBEE074E07())
				return true;

	if (unk_0x1226C55CA7D2269A() || func_41())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			if (unk_0x521B8DE052C56837(0, -3, 1) || unk_0x9A9677D7F3615A86(1, -1))
				return true;
		}
		else
		{
			unk = { func_40(iParam0) };
		
			if (unk_0x9A9677D7F3615A86(0, -1) || unk_0x9A9677D7F3615A86(1, -1) && unk_0xEDD63461767A518C(&unk))
				return true;
		}
	}

	if (unk_0x761778199FE1211C())
		if (unk_0x9A9677D7F3615A86(0, num))
			if (unk_0xD25970CBEE074E07())
				return true;

	return false;
}

struct<13> func_40(int iParam0) // Position - 0x26C9
{
	var unk;

	unk_0x464E131FD68B953F(iParam0, &unk, 13);
	return unk;
}

BOOL func_41() // Position - 0x26E0
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

BOOL func_42() // Position - 0x26F6
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_43() // Position - 0x270C
{
	if (func_42())
		if (unk_0xB0DF27929B02C57E() == 0)
			return true;
	else if (func_41())
		if (unk_0xB0DF27929B02C57E() == 0)
			return true;
	else if (unk_0x761778199FE1211C())
		if (unk_0xD25970CBEE074E07())
			return true;

	return false;
}

BOOL func_44() // Position - 0x2753
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x11BF418D1AFD7970(unk_0x4A8C381C258A124D(), 0) || unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 1)
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x27BE
{
	if (func_34(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2860
{
	func_47();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_47() // Position - 0x2879
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_48(character) && !func_34(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_48(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_48(eCharacter echParam0) // Position - 0x2976
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x2982
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x29BF
{
	if (func_48(character))
		return func_51(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_51(eCharacter echParam0) // Position - 0x29E4
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_52() // Position - 0x29F3
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_53() // Position - 0x2A1A
{
	var unk;
	int num;
	var unk17;
	var unk33;
	var unk49;
	var unk65;

	unk_0x8744D2E3FC95740E(&Global_4542983, 0);

	if (Global_23227 != 0)
	{
		if (unk_0xCF3FA9D6B87D2277(Global_23227))
		{
			if (unk_0x445B6F53EA9E6A6F(Global_23227))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x008C0EB38E4459EE(Global_23227), 64);
				Global_23235[Global_23233] = Global_23227;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
				Global_23235[Global_4542967] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
			Global_23235[Global_4542967] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xFACCDE46E24AD056(&(Global_2139[Global_4541718[Global_4542967 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_23235[Global_4542967] = 0;
	}

	if (unk_0xD6F9DEE4765092A9(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	else if (unk_0x1B79E937E91F40C3(&unk, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);

	if (Global_4541718[Global_4542967 /*104*/].f_32 == 4 || Global_4541718[Global_4542967 /*104*/].f_32 == 5 || Global_4541718[Global_4542967 /*104*/].f_32 == 6 || Global_4541718[Global_4542967 /*104*/].f_32 == 7 || Global_4541718[Global_4542967 /*104*/].f_32 == 8 || Global_4541718[Global_4542967 /*104*/].f_32 == 9 || Global_4541718[Global_4542967 /*104*/].f_32 == 10 || Global_4541718[Global_4542967 /*104*/].f_32 == 11)
	{
		num = 0;
	
		switch (Global_4541718[Global_4542967 /*104*/].f_49)
		{
			case 1:
				unk_0xCCDB0041859B85A6("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				unk_0xCCDB0041859B85A6("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				unk_0xCCDB0041859B85A6("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				unk_0xCCDB0041859B85A6("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				unk_0xCCDB0041859B85A6("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				unk_0xCCDB0041859B85A6("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				unk_0xCCDB0041859B85A6("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				unk_0xCCDB0041859B85A6("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				unk_0xCCDB0041859B85A6("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		unk_0xACF853FB3F6EA7D4(&Global_4541718[Global_4542967 /*104*/]);
	
		while (num < Global_4541718[Global_4542967 /*104*/].f_49)
		{
			switch (Global_4541718[Global_4542967 /*104*/].f_32)
			{
				case 4:
					unk_0xACF853FB3F6EA7D4(&Global_2738587.f_1762[num /*4*/]);
					break;
			
				case 5:
					unk_0xACF853FB3F6EA7D4(&Global_1927727[num /*4*/]);
					break;
			
				case 6:
					unk_0xACF853FB3F6EA7D4(&Global_1927768[num /*4*/]);
					break;
			
				case 7:
					unk_0xACF853FB3F6EA7D4(&Global_1927789[num /*4*/]);
					break;
			
				case 8:
					unk_0xACF853FB3F6EA7D4(&Global_1927806[num /*4*/]);
					break;
			
				case 9:
					unk_0xACF853FB3F6EA7D4(&Global_1927819[num /*4*/]);
					break;
			
				case 10:
					unk_0xACF853FB3F6EA7D4(&Global_1927832[num /*4*/]);
					break;
			
				case 11:
					unk_0xACF853FB3F6EA7D4(&Global_1927845[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0xFACCDE46E24AD056(&(Global_2139[Global_4541718[Global_4542967 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 2, &unk17, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 1);
		Global_23224 = 1;
		Global_23223 = iLocal_62;
		Global_23227 = 0;
	}
	else
	{
		unk_0xCCDB0041859B85A6(&Global_4541718[Global_4542967 /*104*/]);
	
		switch (Global_4541718[Global_4542967 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_33));
			
				if (Global_4541718[Global_4542967 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_67), "NULL"))
					unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_67));
			
				if (Global_4541718[Global_4542967 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_67), "NULL") && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_83), "NULL"))
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_4541718[Global_4542967 /*104*/].f_67)))
						unk_0xACF853FB3F6EA7D4(&(Global_4541718[Global_4542967 /*104*/].f_67));
					else
						unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_67));
				
					if (unk_0x6BA487C862DB8DDF(&(Global_4541718[Global_4542967 /*104*/].f_83)))
						unk_0xACF853FB3F6EA7D4(&(Global_4541718[Global_4542967 /*104*/].f_83));
					else
						unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_83));
				}
				break;
		
			case 2:
				unk_0x511D14ED2DA887E1(Global_4541718[Global_4542967 /*104*/].f_49);
				break;
		
			case 3:
				unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_33));
				unk_0x511D14ED2DA887E1(Global_4541718[Global_4542967 /*104*/].f_49);
			
				if (Global_4541718[Global_4542967 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_67), "NULL"))
					unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_67));
			
				if (Global_4541718[Global_4542967 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_67), "NULL") && !unk_0x1B79E937E91F40C3(&(Global_4541718[Global_4542967 /*104*/].f_83), "NULL"))
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_4541718[Global_4542967 /*104*/].f_67)))
						unk_0xACF853FB3F6EA7D4(&(Global_4541718[Global_4542967 /*104*/].f_67));
					else
						unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_67));
				
					if (unk_0x6BA487C862DB8DDF(&(Global_4541718[Global_4542967 /*104*/].f_83)))
						unk_0xACF853FB3F6EA7D4(&(Global_4541718[Global_4542967 /*104*/].f_83));
					else
						unk_0x60D332F23943B34F(&(Global_4541718[Global_4542967 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_4541718[Global_4542967 /*104*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk33, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&unk33, &Global_9371, 64);
			TEXT_LABEL_APPEND_STRING(&unk33, "</C>", 64);
			iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 2, &unk33, 0);
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 1);
			Global_23224 = 1;
			Global_23223 = iLocal_62;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk49, unk_0xFACCDE46E24AD056(&(Global_2139[Global_4541718[Global_4542967 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_4541718[Global_4542967 /*104*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&unk65, &unk49, 64);
				iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 2, &unk65, 0);
			}
			else
			{
				iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 2, &unk49, 0);
			}
		
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542983, 1);
			Global_23224 = 1;
			Global_23223 = iLocal_62;
			Global_23227 = 0;
		}
	}

	Global_4541718[Global_4542967 /*104*/].f_16 = iLocal_62;
	return;
}

void func_54() // Position - 0x3064
{
	var unk;
	var unk17;
	var unk33;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xFACCDE46E24AD056(&(Global_2139[Global_9369 /*29*/].f_7)), 64);

	if (Global_9388 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0xFACCDE46E24AD056(&Global_9293[1 /*6*/]), 64);
		unk33 = unk_0xFACCDE46E24AD056("CELL_253" /*New Contact*/);
		unk_0x5C7E2225D7451992(&unk, &unk, 0, 3, unk33, &unk17);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255" /*New Contact: ~n~~a~*/);
		unk_0xACF853FB3F6EA7D4(&Global_9293[1 /*6*/]);
		unk_0x5C7E2225D7451992(&unk, &unk, 0, 3, "", 0);
	}

	unk_0x8744D2E3FC95740E(&Global_8683, 0);
	return;
}

void func_55() // Position - 0x30E1
{
	if (IS_BIT_SET(Global_8683, 1))
	{
		func_58();
		func_56();
		Global_114370.f_14054[Global_20813 /*20*/].f_18 = 1;
	
		if (unk_0x76CD105BCAC6EB9F())
		{
			uLocal_51[Global_20813] = unk_0x7E3F74F641EE6B27();
			uLocal_41[Global_20813] = 1;
		}
		else if (!IS_BIT_SET(Global_8683, 10))
		{
			uLocal_46[Global_20813] = unk_0x1DD05E817C89C737();
			uLocal_41[Global_20813] = 1;
		}
		else
		{
			uLocal_46[0] = unk_0x1DD05E817C89C737();
			uLocal_46[2] = unk_0x1DD05E817C89C737();
			uLocal_46[1] = unk_0x1DD05E817C89C737();
			uLocal_41[0] = 1;
			uLocal_41[2] = 1;
			uLocal_41[1] = 1;
		}
	
		unk_0x8744D2E3FC95740E(&Global_8683, 1);
	}

	return;
}

void func_56() // Position - 0x317A
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79248)
		Global_114370.f_14054[3 /*20*/].f_10 = func_129(1198, -1);

	if (Global_114370.f_14054[Global_20813 /*20*/].f_10 == 1)
		if (!func_57(0))
			unk_0x97A041099E92C69F(0, 2000, 100);

	return;
}

BOOL func_57(int iParam0) // Position - 0x31C6
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

void func_58() // Position - 0x321D
{
	var unk;
	int num;
	int num2;
	var unk17;
	var unk33;
	var unk49;
	var unk65;

	if (Global_23227 != 0)
	{
		if (unk_0xCF3FA9D6B87D2277(Global_23227))
		{
			if (unk_0x445B6F53EA9E6A6F(Global_23227))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x008C0EB38E4459EE(Global_23227), 64);
				Global_23235[Global_23233] = Global_23227;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
				Global_23235[Global_23233] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
			Global_23235[Global_23233] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xFACCDE46E24AD056(&(Global_2139[Global_114370.f_14144[Global_23233 /*104*/].f_17 /*29*/].f_7)), 64);
	
		if (Global_114370.f_14144[Global_23233 /*104*/].f_17 == CHAR_COMIC_STORE)
			TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xFACCDE46E24AD056("CELL_COMIC_P" /*CHAR_COMIC_STORE*/), 64);
	
		Global_23235[Global_23233] = 0;
	}

	if (unk_0xD6F9DEE4765092A9(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	else if (unk_0x1B79E937E91F40C3(&unk, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);

	if (Global_114370.f_14144[Global_23233 /*104*/].f_32 == 4 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 5 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 6 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 7 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 8 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 9 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 10 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 11 || Global_114370.f_14144[Global_23233 /*104*/].f_32 == 12)
	{
		num = 0;
		num2 = func_59(9, Global_114370.f_14144[Global_23233 /*104*/].f_49);
	
		switch (num2)
		{
			case 1:
				unk_0xCCDB0041859B85A6("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				unk_0xCCDB0041859B85A6("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				unk_0xCCDB0041859B85A6("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				unk_0xCCDB0041859B85A6("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				unk_0xCCDB0041859B85A6("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				unk_0xCCDB0041859B85A6("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				unk_0xCCDB0041859B85A6("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				unk_0xCCDB0041859B85A6("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				unk_0xCCDB0041859B85A6("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		unk_0xACF853FB3F6EA7D4(&Global_114370.f_14144[Global_23233 /*104*/]);
	
		while (num < num2)
		{
			switch (Global_114370.f_14144[Global_23233 /*104*/].f_32)
			{
				case 4:
					unk_0xACF853FB3F6EA7D4(&Global_2738587.f_1762[num /*4*/]);
					break;
			
				case 5:
					unk_0xACF853FB3F6EA7D4(&Global_1927727[num /*4*/]);
					break;
			
				case 6:
					unk_0xACF853FB3F6EA7D4(&Global_1927768[num /*4*/]);
					break;
			
				case 7:
					unk_0xACF853FB3F6EA7D4(&Global_1927789[num /*4*/]);
					break;
			
				case 8:
					unk_0xACF853FB3F6EA7D4(&Global_1927806[num /*4*/]);
					break;
			
				case 9:
					unk_0xACF853FB3F6EA7D4(&Global_1927819[num /*4*/]);
					break;
			
				case 10:
					unk_0xACF853FB3F6EA7D4(&Global_1927832[num /*4*/]);
					break;
			
				case 11:
					unk_0xACF853FB3F6EA7D4(&Global_1927845[num /*4*/]);
					break;
			
				case 12:
					unk_0xACF853FB3F6EA7D4(&Global_1927858[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0xFACCDE46E24AD056(&(Global_2139[Global_114370.f_14144[Global_23233 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 1, &unk17, 0);
		Global_23224 = 3;
		Global_23223 = iLocal_62;
		Global_23227 = 0;
	}
	else
	{
		unk_0xCCDB0041859B85A6(&Global_114370.f_14144[Global_23233 /*104*/]);
	
		switch (Global_114370.f_14144[Global_23233 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_33));
			
				if (Global_114370.f_14144[Global_23233 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_67), "NULL"))
					unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
			
				if (Global_114370.f_14144[Global_23233 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_67), "NULL") && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_83), "NULL"))
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_114370.f_14144[Global_23233 /*104*/].f_67)))
						unk_0xACF853FB3F6EA7D4(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
					else
						unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
				
					if (unk_0x6BA487C862DB8DDF(&(Global_114370.f_14144[Global_23233 /*104*/].f_83)))
						unk_0xACF853FB3F6EA7D4(&(Global_114370.f_14144[Global_23233 /*104*/].f_83));
					else
						unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_83));
				}
				break;
		
			case 2:
				unk_0x511D14ED2DA887E1(Global_114370.f_14144[Global_23233 /*104*/].f_49);
				break;
		
			case 3:
				unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_33));
				unk_0x511D14ED2DA887E1(Global_114370.f_14144[Global_23233 /*104*/].f_49);
			
				if (Global_114370.f_14144[Global_23233 /*104*/].f_66 == 1 && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_67), "NULL"))
					unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
			
				if (Global_114370.f_14144[Global_23233 /*104*/].f_66 == 2 && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_67), "NULL") && !unk_0x1B79E937E91F40C3(&(Global_114370.f_14144[Global_23233 /*104*/].f_83), "NULL"))
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_114370.f_14144[Global_23233 /*104*/].f_67)))
						unk_0xACF853FB3F6EA7D4(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
					else
						unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_67));
				
					if (unk_0x6BA487C862DB8DDF(&(Global_114370.f_14144[Global_23233 /*104*/].f_83)))
						unk_0xACF853FB3F6EA7D4(&(Global_114370.f_14144[Global_23233 /*104*/].f_83));
					else
						unk_0x60D332F23943B34F(&(Global_114370.f_14144[Global_23233 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_114370.f_14144[Global_23233 /*104*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk33, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&unk33, &Global_9371, 64);
			TEXT_LABEL_APPEND_STRING(&unk33, "</C>", 64);
			iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 1, &unk33, 0);
			Global_23224 = 3;
			Global_23223 = iLocal_62;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk49, unk_0xFACCDE46E24AD056(&(Global_2139[Global_114370.f_14144[Global_23233 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_114370.f_14144[Global_23233 /*104*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&unk65, &unk49, 64);
				iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 1, &unk65, 0);
			}
			else
			{
				iLocal_62 = unk_0x5C7E2225D7451992(&unk, &unk, 0, 1, &unk49, 0);
			}
		
			Global_23224 = 3;
			Global_23223 = iLocal_62;
			Global_23227 = 0;
		}
	}

	Global_114370.f_14144[Global_23233 /*104*/].f_16 = iLocal_62;
	return;
}

int func_59(int iParam0, int iParam1) // Position - 0x38E9
{
	if (iParam0 < iParam1)
		return iParam0;
	else if (iParam1 < iParam0)
		return iParam1;

	return iParam0;
}

void func_60() // Position - 0x390E
{
	if (IS_BIT_SET(Global_8683, 19))
	{
		unk_0x8744D2E3FC95740E(&Global_8683, 19);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_114370.f_14054[3 /*20*/].f_18 = 0;
		Global_114370.f_14054[3 /*20*/].f_17 = 0;
	}

	return;
}

void func_61() // Position - 0x3946
{
	if (uLocal_41[Global_20813] == 1)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			iLocal_61 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_51[Global_20813]);
		}
		else
		{
			uLocal_56[Global_20813] = unk_0x1DD05E817C89C737();
			iLocal_61 = uLocal_56[Global_20813] - uLocal_46[Global_20813];
		}
	
		if (iLocal_61 > 300000)
		{
			Global_114370.f_14054[Global_20813 /*20*/].f_18 = 0;
			Global_114370.f_14054[Global_20813 /*20*/].f_17 = 0;
			uLocal_41[Global_20813] = 0;
		}
	}

	return;
}

void func_62() // Position - 0x39BF
{
	int num;

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79248 == false)
	{
		if (!func_52())
		{
			if (iLocal_67 == 0)
			{
				if (Global_114370.f_14144[21 /*104*/].f_24 != 0 || Global_114370.f_14144[22 /*104*/].f_24 != 0 || Global_114370.f_14144[23 /*104*/].f_24 != 0)
				{
					switch (Global_20813)
					{
						case CHAR_MICHAEL:
							if (Global_114370.f_14144[21 /*104*/].f_24 != 0)
							{
								iLocal_40 = 21;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						case CHAR_FRANKLIN:
							if (Global_114370.f_14144[22 /*104*/].f_24 != 0)
							{
								iLocal_40 = 22;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						case CHAR_TREVOR:
							if (Global_114370.f_14144[23 /*104*/].f_24 != 0)
							{
								iLocal_40 = 23;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						default:
							break;
					}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_67 = 0;
				num = 0;
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (iLocal_40 == 21 && Global_20813 != CHAR_MICHAEL)
					num = 1;
			
				if (iLocal_40 == 22 && Global_20813 != CHAR_FRANKLIN)
					num = 1;
			
				if (iLocal_40 == 23 && Global_20813 != CHAR_TREVOR)
					num = 1;
			
				if (Global_114370.f_14144[iLocal_40 /*104*/].f_24 != 0 && num == 0)
					if (!func_34(14))
						if (_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(Global_114370.f_14144[iLocal_40 /*104*/].f_17, &Global_114370.f_14144[iLocal_40 /*104*/], Global_114370.f_14144[iLocal_40 /*104*/].f_24, Global_114370.f_14144[iLocal_40 /*104*/].f_25, Global_114370.f_14144[iLocal_40 /*104*/].f_26, Global_114370.f_14144[iLocal_40 /*104*/].f_29, 0, true, Global_114370.f_14144[iLocal_40 /*104*/].f_31, Global_114370.f_14144[iLocal_40 /*104*/].f_30))
							Global_114370.f_14144[iLocal_40 /*104*/].f_24 = 0;
			}
		
			if (iLocal_78 == 0)
			{
				if (Global_9359[Global_20813])
				{
					iLocal_78 = 1;
					echLocal_79 = Global_20813;
				
					if (unk_0x76CD105BCAC6EB9F())
						uLocal_76 = unk_0x7E3F74F641EE6B27();
					else
						uLocal_70 = unk_0x1DD05E817C89C737();
				}
			}
			else
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_77 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_76);
				}
				else
				{
					iLocal_71 = unk_0x1DD05E817C89C737();
					iLocal_77 = iLocal_71 - uLocal_70;
				}
			
				if (iLocal_77 > 7000)
				{
					if (_CAN_ENTER_FREEROAM_STATE(0))
					{
						Global_9293[1 /*6*/] = { Global_9342[Global_20813 /*4*/] };
						Global_9369 = Global_9364[Global_20813];
						Global_9359[Global_20813] = false;
						iLocal_78 = 0;
					}
				}
			
				if (echLocal_79 != Global_20813)
					iLocal_78 = 0;
			}
		}
	}

	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x3C2B
{
	return func_64(iParam0, Global_43922);
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x3C3C
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

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x3E1D
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	unk_0x8744D2E3FC95740E(&Global_8683, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_67(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9390 = iParam6;
			Global_9293[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9370 = echParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 1);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 7);
		}
	
		return true;
	}

	return false;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x3EAC
{
	return Global_2139[character /*29*/].f_3;
}

int func_67(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x3EBF
{
	int num;
	int num2;

	iParam13 > 99;
	unk_0x1B79E937E91F40C3(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_20813 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20813 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20813 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
				return 0;
	
		if (Global_114370.f_14054[Global_20813 /*20*/].f_17 == 1)
			return 0;
	
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
			return 0;
	
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_79() == 0)
	{
		func_77();
		return 0;
	}

	func_76(Global_23233);
	TEXT_LABEL_ASSIGN_STRING(&Global_114370.f_14144[Global_23233 /*104*/], sParam1, 64);
	Global_114370.f_14144[Global_23233 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114370.f_14144[Global_23233 /*104*/].f_24 = iParam2;
	}

	Global_114370.f_14144[Global_23233 /*104*/].f_25 = iParam7;
	Global_114370.f_14144[Global_23233 /*104*/].f_26 = iParam8;
	Global_114370.f_14144[Global_23233 /*104*/].f_29 = iParam9;
	Global_114370.f_14144[Global_23233 /*104*/].f_30 = iParam12;
	Global_114370.f_14144[Global_23233 /*104*/].f_31 = iParam11;
	Global_114370.f_14144[Global_23233 /*104*/].f_28 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14144[Global_23233 /*104*/].f_33), sParam4, 64);
	Global_114370.f_14144[Global_23233 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14144[Global_23233 /*104*/].f_50), sParam5, 64);
	Global_114370.f_14144[Global_23233 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14144[Global_23233 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_14144[Global_23233 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8683, 10))
	{
		Global_114370.f_14144[Global_23233 /*104*/].f_99[0] = 1;
		Global_114370.f_14144[Global_23233 /*104*/].f_99[1] = 1;
		Global_114370.f_14144[Global_23233 /*104*/].f_99[2] = 1;
		Global_9389 = 4;
		func_75(0);
		func_75(2);
		func_75(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114370.f_14144[Global_23233 /*104*/].f_99[Global_20813] = 1;
				break;
		
			case 0:
				Global_114370.f_14144[Global_23233 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_114370.f_14144[Global_23233 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_114370.f_14144[Global_23233 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_20813)
			{
				case CHAR_MICHAEL:
					func_75(0);
					Global_9389 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_75(1);
					Global_9389 = 1;
					break;
			
				case CHAR_TREVOR:
					func_75(2);
					Global_9389 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_75(3);
					Global_9389 = 3;
					break;
			
				default:
					Global_9389 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8683, 10))
		{
			Global_114370.f_14054[0 /*20*/].f_17 = 1;
			Global_114370.f_14054[1 /*20*/].f_17 = 1;
			Global_114370.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114370.f_14054[Global_20813 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114370.f_14054[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114370.f_14054[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114370.f_14054[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23235[Global_23233] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20756)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20813)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20802, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_74())
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20802, 1);
	}

	if (!Global_21026)
	{
		if (Global_20813.f_1 == 6)
		{
			func_35(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_33(1);
			func_35(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20793), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1970578 != -1 && echParam0 == Global_1970578)
		num2 = 1;

	func_68(echParam0, sParam1, num2, func_73(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_68(eCharacter echParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x439A
{
	eCharacter character;

	if (!func_69())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = iParam3;
	character.f_6 = Global_1970561.f_7;
	character.f_7 = Global_1970561.f_8;
	character.f_8 = Global_1970561.f_9;
	character.f_9 = Global_1970561.f_10;
	character.f_10 = Global_1970561.f_11;
	character.f_11 = Global_1970561.f_12;
	character.f_12 = Global_1970561.f_13;
	character.f_13 = Global_1970561.f_14;
	unk_0x7114D68882DD5DFB(&character);

	if (bParam2)
		Global_1970578 = -1;

	return;
}

BOOL func_69() // Position - 0x4435
{
	if (!Global_262145.f_29155)
		return false;

	if (!Global_79248)
		return false;

	if (unk_0x259BE71D8A81D4FA() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_70(unk_0x259BE71D8A81D4FA()))
		return false;

	if (IS_BIT_SET(Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_1, 7))
		return false;

	if (unk_0x834C960822A4683F())
		return false;

	return true;
}

BOOL func_70(int iParam0) // Position - 0x4498
{
	return func_71(iParam0, 20);
}

BOOL func_71(int iParam0, int iParam1) // Position - 0x44A8
{
	return IS_BIT_SET(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x44C0
{
	return -1;
}

int func_73(int iParam0) // Position - 0x44C9
{
	return Global_1845263[iParam0 /*877*/].f_205.f_6;
}

BOOL func_74() // Position - 0x44DE
{
	return Global_1575079;
}

void func_75(int iParam0) // Position - 0x44EA
{
	var unk;
	var unk2;

	unk = Global_114370.f_14054[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_76(int iParam0) // Position - 0x4509
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	int num;
	var unk5;

	unk = unk_0x4BA5A16068183C5E();
	unk2 = unk_0x18E502A71E28968C();
	unk3 = unk_0x5295501D0862870D();
	unk4 = unk_0xB12880C92EA6EE15();
	num = unk_0x8825A6E0A30BDCB8() + 1;
	unk5 = unk_0x7598FE4545010A75();
	Global_114370.f_14144[iParam0 /*104*/].f_18 = unk;
	Global_114370.f_14144[iParam0 /*104*/].f_18.f_1 = unk2;
	Global_114370.f_14144[iParam0 /*104*/].f_18.f_2 = unk3;
	Global_114370.f_14144[iParam0 /*104*/].f_18.f_3 = unk4;
	Global_114370.f_14144[iParam0 /*104*/].f_18.f_4 = num;
	Global_114370.f_14144[iParam0 /*104*/].f_18.f_5 = unk5;
	return;
}

void func_77() // Position - 0x459B
{
	int num;
	int num2;
	int num3;

	if (Global_79248)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_23233 = 34;
	Global_114370.f_14144[Global_23233 /*104*/].f_18 = -1;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_1 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_2 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_3 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_78(Global_114370.f_14144[num3 /*104*/].f_18, Global_114370.f_14144[Global_23233 /*104*/].f_18))
			Global_23233 = num3;
	
		num3 = num3 + 1;
	}

	Global_114370.f_14144[Global_23233 /*104*/].f_24 = 1;
	return;
}

BOOL func_78(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x4666
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

int func_79() // Position - 0x4751
{
	int num;
	int num2;
	int i;

	if (Global_79248)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_114370.f_14144[i /*104*/].f_24 == 0)
		{
			Global_23233 = i;
			return 1;
		}
	}

	i = num;
	Global_23233 = 34;
	Global_114370.f_14144[Global_23233 /*104*/].f_18 = -1;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_1 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_2 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_3 = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114370.f_14144[i /*104*/].f_24 == 0 || Global_114370.f_14144[i /*104*/].f_24 == 1)
			if (!func_78(Global_114370.f_14144[i /*104*/].f_18, Global_114370.f_14144[Global_23233 /*104*/].f_18))
				Global_23233 = i;
	
		Global_114370.f_14144[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23233 == 34)
		return 0;

	Global_114370.f_14144[Global_23233 /*104*/].f_99[0] = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_99[1] = 0;
	Global_114370.f_14144[Global_23233 /*104*/].f_99[2] = 0;
	return 1;
}

void func_80() // Position - 0x48B9
{
	if (IS_BIT_SET(Global_8683, 6))
	{
		if (Global_9387 > 0)
		{
			if (IS_BIT_SET(Global_8684, 11))
			{
				if (bLocal_39)
				{
					func_81(uLocal_35, "CLEAR_ALL");
				
					if (IS_BIT_SET(Global_8683, 25))
					{
						unk_0x88F483FBD433696A(uLocal_35, "CREATE_ALERT");
						unk_0x330108B080A2132F(26);
						unk_0x74BF156C860580D4(222f);
						unk_0x74BF156C860580D4(222f);
						unk_0xE6B753D52F4CA222();
					}
				
					if (IS_BIT_SET(Global_4542983, 11))
					{
						unk_0x88F483FBD433696A(uLocal_35, "CREATE_ALERT");
						unk_0x330108B080A2132F(53);
						unk_0x74BF156C860580D4(222f);
						unk_0x74BF156C860580D4(222f);
						unk_0xE6B753D52F4CA222();
					}
				
					if (Global_79248 == true)
					{
						if (IS_BIT_SET(Global_4542983, 12))
						{
							unk_0x88F483FBD433696A(uLocal_35, "CREATE_ALERT");
							unk_0x330108B080A2132F(52);
							unk_0x74BF156C860580D4(222f);
							unk_0x74BF156C860580D4(222f);
							unk_0xE6B753D52F4CA222();
						}
					
						if (IS_BIT_SET(Global_4542983, 28))
						{
							unk_0x88F483FBD433696A(uLocal_35, "CREATE_ALERT");
							unk_0x330108B080A2132F(60);
							unk_0x74BF156C860580D4(222f);
							unk_0x74BF156C860580D4(148f);
							unk_0xE6B753D52F4CA222();
						}
					}
				
					if (IS_BIT_SET(Global_4542983, 19))
					{
						unk_0x88F483FBD433696A(uLocal_35, "CREATE_ALERT");
						unk_0x330108B080A2132F(55);
						unk_0x74BF156C860580D4(222f);
					
						if (IS_BIT_SET(Global_4542983, 12) || IS_BIT_SET(Global_4542983, 11) || IS_BIT_SET(Global_8683, 25))
							unk_0x74BF156C860580D4(192f);
						else
							unk_0x74BF156C860580D4(222f);
					
						unk_0xE6B753D52F4CA222();
					}
				
					unk_0x8744D2E3FC95740E(&Global_8684, 11);
					bLocal_39 = false;
				}
			}
		}
	
		if (Global_9387 < 1)
		{
			unk_0xD314260005F064BF(&uLocal_35);
			unk_0x8744D2E3FC95740E(&Global_8683, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_9387 > 0)
	{
		uLocal_35 = unk_0x8DE4F68A9728925E("cellphone_alert_popup");
	
		while (!unk_0xA0C7B98BCF1EEF9E(uLocal_35))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0xA4F67CEB594AE064(4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 6);
	}

	return;
}

void func_81(var uParam0, char* sParam1) // Position - 0x4A6E
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0xE6B753D52F4CA222();
	return;
}

void func_82() // Position - 0x4A83
{
	if (IS_BIT_SET(Global_8684, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 6);
		unk_0x8744D2E3FC95740E(&Global_8684, 7);
		return;
	}

	if (!IS_BIT_SET(Global_8684, 7))
	{
		unk_0x8744D2E3FC95740E(&Global_8684, 6);
		return;
	}

	return;
}

void func_83() // Position - 0x4ABA
{
	if (IS_BIT_SET(Global_8684, 4))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 3);
		unk_0x8744D2E3FC95740E(&Global_8684, 4);
		return;
	}

	if (!IS_BIT_SET(Global_8684, 4))
	{
		unk_0x8744D2E3FC95740E(&Global_8684, 3);
		return;
	}

	return;
}

void func_84() // Position - 0x4AF1
{
	if (IS_BIT_SET(Global_8684, 2))
	{
		if (!(Global_20813.f_1 == 1))
			Global_20813.f_1 = 0;
	
		unk_0x8744D2E3FC95740E(&Global_8684, 2);
		return;
	}

	if (!IS_BIT_SET(Global_8684, 2))
	{
		if (!(Global_20813.f_1 == 1))
			if (Global_20813.f_1 < 4)
				Global_20813.f_1 = 3;
	
		return;
	}

	return;
}

BOOL func_85() // Position - 0x4B43
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
	
		if (func_34(14))
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

BOOL func_86(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4D8C
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_79248 == false)
	{
		if (func_34(14))
		{
			if (Global_23225 == 2 || Global_23225 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (Global_20813.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_57(0) == true)
			return false;

	if (Global_20779 == 1)
		return false;

	if (Global_20813.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!unk_0xF40767E41852FB72(Global_20810))
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20813.f_1 < 4)
			{
				func_87("cellphone_flashhand");
			
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
					Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				unk_0xFD49725F3FE7EE13("cellphone_flashhand");
			}
		}
	}

	while (!Global_20795)
	{
		SYSTEM::WAIT(0);
	}

	func_135();
	func_133();

	if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
	{
		Global_9289 = 0;
		Global_20813.f_1 = 7;
		func_87(&(Global_8690[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
				Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (unk_0x486FF5D06E9659F1(Global_8690[iParam0 /*15*/].f_9) == 0)
			Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), CELLPHONE);
	
		unk_0xFD49725F3FE7EE13(&(Global_8690[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_87(char* sParam0) // Position - 0x4EEF
{
	unk_0x97A5024CE91641F1(sParam0);

	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_88(int iParam0) // Position - 0x4F0F
{
	if (func_91())
		return;

	if (Global_21025)
		if (func_90())
			func_89(true, true);
		else
			func_89(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_52())
		Global_20813.f_1 = 3;

	return;
}

void func_89(BOOL bParam0, BOOL bParam1) // Position - 0x4F99
{
	if (bParam0)
	{
		if (func_57(0))
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

BOOL func_90() // Position - 0x500D
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_91() // Position - 0x501B
{
	return IS_BIT_SET(Global_1956030, 19);
}

void func_92() // Position - 0x502A
{
	float i;

	unk_0x98E393364463951A(1);
	unk_0x4CC1CF98851922CE(2, 201);
	unk_0x4CC1CF98851922CE(2, 202);

	for (i = 0f; !unk_0x875A214D5EBCA509(2, 201) && !unk_0x875A214D5EBCA509(2, 202) || i < 1f; i = i + unk_0x0B852B0BF94A8DC1())
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /*ALERT*/, "VE_DIR_MODE_SURE" /*Are you sure you want to launch Director Mode?*/, 18, 0, false, -1, 0, 0, true, 0);
		SYSTEM::WAIT(0);
	}

	unk_0x98E393364463951A(0);

	if (unk_0x875A214D5EBCA509(2, 201))
	{
		unk_0x8F72AF14CE5AACE4(0);
		Global_113314 = true;
	}

	return;
}

void func_93(int iParam0) // Position - 0x50A9
{
	float i;
	char* str;

	unk_0x98E393364463951A(1);
	unk_0x4CC1CF98851922CE(2, 201);

	for (i = 0f; !unk_0x875A214D5EBCA509(2, 201) || i < 1f; i = i + unk_0x0B852B0BF94A8DC1())
	{
		str = func_94(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /*~a~ is not available whilst ~a~.*/, 16384, 0, false, -1, "FBR_DIR_MODE" /*Director Mode*/, str, true, 0);
		SYSTEM::WAIT(0);
	}

	unk_0x98E393364463951A(0);
	return;
}

char* func_94(int iParam0, int iParam1) // Position - 0x510B
{
	iParam1 = iParam1;

	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
	
		case 2:
			return "FBR_BLK_RNNNG" /*feature is already running*/;
	
		case 13:
			return "FBR_BLK_DEAD" /*dead*/;
	
		case 3:
			return "FBR_BLK_MISS" /*playing a mission*/;
	
		case 5:
			return "FBR_BLK_SHOP" /*browsing a shop*/;
	
		case 4:
			return "FBR_BLK_CUTS" /*watching a cutscene*/;
	
		case 6:
			return "FBR_BLK_WANT" /*wanted*/;
	
		case 7:
			return "FBR_BLK_ONLI" /*playing GTA Online*/;
	
		case 8:
			return "FBR_BLK_ACT" /*performing this action*/;
	
		case 9:
			return "FBR_BLK_LOC" /*in this location*/;
	
		case 10:
			return "FBR_BLK_VEH" /*in a vehicle*/;
	
		case 11:
			return "FBR_BLK_PARA" /*skydiving*/;
	
		case 12:
			return "FBR_BLK_FALL" /*falling*/;
	
		default:
			return "ERROR";
	}

	return "ERROR";
}

int func_95(int iParam0, BOOL bParam1, int iParam2) // Position - 0x51FC
{
	int num;

	iParam2 = iParam2;

	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		return 13;

	if (bParam1)
		if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1)
			return 2;

	if (func_127() && !func_34(14))
		return 3;

	if (func_126())
		return 3;

	if (func_125())
		return 8;

	if (bParam1)
		if (func_124())
			return 8;

	if (Global_98292)
		return 3;

	if (Global_33086)
		return 8;

	if (Global_32977)
		return 8;

	if (Global_2883694)
		if (unk_0x486FF5D06E9659F1(-1516147206) > 0)
			return 3;
	else if (Global_2883693)
		if (unk_0x486FF5D06E9659F1(2006115718) > 0)
			return 3;
	else if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
		return 3;

	if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
		return 3;

	if (unk_0x486FF5D06E9659F1(joaat("creator")) > 0)
		return 3;

	if (unk_0x486FF5D06E9659F1(joaat("respawn_controller")) > 0)
		return 13;

	if (_IS_MISSION_REPEAT_ACTIVE(bParam1))
		return 3;

	if (unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
		return 12;

	if (func_122(Global_113394, 256))
		return 3;

	if (func_121() || func_120() || func_115() || func_114())
		return 5;

	if (func_114())
		return 5;

	if (func_113())
		return 5;

	if (func_112())
		return 5;

	if (func_120())
		return 5;

	if (func_111() && !Global_113319)
		return 8;

	if (func_115())
		return 5;

	if (unk_0x3555462DB47B7AB1() || func_110())
		return 4;

	if (func_74())
		return 4;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			num = func_99(60);
		
			if (num != 0)
				return num;
		
			if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) != -1)
				return 11;
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || Global_113417)
				return 10;
		}
	}

	if (Global_33084)
		return 8;

	if (Global_79246)
		return 4;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
			return 6;
	
		if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
			return 8;
	
		if (unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()))
			return 8;
	}

	if (unk_0x76CD105BCAC6EB9F())
		return 7;

	if (func_98())
		return 8;

	if (Global_32831)
		return 3;

	if (unk_0xE37AC296E66C33AF())
		return 4;

	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
		return 9;

	if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
		return 9;

	if (bParam1)
		if (!func_96(false))
			return 8;

	if (unk_0x92D9D3367234ABE7(unk_0x4A8C381C258A124D()))
		return 9;

	return 0;
}

BOOL func_96(BOOL bParam0) // Position - 0x5538
{
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		return false;

	if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()) || unk_0xA6534E6C7AE314D6(unk_0x4A8C381C258A124D()) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()) || unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
		return false;

	if (func_74() || Global_23572.f_4 || func_97() || unk_0x8B27A086F4268F56() || unk_0x46150A5112561134() || func_110() || func_126())
		return false;

	if (!bParam0)
		if (unk_0x3D2EB53CF281A77E())
			return false;

	return true;
}

BOOL func_97() // Position - 0x5648
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

BOOL func_98() // Position - 0x5664
{
	return Global_61219;
}

int func_99(int iParam0) // Position - 0x566F
{
	Vector3 vector;
	int num;
	int i;

	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		return 5;

	vector = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };

	if (Global_113457[10 /*10*/].f_1)
		if (SYSTEM::VDIST2(vector, 241.9889f, 360.4732f, 105.6166f) < 2f)
			return 3;

	if (func_108(2) && !func_108(17))
		if (SYSTEM::VDIST2(vector, -59.966286f, -1099.0055f, 25.520878f) < 8f)
			if (unk_0x26715B0ED6702C87(vector, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, 0, 1))
				return 9;

	if (SYSTEM::VDIST2(vector, -740.9346f, 5599.4263f, 40.71515f) < 11f)
		if (unk_0x26715B0ED6702C87(vector, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, -740.9346f, 5590.4263f, 40.71515f) < 11f)
		if (unk_0x26715B0ED6702C87(vector, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 446.32654f, 5566.35f, 780.21515f) < 11f)
		if (unk_0x26715B0ED6702C87(vector, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 446.32654f, 5577.35f, 780.21515f) < 11f)
		if (unk_0x26715B0ED6702C87(vector, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vector, 95.07f, -1284.98f, 29.3f) < 2f)
		return 9;

	if (SYSTEM::VDIST2(vector, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_107(26))
		return 9;

	if (!bLocal_25)
		func_100(iParam0);

	num = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());

	if (num == 0)
		return 0;
	else if (num == Global_113332 || num == Global_113333 || num == Global_113334)
		return 9;
	else if (num == Global_113323)
		return 9;
	else if (num == Global_113324)
		return 9;
	else if (num == Global_113327)
		return 9;
	else if (num == Global_113326)
		return 9;
	else if (num == Global_113328)
		return 9;
	else if (num == Global_113329)
		return 9;
	else if (num == Global_113330)
		return 9;
	else if (num == Global_113331)
		return 9;
	else if (num == Global_113335)
		return 9;
	else if (num == Global_113336)
		return 9;
	else if (num == Global_113337)
		return 9;
	else if (num == Global_113338)
		return 9;
	else if (num == Global_113339)
		return 9;
	else if (num == Global_113340 || num == Global_113341 && func_108(67))
		return 9;

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		if (num == Global_113342[i])
			return 9;
	}

	return 0;
}

void func_100(int iParam0) // Position - 0x5A97
{
	int i;

	iParam0 = iParam0;
	func_103(24, &Global_113323);
	func_103(47, &Global_113324);
	func_103(10, &Global_113332);
	func_103(9, &Global_113333);
	func_103(8, &Global_113334);
	func_103(21, &Global_113335);
	func_103(11, &Global_113336);
	func_103(18, &Global_113340);
	func_103(19, &Global_113341);
	Global_113327 = unk_0x0556019E7EE8EC9A(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_113326 = unk_0x0556019E7EE8EC9A(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_113328 = unk_0x0556019E7EE8EC9A(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_113329 = unk_0x0556019E7EE8EC9A(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_113330 = unk_0x0556019E7EE8EC9A(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_113331 = unk_0x0556019E7EE8EC9A(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_113337 = unk_0x0556019E7EE8EC9A(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_113338 = unk_0x0556019E7EE8EC9A(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_113339 = unk_0x0556019E7EE8EC9A(-54.7f, -1092.7f, 26.4f, "v_carshowroom");

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		Global_113342[i] = unk_0x0E171121A3A25363(func_101(i));
	}

	bLocal_25 = true;
	return;
}

Vector3 func_101(int iParam0) // Position - 0x5C23
{
	if (!func_102(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
	
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
	
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
	
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
	
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
	
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
	
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
	
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
	
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
	
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
	
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
	
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
	
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
	
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
	
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
	
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
	
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
	
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
	
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_102(int iParam0) // Position - 0x5E0D
{
	if (iParam0 >= 19)
		return false;
	else if (iParam0 <= -1)
		return false;

	return true;
}

var func_103(int iParam0, int iParam1) // Position - 0x5E2E
{
	var unk;

	unk = { func_104(iParam0) };
	*iParam1 = unk_0x0556019E7EE8EC9A(unk, unk.f_3);
	return unk.f_4;
}

struct<5> func_104(int iParam0) // Position - 0x5E53
{
	var unk;
	var unk6;

	switch (iParam0)
	{
		case 0:
			unk = { -447.4833f, 280.3197f, 77.5215f };
			unk.f_3 = "v_comedy";
			unk.f_4 = unk.f_3;
			break;
	
		case 1:
			unk = { -1906.7858f, -573.7576f, 19.0773f };
			unk.f_3 = "v_psycheoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 2:
			unk = { 1399.973f, 1148.7559f, 113.3336f };
			unk.f_3 = "v_ranch";
			unk.f_4 = unk.f_3;
			break;
	
		case 3:
			unk = { -598.6379f, -1608.3986f, 26.0108f };
			unk.f_3 = "v_recycle";
			unk.f_4 = unk.f_3;
			break;
	
		case 4:
			unk = { -556.5089f, 286.3181f, 81.1763f };
			unk.f_3 = "v_rockclub";
			unk.f_4 = unk.f_3;
			break;
	
		case 5:
			unk = { -111.7116f, -11.912f, 69.5196f };
			unk.f_3 = "v_janitor";
			unk.f_4 = unk.f_3;
			break;
	
		case 6:
			unk = { 1274.9338f, -1714.7256f, 53.7715f };
			unk.f_3 = "v_lesters";
			unk.f_4 = unk.f_3;
			break;
	
		case 7:
			unk = { 147.433f, -2201.3704f, 3.688f };
			unk.f_3 = "v_torture";
			unk.f_4 = unk.f_3;
			break;
	
		case 8:
			unk = { 320.9934f, 265.2515f, 82.1221f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Vinewood)";
			break;
	
		case 9:
			unk = { -1425.5645f, -244.3f, 15.8053f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Morningwood)";
			break;
	
		case 10:
			unk = { 377.153f, -717.567f, 10.0536f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Downtown)";
			break;
	
		case 11:
			unk = { 245.1564f, 370.211f, 104.7382f };
			unk.f_3 = "v_epsilonism";
			unk.f_4 = unk.f_3;
			break;
	
		case 12:
			unk = { 173.1176f, -1003.2789f, -99.9999f };
			unk.f_3 = "v_garages";
			unk.f_4 = unk.f_3;
			break;
	
		case 13:
			unk = { 199.9715f, -999.6678f, -100f };
			unk.f_3 = "v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 14:
			unk = { 228.6058f, -992.0537f, -99.9999f };
			unk.f_3 = "v_garagel";
			unk.f_3 = "hei_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 15:
			unk = { 1854.2538f, 3686.7385f, 33.2671f };
			unk.f_3 = "v_sheriff";
			unk.f_4 = unk.f_3;
			break;
	
		case 16:
			unk = { -444.8907f, 6013.587f, 30.7164f };
			unk.f_3 = "v_sheriff2";
			unk.f_4 = unk.f_3;
			break;
	
		case 17:
			unk = { 3522.8452f, 3707.9653f, 19.9918f };
			unk.f_3 = "v_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 18:
			unk = { 717.2994f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweat";
			unk.f_4 = unk.f_3;
			break;
	
		case 19:
			unk = { 717.299f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweatempty";
			unk.f_4 = unk.f_3;
			break;
	
		case 20:
			unk = { 2449.7852f, 4983.8247f, 45.8106f };
			unk.f_3 = "v_farmhouse";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1087.1952f, -1988.445f, 28.649f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 23:
			unk = { 982.233f, -2160.3816f, 28.4761f };
			unk.f_3 = "v_abattoir";
			unk.f_4 = unk.f_3;
			break;
	
		case 21:
			unk = { 479.0568f, -1316.8253f, 28.2038f };
			unk.f_3 = "v_chopshop";
			unk.f_4 = unk.f_3;
			break;
	
		case 24:
			unk = { -1005.6632f, -478.3461f, 49.0265f };
			unk.f_3 = "v_58_sol_office";
			unk.f_4 = unk.f_3;
			break;
	
		case 25:
			unk6 = { func_106(1, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (1)";
			break;
	
		case 26:
			unk6 = { func_106(2, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (2)";
			break;
	
		case 27:
			unk6 = { func_106(3, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (3)";
			break;
	
		case 28:
			unk6 = { func_106(4, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (4)";
			break;
	
		case 29:
			unk6 = { func_106(5, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (5)";
			break;
	
		case 30:
			unk6 = { func_106(6, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (6)";
			break;
	
		case 31:
			unk6 = { func_106(7, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (7)";
			break;
	
		case 32:
			unk = { Global_1312263[34 /*1951*/].f_146.f_1517 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (8)";
			break;
	
		case 33:
			unk6 = { func_106(35, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (9)";
			break;
	
		case 34:
			unk6 = { func_106(36, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (10)";
			break;
	
		case 35:
			unk6 = { func_106(37, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (11)";
			break;
	
		case 36:
			unk6 = { func_106(38, false) };
			unk = { -20.1f, -580.8f, 91.3f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (12)";
			break;
	
		case 37:
			unk6 = { func_106(39, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (13)";
			break;
	
		case 38:
			unk6 = { func_106(40, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (14)";
			break;
	
		case 39:
			unk6 = { func_106(41, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (15)";
			break;
	
		case 40:
			unk6 = { func_106(42, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (16)";
			break;
	
		case 41:
			unk6 = { func_106(43, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (17)";
			break;
	
		case 42:
			unk = { -470.3754f, -698.5207f, 51.5276f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (18)";
			break;
	
		case 43:
			unk = { -460.6133f, -691.5562f, 69.9067f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (19)";
			break;
	
		case 44:
			unk = { 300.633f, -997.4288f, -99.9727f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (20)";
			break;
	
		case 49:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (1)";
			break;
	
		case 50:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (2)";
			break;
	
		case 51:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (3)";
			break;
	
		case 52:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (4)";
			break;
	
		case 53:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (5)";
			break;
	
		case 54:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (7)";
			break;
	
		case 55:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (8)";
			break;
	
		case 56:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (10)";
			break;
	
		case 57:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (12)";
			break;
	
		case 58:
			unk = { 374.2012f, 416.9688f, 142.5991f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (13)";
			break;
	
		case 45:
			unk = { -16.295849f, -684.0385f, 33.508316f };
			unk.f_3 = "dt1_03_carpark";
			unk.f_4 = "dt1_03_carpark";
			break;
	
		case 46:
			unk = { 341.1f, -1000f, -99.2f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = "v_apart_midspaz";
			break;
	
		case 47:
			unk = { 199.97156f, -1018.95416f, -100f };
			unk.f_3 = "v_garagem_sp";
			unk.f_4 = unk.f_3;
			break;
	
		case 48:
			unk = { -1388.0013f, -618.4197f, 30.8196f };
			unk.f_3 = "v_bahama";
			unk.f_4 = unk.f_3;
			break;
	}

	switch (iParam0)
	{
		case 59:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 60:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 61:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 62:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 63:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 64:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 65:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 66:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 67:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 68:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 69:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 70:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 71:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 72:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 73:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 74:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 75:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 76:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 77:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 78:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 79:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 80:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 81:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 82:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 83:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 84:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 85:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 86:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 87:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 88:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 89:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 90:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 91:
			unk6 = { func_106(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 92:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 93:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 94:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 95:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 96:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 97:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 98:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 99:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 100:
			unk6 = { func_106(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 101:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 102:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 103:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 104:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 105:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 106:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 107:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 108:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 109:
			unk6 = { func_106(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 110:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 111:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 112:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 113:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 114:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 115:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 116:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 117:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 118:
			unk6 = { func_106(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 119:
			unk6 = { func_106(91, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 120:
			unk6 = { func_106(97, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 121:
			unk6 = { func_106(103, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 122:
			unk6 = { func_106(104, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 123:
			unk6 = { func_106(105, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 124:
			unk6 = { func_106(106, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 125:
			unk6 = { func_106(107, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 126:
			unk6 = { func_106(108, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 127:
			unk6 = { func_106(109, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 128:
			unk6 = { func_106(110, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 129:
			unk6 = { func_106(111, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 130:
			unk6 = { func_106(112, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 131:
			unk6 = { func_106(113, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 132:
			unk6 = { func_106(114, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 133:
			unk6 = { func_106(103, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 134:
			unk6 = { func_106(106, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 135:
			unk6 = { func_106(109, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 136:
			unk6 = { func_106(112, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 137:
			unk = { 938.3077f, -3196.1116f, -100f };
			unk.f_3 = "gr_grdlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 138:
			unk = { 512.5f, 4852f, -62.6f };
			unk.f_3 = "xm_x17dlc_int_sub";
			unk.f_4 = unk.f_3;
			break;
	
		case 139:
			unk = { 2047f, 2942f, -61.9f };
			unk.f_3 = "xm_x17dlc_int_facility";
			unk.f_4 = unk.f_3;
			break;
	
		case 140:
			unk = { -1047.5997f, -232.3503f, 38.0135f };
			unk.f_3 = "v_faceoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1100f, -2004f, 37f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 141:
			unk = { 361f, 6306f, -159f };
			unk.f_3 = "xm_x17dlc_int_silo_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 142:
			unk = { 305f, 6298f, -160f };
			unk.f_3 = "xm_x17dlc_int_silo_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 143:
			unk = { 244f, 6163f, -159f };
			unk.f_3 = "xm_x17dlc_int_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 144:
			unk = { 2168f, 2920f, -84f };
			unk.f_3 = "xm_x17dlc_int_facility2";
			unk.f_4 = unk.f_3;
			break;
	
		case 145:
			unk = { 446f, 5922f, -158f };
			unk.f_3 = "xm_x17dlc_int_bse_tun";
			unk.f_4 = unk.f_3;
			break;
	
		case 146:
			unk = { 252f, 5972f, -156f };
			unk.f_3 = "xm_x17dlc_int_base_loop";
			unk.f_4 = unk.f_3;
			break;
	
		case 147:
			unk = { 682f, 5959f, -152f };
			unk.f_3 = "xm_x17dlc_int_base_ent";
			unk.f_4 = unk.f_3;
			break;
	
		case 148:
			unk = { 551f, 5939f, -158f };
			unk.f_3 = "xm_x17dlc_int_base";
			unk.f_4 = unk.f_3;
			break;
	
		case 149:
			unk = { 520.0001f, 4750f, -70f };
			unk.f_3 = "xm_x17dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 150:
			unk = { -1266.8022f, -3014.849f, -49.4903f };
			unk.f_3 = "sm_smugdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 151:
			unk = { 974.9203f, -3000.0647f, -40.647f };
			unk.f_3 = "imp_impexp_intwaremed";
			unk.f_4 = unk.f_3;
			break;
	
		case 152:
			unk = { 969.5376f, -3000.4111f, -48.647f };
			unk.f_3 = "imp_impexp_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 153:
			unk = { 1094.9966f, -3100.0117f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_s_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 154:
			unk = { 1059.9949f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_m_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 155:
			unk = { 1010.0083f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_l_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 156:
			unk = { 372.6707f, 405.5235f, 144.5326f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = unk.f_3;
			break;
	
		case 157:
			unk = { -282.0588f, -955.17f, 85.3036f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 158:
			unk = { 342.7946f, -997.4225f, -99.7444f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 159:
			unk = { 260.3268f, -997.4298f, -100.0086f };
			unk.f_3 = "v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 160:
			unk = { 108.2369f, -753.5364f, 233.1523f };
			unk.f_3 = "v_fib01";
			unk.f_4 = unk.f_3;
			break;
	
		case 161:
			unk = { 135.3226f, -746.3677f, 253.1523f };
			unk.f_3 = "v_fib03";
			unk.f_4 = unk.f_3;
			break;
	
		case 162:
			unk = { 108.2572f, -753.5342f, 44.7548f };
			unk.f_3 = "v_office_lobby";
			unk.f_4 = unk.f_3;
			break;
	
		case 163:
			unk = { 228.6161f, -992.053f, -99.9999f };
			unk.f_3 = "heist_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 164:
			unk = { 575f, 4750f, -60f };
			unk.f_3 = "xm_v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 165:
			unk = { 600f, 4750f, -60f };
			unk.f_3 = "xm_v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 166:
			unk = { 630f, 4750f, -60f };
			unk.f_3 = "xm_v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 167:
			unk = { 1257f, 4796.7f, -39.1f };
			unk.f_3 = "xm_x17dlc_int_tun_entry";
			unk.f_4 = unk.f_3;
			break;
	
		case 168:
			unk = { 694.4f, 5898.9f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 169:
			unk = { 1121.8f, 5516.3f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 170:
			unk = { 1279.6f, 5233.2f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 171:
			unk = { 1158.6f, 5467.1f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 172:
			unk = { 705.9f, 5838.5f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 173:
			unk = { 1316.5f, 5184f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 174:
			unk = { 1248f, 5276.1f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 175:
			unk = { 1090.2f, 5559.2f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 176:
			unk = { 1261f, 4808.6f, -39.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 177:
			unk = { 721.8f, 5781.4f, -146.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 178:
			unk = { 780.8f, 5703.4f, -136.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 179:
			unk = { 868.1f, 5659.2f, -126.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 180:
			unk = { 1218.2f, 5321.2f, -85.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 181:
			unk = { 1278.5f, 4859.7f, -44.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 182:
			unk = { 1187.2f, 5419.8f, -96.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 183:
			unk = { 1344.7f, 5136.4f, -75.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 184:
			unk = { 1363.4f, 5039.5f, -65.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 185:
			unk = { 1049.3f, 5602.1f, -107.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 186:
			unk = { 1337.8f, 4944.3f, -55.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 187:
			unk = { 961.5f, 5646.9f, -117.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 188:
			unk = { 345.0041f, 4842.001f, -59.9997f };
			unk.f_3 = "xm_x17dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 189:
			unk = { 279.9322f, -1337.4902f, 23.7419f };
			unk.f_3 = "v_coroner";
			unk.f_4 = unk.f_3;
			break;
	
		case 190:
			unk = { -1604.6643f, -3012.5828f, -79.9999f };
			unk.f_3 = "ba_dlc_int_01_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 191:
		case 212:
			unk = { -1505.783f, -3012.5867f, -79.9999f };
			unk.f_3 = "ba_dlc_int_02_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 192:
			unk = { -630.4205f, -236.7843f, 37.057f };
			unk.f_3 = "V_JEWEL2";
			unk.f_4 = unk.f_3;
			break;
	
		case 193:
			unk = { 2800f, -3800f, 100f };
			unk.f_3 = "xs_x18_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 194:
			unk = { 2800f, -3942f, 182.5f };
			unk.f_3 = "xs_arena_vip";
			unk.f_4 = unk.f_3;
			break;
	
		case 195:
			unk = { 1049.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware02";
			unk.f_4 = unk.f_3;
			break;
	
		case 223:
			unk = { 2920f, 4470f, -100f };
			unk.f_3 = "sf_dlc_warehouse_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 196:
			unk = { 1093.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware03";
			unk.f_4 = unk.f_3;
			break;
	
		case 197:
			unk = { 1009.5f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware01";
			unk.f_4 = unk.f_3;
			break;
	
		case 198:
			unk = { 1100f, 245f, -49f };
			unk.f_3 = "vw_dlc_casino_main";
			unk.f_4 = unk.f_3;
			break;
	
		case 199:
			unk = { 1380f, 200f, -50f };
			unk.f_3 = "vw_dlc_casino_carpark";
			unk.f_4 = unk.f_3;
			break;
	
		case 200:
			unk = { 976.6364f, 70.29476f, 115.16413f };
			unk.f_3 = "vw_dlc_casino_apart";
			unk.f_4 = unk.f_3;
			break;
	
		case 201:
			unk = { 1295f, 230f, -50f };
			unk.f_3 = "vw_dlc_casino_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 202:
			unk = { 2479.3f, -273.9f, -58f };
			unk.f_3 = "ch_DLC_Casino_Heist";
			unk.f_4 = unk.f_3;
			break;
	
		case 203:
			unk = { 2730f, -380f, -49f };
			unk.f_3 = "ch_DLC_Arcade";
			unk.f_4 = unk.f_3;
			break;
	
		case 204:
			unk = { 2800f, -380f, -48.5f };
			unk.f_3 = "ch_DLC_Plan";
			unk.f_4 = unk.f_3;
			break;
	
		case 205:
			unk = { 2497.7f, -312.8f, -69.9f };
			unk.f_3 = "ch_DLC_Tunnel";
			unk.f_4 = unk.f_3;
			break;
	
		case 206:
			unk = { 2523.4f, -270f, -58.7f };
			unk.f_3 = "ch_DLC_Casino_Back";
			unk.f_4 = unk.f_3;
			break;
	
		case 207:
			unk = { 2504.4f, -257.2f, -39.1f };
			unk.f_3 = "ch_DLC_Casino_Hotel";
			unk.f_4 = unk.f_3;
			break;
	
		case 208:
			unk = { 2554f, -281.4f, -64.7f };
			unk.f_3 = "ch_DLC_Casino_Loading";
			unk.f_4 = unk.f_3;
			break;
	
		case 209:
			unk = { 2488.3f, -267.4f, -70.6f };
			unk.f_3 = "ch_DLC_Casino_Vault";
			unk.f_4 = unk.f_3;
			break;
	
		case 210:
			unk = { 2519.9f, -255.3f, -24.1f };
			unk.f_3 = "ch_DLC_Casino_Utility";
			unk.f_4 = unk.f_3;
			break;
	
		case 211:
			unk = { 2572.9f, -253.4f, -64.7f };
			unk.f_3 = "ch_dlc_casino_shaft";
			unk.f_4 = unk.f_3;
			break;
	
		case 213:
			unk = { 1103.5624f, -3000f, -40f };
			unk.f_3 = "gr_grdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 214:
			unk = { 1210f, 1857f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 215:
			unk = { 1569f, -2130f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 216:
			unk = { 839f, 2176f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 217:
			unk = { 982f, -143f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 218:
			unk = { -2000f, 1113.4f, 25.7f };
			unk.f_3 = "tr_tuner_car_meet";
			unk.f_4 = unk.f_3;
			break;
	
		case 219:
			unk = { -1350f, 160f, -99.2f };
			unk.f_3 = "tr_tuner_mod_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 220:
			unk = { 1.1f, -705.6f, 16.1f };
			unk.f_3 = "finbank";
			unk.f_4 = unk.f_3;
			break;
	
		case 221:
			unk = { -1010f, -70f, -99.4f };
			unk.f_3 = "sf_dlc_studio_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 222:
			unk = { 1550f, 250f, -50f };
			unk.f_3 = "h4_dlc_int_02_h4";
			unk.f_4 = unk.f_3;
			break;
	
		case 224:
			unk = { -935.7f, -2992.2f, 13.9f };
			unk.f_3 = "v_hanger";
			unk.f_4 = unk.f_3;
			break;
	
		case 225:
			unk = { 730f, -2990f, -39f };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 226:
			unk = { 152.3f, -1004.4f, -97.8f };
			unk.f_3 = "v_motel_mp";
			unk.f_4 = unk.f_3;
			break;
	
		case 227:
			unk = { 170f, 5190f, 10f };
			unk.f_3 = "xs_x18_int_mod2";
			unk.f_4 = unk.f_3;
			break;
	
		case 228:
			unk = { 850f, -3000f, -50f };
			unk.f_3 = "reh_dlc_int_04_sum2";
			unk.f_4 = unk.f_3;
			break;
	
		case 229:
			unk = { 495f, -2560f, -50f };
			unk.f_3 = "xm3_DLC_INT_04_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 230:
			unk = { 570f, -415.1f, -69.6f };
			unk.f_3 = "xm3_DLC_INT_03_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 231:
			unk = { 984.4f, -95.4f, 76.8f };
			unk.f_3 = "bkr_biker_dlc_int_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 232:
			unk = { -880f, -2770f, -49f };
			unk.f_3 = "M23_1_dlc_int_01_M23_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 233:
			unk = { 800f, -3000f, -69f };
			unk.f_3 = "reh_dlc_int_03_sum2";
			unk.f_4 = unk.f_3;
			break;
	
		case 234:
			unk = { 930.1f, -2269.9f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 235:
			unk = { 930.1f, -2240.1f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 236:
			unk = { 930.1f, -2213.2f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 237:
			unk = { 930.1f, -2183.4f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 238:
			unk = { 1000f, -2200f, -50f };
			unk.f_3 = "m23_2_dlc_int_warehouse2";
			unk.f_4 = unk.f_3;
			break;
	
		case 239:
			unk = { 1000f, -2230f, -50f };
			unk.f_3 = "m23_2_dlc_int_warehouse2";
			unk.f_4 = unk.f_3;
			break;
	
		case 240:
			unk = { 1220f, -2280f, -49f };
			unk.f_3 = "m23_2_int_warehouse";
			unk.f_4 = unk.f_3;
			break;
	
		case 241:
			unk = { -1421.0149f, -3012.5867f, -80f };
			unk.f_3 = "ba_dlc_int_03_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 242:
			unk = { -2000f, 1113.2f, 27.6f };
			unk.f_3 = "tr_tuner_car_meet";
			unk.f_4 = unk.f_3;
			break;
	
		default:
			break;
	}

	_IS_NULL_VECTOR(unk);
	return unk;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x896F
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

struct<6> func_106(int iParam0, BOOL bParam1) // Position - 0x8999
{
	var unk;

	switch (iParam0)
	{
		case -1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 2:
			unk = { -761.0982f, 317.6259f, 169.59628f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { -761.1888f, 317.6295f, 216.0503f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { -795.3856f, 340.0188f, 152.7941f };
			unk.f_3 = { 0f, 0f, 179.99997f };
			break;
	
		case 61:
			unk = { -778.5056f, 332.3779f, 212.1968f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 5:
			unk = { -258.1807f, -950.6853f, 70.0239f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 6:
			unk = { -285.0051f, -957.6552f, 85.3035f };
			unk.f_3 = { 0f, 0f, -109.99999f };
			break;
	
		case 7:
			unk = { -1471.8821f, -530.7484f, 62.34918f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 34:
			unk = { -1471.8821f, -530.7484f, 49.72156f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 62:
			unk = { -1463.15f, -540.2369f, 74.2439f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 35:
			unk = { -885.3702f, -451.4775f, 119.327f };
			unk.f_3 = { 0f, 0f, 27.55617f };
			break;
	
		case 36:
			unk = { -913.0385f, -438.4284f, 114.39966f };
			unk.f_3 = { 0f, 0f, -153.30931f };
			break;
	
		case 37:
			unk = { -892.5499f, -430.4789f, 88.25368f };
			unk.f_3 = { 0f, 0f, 116.9193f };
			break;
	
		case 38:
			unk = { -35.0462f, -576.317f, 82.90739f };
			unk.f_3 = { 0f, 0f, 160f };
			break;
	
		case 39:
			unk = { -10.3788f, -590.7431f, 93.02542f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 65:
			unk = { -22.2487f, -589.1461f, 80.2305f };
			unk.f_3 = { 0f, 0f, 69.88f };
			break;
	
		case 40:
			unk = { -900.6311f, -376.7462f, 78.27306f };
			unk.f_3 = { 0f, 0f, 26.92611f };
			break;
	
		case 41:
			unk = { -929.483f, -374.5104f, 102.23286f };
			unk.f_3 = { 0f, 0f, -152.55307f };
			break;
	
		case 63:
			unk = { -914.4202f, -375.8189f, 114.4743f };
			unk.f_3 = { 0f, 0f, -63f };
			break;
	
		case 42:
			unk = { -617.1647f, 64.6042f, 100.8196f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 43:
			unk = { -584.2015f, 42.7133f, 86.4187f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { -609.5665f, 50.2203f, 98.3998f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 73:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = { 0f, 0f, 11f };
			break;
	
		case 74:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = { 0f, 0f, -63.5f };
			break;
	
		case 75:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = { 0f, 0f, -71.5f };
			break;
	
		case 76:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = { 0f, 0f, 40.5f };
			break;
	
		case 77:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = { 0f, 0f, 6f };
			break;
	
		case 78:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = { 0f, 0f, -14.5f };
			break;
	
		case 79:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = { 0f, 0f, -29f };
			break;
	
		case 80:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = { 0f, 0f, 4.5f };
			break;
	
		case 81:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 82:
			unk = { 374.2012f, 416.9688f, 142.6977f };
			unk.f_3 = { 0f, 0f, -14f };
			break;
	
		case 83:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 84:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 85:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 86:
			unk = { -1573.0981f, -4085.806f, 9.7851f };
			unk.f_3 = { 0f, 0f, 162f };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			unk = { 342.8157f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			unk = { 260.3297f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 87:
			unk = { -1572.1869f, -570.8315f, 109.9879f };
			unk.f_3 = { 0f, 0f, -54f };
			break;
	
		case 88:
			unk = { -1383.9543f, -476.7112f, 73.507f };
			unk.f_3 = { 0f, 0f, 8f };
			break;
	
		case 89:
			unk = { -138.0029f, -629.739f, 170.2854f };
			unk.f_3 = { 0f, 0f, -84f };
			break;
	
		case 90:
			unk = { -74.8895f, -817.6883f, 244.8508f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			unk = { 1100.7644f, -3159.384f, -34.9342f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			unk = { 1005.806f, -3157.6702f, -36.0897f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 103:
			if (!bParam1)
			{
				unk = { -1576.5712f, -569.7595f, 85.5f };
				unk.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 104:
			if (!bParam1)
			{
				unk = { -1571.2538f, -566.5865f, 85.5f };
				unk.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 105:
			if (!bParam1)
			{
				unk = { -1568.0984f, -571.9171f, 85.5f };
				unk.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 106:
			if (!bParam1)
			{
				unk = { -1384.5178f, -475.8657f, 56.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 107:
			if (!bParam1)
			{
				unk = { -1384.5383f, -475.8829f, 48.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 108:
			if (!bParam1)
			{
				unk = { -1378.9939f, -477.2481f, 56.1f };
				unk.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 109:
			if (!bParam1)
			{
				unk = { -186.5683f, -576.4624f, 135f };
				unk.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 110:
			if (!bParam1)
			{
				unk = { -113.886f, -564.3862f, 135f };
				unk.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 111:
			if (!bParam1)
			{
				unk = { -134.6568f, -635.1774f, 135f };
				unk.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 112:
			if (!bParam1)
			{
				unk = { -79.0479f, -822.6393f, 221f };
				unk.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 113:
			if (!bParam1)
			{
				unk = { -70.3086f, -819.5784f, 221f };
				unk.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 114:
			if (!bParam1)
			{
				unk = { -79.9861f, -818.425f, 221f };
				unk.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	}

	return unk;
}

BOOL func_107(int iParam0) // Position - 0x954F
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_95357[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_92124; i = i + 1)
	{
		if (Global_92124[i /*5*/] != -1)
			if (Global_79519.f_109[Global_92124[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

BOOL func_108(int iParam0) // Position - 0x95B7
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x95E3
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

BOOL func_110() // Position - 0x95F6
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_111() // Position - 0x9610
{
	return unk_0x1DD05E817C89C737() <= Global_23711.f_6481 + 100;
}

BOOL func_112() // Position - 0x9625
{
	return IS_BIT_SET(Global_79497, 9);
}

BOOL func_113() // Position - 0x9634
{
	return IS_BIT_SET(Global_79497, 8);
}

BOOL func_114() // Position - 0x9643
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_intro", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_base", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_enterchair", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_exitchair", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_a", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_b", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_c", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_d", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_intro", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_base", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_enterchair", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_exitchair", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_a", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_b", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_c", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_d", 3))
			return true;

	return false;
}

BOOL func_115() // Position - 0x97D8
{
	int i;

	if (func_121())
	{
		for (i = 0; i < 61; i = i + 1)
		{
			if (func_116(i))
				return true;
		}
	}

	return false;
}

BOOL func_116(int iParam0) // Position - 0x9808
{
	return func_117(iParam0, 20, true);
}

BOOL func_117(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9819
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101444.f_1414[iParam0], iParam1);
	else if (unk_0x76CD105BCAC6EB9F())
		if (func_119() == 0)
			return IS_BIT_SET(func_129(func_118(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114370.f_668[iParam0], iParam1);

	return false;
}

int func_118(int iParam0) // Position - 0x9879
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12725;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		default:
			break;
	}

	return 14626;
}

int func_119() // Position - 0x9C21
{
	return Global_32828;
}

BOOL func_120() // Position - 0x9C2C
{
	return Global_101444.f_394 > 0;
}

BOOL func_121() // Position - 0x9C3D
{
	return Global_101444.f_393 > 0;
}

BOOL func_122(int iParam0, int iParam1) // Position - 0x9C4E
{
	return iParam0 && iParam1 != false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x9C5D
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

BOOL func_124() // Position - 0x9C85
{
	return Global_101431.f_1;
}

BOOL func_125() // Position - 0x9C93
{
	return Global_79516;
}

BOOL func_126() // Position - 0x9C9F
{
	if (Global_79509)
		return true;
	else if (Global_64032 && !Global_64038)
		return true;

	return false;
}

BOOL func_127() // Position - 0x9CC9
{
	if (Global_43922 == 15)
		return false;

	return true;
}

BOOL func_128(eCharacter echParam0) // Position - 0x9CDE
{
	if (Global_23280 || Global_23279 || Global_23281)
	{
		if (echParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_118[echParam0 /*10*/].f_8 != 178)
		if (Global_20813.f_1 == 10)
			if (Global_7998 == echParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

int func_129(int iParam0, int iParam1) // Position - 0x9D42
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_130(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

var func_130(int iParam0, int iParam1) // Position - 0x9D71
{
	return unk_0xD69CE161FE614531(0, iParam0, func_131(iParam1));
}

int func_131(int iParam0) // Position - 0x9D86
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_132();
	
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

int func_132() // Position - 0x9DBA
{
	return Global_1574925;
}

void func_133() // Position - 0x9DC6
{
	if (Global_79248 == false)
	{
		Global_8690[14 /*15*/].f_4 = -99;
		Global_8690[4 /*15*/].f_4 = -99;
	
		if (Global_2695946)
		{
			if (func_34(14))
			{
				func_134(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_134(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_134(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_134(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_134(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x9E54
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8690[iParam0 /*15*/], sParam1, 16);
	Global_8690[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8690[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8690[iParam0 /*15*/].f_9 = unk_0x70E57E9927B6BA58(sParam3);
	Global_8690[iParam0 /*15*/].f_10 = iParam4;
	Global_8690[iParam0 /*15*/].f_11 = iParam5;
	Global_8690[iParam0 /*15*/].f_12 = iParam6;
	Global_8690[iParam0 /*15*/].f_13 = iParam7;
	Global_8690[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8690[iParam0 /*15*/].f_12 == 0)
		Global_8690[iParam0 /*15*/].f_12 = 0;

	if (Global_8690[iParam0 /*15*/].f_13 == 0)
		Global_8690[iParam0 /*15*/].f_13 = 0;

	if (Global_8690[iParam0 /*15*/].f_14 == 0)
		Global_8690[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_135() // Position - 0x9F0A
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8690[i /*15*/].f_4 = -99;
	}

	if (Global_79248 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_137(num2, Global_20813) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_134(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_134(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_134(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43922 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8688 == 0)
		{
			func_134(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 0;
			Global_8689 = 255;
		}
		else
		{
			func_134(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 1;
			Global_8689 = 42;
		}
	
		if (num == 1)
			func_134(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_134(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_134(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_134(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_134(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_89 == true)
			func_134(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114370.f_14054.f_88 == 1)
			func_134(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_134(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_134(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_134(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_134(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_134(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_134(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_134(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_134(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_134(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_134(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_134(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
		func_134(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == true)
			func_134(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_134(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_134(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_134(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_134(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_134(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_134(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_134(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_134(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_134(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_134(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_134(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_134(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_134(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_134(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_134(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_134(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542983, 4) == true)
			if (Global_1836171)
				func_134(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 20) == true)
				func_134(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 22) == true)
				func_134(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542983, 26) == true)
				if (func_136())
					func_134(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_134(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542983, 4) == false && Global_1836171 == false && IS_BIT_SET(Global_4542983, 20) == false && IS_BIT_SET(Global_4542983, 22) == false && IS_BIT_SET(Global_4542983, 26) == false)
			if (func_136())
				func_134(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_134(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_136() // Position - 0xA4BA
{
	if (Global_79248)
		if (Global_1836571 || Global_1836572 == 1)
			return true;

	return false;
}

int func_137(int iParam0, eCharacter echParam1) // Position - 0xA4E1
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2139[iParam0 /*29*/].f_19[echParam1];
}

void func_138() // Position - 0xA50B
{
	return;
}

