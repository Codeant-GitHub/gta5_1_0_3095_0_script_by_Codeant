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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;

	if (func_92(&uLocal_44))
	{
		while (!func_83())
		{
			func_71(&uLocal_44);
		
			if (func_61(&uLocal_44))
				break;
		
			func_17(&uLocal_44);
			SYSTEM::WAIT(0);
		}
	}

	func_1(&uLocal_44);
	return;
}

void func_1(var uParam0) // Position - 0xA8
{
	func_16();

	if (func_10(uParam0))
		unk_0x428C32CC68809A35(1);

	if (func_8(&uLocal_44))
		func_4(&uLocal_44);

	unk_0xDAE61414743C8D1D(5);
	func_3();
	unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 0);
	func_2();
	return;
}

void func_2() // Position - 0xE7
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3() // Position - 0xF3
{
	unk_0x8744D2E3FC95740E(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 3);
	return;
}

void func_4(var uParam0) // Position - 0x10E
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(uParam0->f_6), 5);
	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x12C
{
	unk_0x8744D2E3FC95740E(uParam0, iParam1);
	return;
}

void func_6(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x13C
{
	if (!unk_0xF40767E41852FB72(Global_2647042.f_1582) || Global_2647042.f_1582 == unk_0x8F76B2250AC806FA() || bParam2)
	{
		if (bParam0)
		{
			Global_2647042.f_1582 = unk_0x8F76B2250AC806FA();
			Global_2647042.f_1583 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			Global_2647042.f_1582 = -1;
		}
	
		Global_2647042.f_1585 = iParam1;
		Global_2647042.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}

	return;
}

void func_7(BOOL bParam0, BOOL bParam1) // Position - 0x1AE
{
	if (!unk_0xF40767E41852FB72(Global_2647042.f_1598) || Global_2647042.f_1598 == unk_0x8F76B2250AC806FA() || bParam1)
	{
		if (bParam0)
		{
			Global_2647042.f_1598 = unk_0x8F76B2250AC806FA();
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657921[unk_0x259BE71D8A81D4FA() /*463*/].f_73.f_2), 23);
		}
		else
		{
			Global_2647042.f_1598 = -1;
			unk_0x8744D2E3FC95740E(&(Global_2657921[unk_0x259BE71D8A81D4FA() /*463*/].f_73.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}

	return;
}

BOOL func_8(var uParam0) // Position - 0x22D
{
	return func_9(&(uParam0->f_6), 5);
}

BOOL func_9(var uParam0, int iParam1) // Position - 0x23E
{
	return IS_BIT_SET(*uParam0, iParam1);
}

BOOL func_10(var uParam0) // Position - 0x24C
{
	if (uParam0->f_2 != 0)
		if (func_14("STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/, func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/, func_15(uParam0->f_2)))
			return true;

	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_11()) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/);
}

char* func_11() // Position - 0x2B0
{
	return "STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2BB
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_13(char* sParam0, char* sParam1) // Position - 0x2CE
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_14(char* sParam0, char* sParam1, char* sParam2) // Position - 0x2E7
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

char* func_15(int iParam0) // Position - 0x306
{
	if (iParam0 == joaat("annihilator2"))
		return "ANNIH_2_STEALTH" /*Stealth Annihilator*/;

	return unk_0x93E7527CFECC7CD8(iParam0);
}

void func_16() // Position - 0x324
{
	unk_0x8744D2E3FC95740E(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 1);
	return;
}

void func_17(var uParam0) // Position - 0x33F
{
	func_58(uParam0);
	func_57(uParam0);

	if (func_56(uParam0))
	{
		if (func_55(uParam0) && !func_54(uParam0) && unk_0x1B1A446EFA398EB5(uParam0->f_1) && !func_53())
		{
			func_51(uParam0, true);
			func_50(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_54(uParam0))
		{
			if (unk_0x1B1A446EFA398EB5(uParam0->f_1) && !func_53())
			{
				func_51(uParam0, false);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}

	if (func_49(uParam0))
	{
		unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 1);
		func_48();
		func_47(uParam0);
	
		if (func_46())
			func_45(true);
	}
	else if (func_44(uParam0))
	{
		unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 0);
		func_16();
		func_47(uParam0);
		func_43(uParam0, 5);
	
		if (func_46())
			func_45(false);
	}

	if (func_54(uParam0) && !func_55(uParam0))
	{
		func_41(uParam0);
		func_40();
		func_43(uParam0, 2);
	
		if (func_37(uParam0))
			func_35(uParam0);
	}
	else
	{
		func_18(uParam0);
	}

	func_3();
	unk_0x8744D2E3FC95740E(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 4);
	return;
}

void func_18(var uParam0) // Position - 0x48C
{
	int num;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2) && !unk_0x4C705AAF75363287() && func_34(uParam0) && !func_33(0) && !func_32() && func_30() && unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0)))
	{
		func_26(uParam0, 1);
		func_25(&(uParam0->f_6), 3);
		num = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_56(uParam0))
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), num);
		else
			func_20(func_22(uParam0), func_15(uParam0->f_2), num);
	
		func_19(uParam0);
		func_25(&(uParam0->f_6), 0);
	}

	return;
}

void func_19(var uParam0) // Position - 0x56A
{
	func_25(&(uParam0->f_6), 2);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Position - 0x57B
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
	return;
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x598
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam3);
	return;
}

char* func_22(var uParam0) // Position - 0x5BB
{
	if (func_56(uParam0))
		if (func_23(uParam0->f_2))
			return "STEALTH_OFF_S";
		else
			return "STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/;

	return "STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/;
}

BOOL func_23(int iParam0) // Position - 0x5EB
{
	switch (iParam0)
	{
		case 239897677:
			return true;
	}

	return false;
}

var func_24(BOOL bParam0, var uParam1, var uParam2) // Position - 0x608
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_25(var uParam0, int iParam1) // Position - 0x61F
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
	return;
}

void func_26(var uParam0, int iParam1) // Position - 0x62F
{
	int num;
	int num2;

	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				num2 = 19004;
				break;
		
			case joaat("annihilator2"):
				num2 = 36624;
				break;
		
			case 239897677:
				num2 = 36625;
				break;
		}
	
		num = func_29(num2, -1) + iParam1;
	
		if (num >= 0)
			func_27(num2, num, -1);
	}

	return;
}

void func_27(int iParam0, int iParam1, Player plParam2) // Position - 0x690
{
	if (plParam2 == -1)
		plParam2 = func_28();

	if (iParam1 < 0)
		iParam1 = 255;

	unk_0x0F575D68F532124C(iParam0, iParam1, plParam2);
	return;
}

Player func_28() // Position - 0x6B8
{
	return Global_1574925;
}

int func_29(int iParam0, Player plParam1) // Position - 0x6C4
{
	if (plParam1 == -1)
		plParam1 = func_28();

	return unk_0x03CFFD51CE515454(iParam0, plParam1);
}

BOOL func_30() // Position - 0x6E0
{
	return !IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 4) && !func_31();
}

BOOL func_31() // Position - 0x703
{
	return *Global_4718592.f_116241 == 6 || *Global_4718592.f_116241 == 7 && Global_4718592.f_2 == 20;
}

BOOL func_32() // Position - 0x737
{
	return Global_76369;
}

BOOL func_33(int iParam0) // Position - 0x743
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

BOOL func_34(var uParam0) // Position - 0x79A
{
	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_29(19004, -1) < 3;
		
			case joaat("annihilator2"):
				return func_29(36624, -1) < 3;
		
			case 239897677:
				return func_29(36625, -1) < 3;
		
			default:
			
		}
	}

	return true;
}

void func_35(var uParam0) // Position - 0x7F0
{
	if (!unk_0x4C705AAF75363287())
		if (func_23(uParam0->f_2))
			_DISPLAY_HELP_TEXT("STEALTH_WARN_S", 3000);
		else
			_DISPLAY_HELP_TEXT("STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/, 3000);

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x822
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_37(var uParam0) // Position - 0x839
{
	int num;

	if (func_33(0) || func_32())
		return false;

	num = func_38(uParam0);

	switch (num)
	{
		case 1:
			if (unk_0xDEE3EFEA31A1F555(0, 114) || unk_0xDEE3EFEA31A1F555(0, 99) || unk_0xDEE3EFEA31A1F555(0, 100))
				return true;
			break;
	
		case 0:
			if (unk_0xDEE3EFEA31A1F555(0, 114))
				return true;
			break;
	
		case 2:
			if (unk_0xDEE3EFEA31A1F555(0, 92))
				return true;
			break;
	
		case 3:
			if (unk_0xDEE3EFEA31A1F555(0, 68))
				return true;
			break;
	}

	return false;
}

int func_38(var uParam0) // Position - 0x8DD
{
	if (!func_39(uParam0))
		return 4;

	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

BOOL func_39(var uParam0) // Position - 0x933
{
	return unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0);
}

void func_40() // Position - 0x952
{
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 66, 1);
	unk_0x66EFB3D6110055C4(0, 67, 1);
	unk_0x66EFB3D6110055C4(0, 68, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 69, 1);
	unk_0x66EFB3D6110055C4(0, 70, 1);
	unk_0x66EFB3D6110055C4(0, 91, 1);
	unk_0x66EFB3D6110055C4(0, 92, 1);
	unk_0x66EFB3D6110055C4(0, 99, 1);
	unk_0x66EFB3D6110055C4(0, 100, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	return;
}

void func_41(var uParam0) // Position - 0x9BA
{
	int num;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1) && !unk_0x4C705AAF75363287() && func_9(&(uParam0->f_6), 3) && !func_33(0) && !func_32() && func_30() && unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0)))
	{
		num = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_56(uParam0))
			_DISPLAY_HELP_TEXT(func_42(uParam0), num);
		else
			func_21(func_42(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), num);
	
		func_50(uParam0);
		func_25(&(uParam0->f_6), 0);
	}

	return;
}

char* func_42(var uParam0) // Position - 0xA83
{
	if (func_56(uParam0))
		if (func_23(uParam0->f_2))
			return "STEALTH_ON_S";
		else
			return "STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/;

	return "STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/;
}

void func_43(var uParam0, int iParam1) // Position - 0xAB4
{
	if (func_55(uParam0))
		return;

	if (unk_0xD6436470CD2C1484() != iParam1)
		unk_0xDAE61414743C8D1D(iParam1);

	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > iParam1)
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), iParam1, 0);

	return;
}

BOOL func_44(var uParam0) // Position - 0xAEF
{
	return !func_9(uParam0, 0) && func_9(uParam0, 1);
}

void func_45(BOOL bParam0) // Position - 0xB0B
{
	if (bParam0)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 6);
	else
		unk_0x8744D2E3FC95740E(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 6);

	return;
}

BOOL func_46() // Position - 0xB41
{
	if (Global_1845117)
		return false;

	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 5);
}

void func_47(var uParam0) // Position - 0xB64
{
	func_5(&(uParam0->f_6), 0);

	if (func_10(uParam0))
		unk_0x428C32CC68809A35(1);

	if (!func_56(uParam0))
		if (func_54(uParam0))
			func_5(&(uParam0->f_6), 1);
		else
			func_5(&(uParam0->f_6), 2);

	return;
}

void func_48() // Position - 0xBAB
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 1);
	return;
}

BOOL func_49(var uParam0) // Position - 0xBC6
{
	return func_9(uParam0, 0) && !func_9(uParam0, 1);
}

void func_50(var uParam0) // Position - 0xBE2
{
	func_25(&(uParam0->f_6), 1);
	return;
}

void func_51(var uParam0, BOOL bParam1) // Position - 0xBF3
{
	func_52(uParam0->f_1, bParam1);
	return;
}

void func_52(var uParam0, BOOL bParam1) // Position - 0xC05
{
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(uParam0))
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				unk_0x89D51606F3FCA194(uParam0, !bParam1, 0);
				break;
		
			case 239897677:
				unk_0x0C02468829E4AA65(uParam0, !bParam1);
				break;
		}
	}

	return;
}

BOOL func_53() // Position - 0xC58
{
	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 3);
}

BOOL func_54(var uParam0) // Position - 0xC70
{
	return func_9(uParam0, 0);
}

BOOL func_55(var uParam0) // Position - 0xC7F
{
	return func_9(uParam0, 2);
}

BOOL func_56(var uParam0) // Position - 0xC8E
{
	return func_39(uParam0) && uParam0->f_3 == unk_0x4A8C381C258A124D() || unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0) == unk_0x4A8C381C258A124D();
}

void func_57(var uParam0) // Position - 0xCBF
{
	if (func_10(uParam0) && func_33(0) || func_32())
	{
		uParam0->f_6.f_2 = 1;
		unk_0x428C32CC68809A35(1);
		func_5(&(uParam0->f_6), 0);
	
		if (func_54(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		
			if (func_56(uParam0))
				func_26(uParam0, -1);
		}
	}

	return;
}

void func_58(var uParam0) // Position - 0xD27
{
	if (func_54(uParam0))
		if (func_8(uParam0))
			if (func_60())
				func_4(uParam0);
		else if (!func_60())
			func_59(uParam0);
	else if (func_8(uParam0))
		func_4(uParam0);

	unk_0x8744D2E3FC95740E(&(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849), 2);
	return;
}

void func_59(var uParam0) // Position - 0xD84
{
	func_7(true, true);
	func_6(true, -1, true);
	func_25(&(uParam0->f_6), 5);
	return;
}

BOOL func_60() // Position - 0xDA2
{
	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 2);
}

BOOL func_61(var uParam0) // Position - 0xDBA
{
	if (!func_39(uParam0))
		return true;

	if (!func_70(uParam0))
		return true;

	if (!func_69(uParam0->f_2))
		return true;

	if (func_68(unk_0x259BE71D8A81D4FA(), true, true))
		return true;

	if (func_67(unk_0x259BE71D8A81D4FA()))
		return true;

	if (func_64(unk_0x259BE71D8A81D4FA()))
		return true;

	if (func_62(unk_0x259BE71D8A81D4FA()))
		return true;

	return false;
}

BOOL func_62(int iParam0) // Position - 0xE2D
{
	if (iParam0 > -1)
	{
		if (Global_2657921[iParam0 /*463*/].f_246 > -1)
			if (func_63(Global_2657921[iParam0 /*463*/].f_246) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_199, 4))
			return true;
	}

	return false;
}

int func_63(int iParam0) // Position - 0xE76
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	}

	return 6;
}

BOOL func_64(Player plParam0) // Position - 0x11AC
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x11DD
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x123D
{
	return -1;
}

BOOL func_67(int iParam0) // Position - 0x1246
{
	if (IS_BIT_SET(Global_1845263[iParam0 /*877*/].f_267.f_32, 14))
		return true;

	if (IS_BIT_SET(Global_1845263[iParam0 /*877*/].f_267.f_32, 11))
		return true;

	return false;
}

BOOL func_68(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x127F
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_32, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_32, 1))
			return true;

	if (bParam2)
		if (Global_2657921[plParam0 /*463*/].f_321.f_7 != -1)
			return true;

	return false;
}

BOOL func_69(int iParam0) // Position - 0x12E3
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_70(var uParam0) // Position - 0x1309
{
	return unk_0xFC8BFE4B41177C22(uParam0->f_1) && unk_0xD9F5E1FEFD1329E4(uParam0->f_1, 0);
}

void func_71(var uParam0) // Position - 0x1327
{
	BOOL flag;
	BOOL flag2;
	var unk;

	flag = func_9(uParam0, 4);
	flag2 = func_9(uParam0, 0);
	func_82(uParam0);

	if (flag)
		func_25(uParam0, 3);
	else
		func_5(uParam0, 3);

	if (flag2)
		func_25(uParam0, 1);
	else
		func_5(uParam0, 1);

	if (func_39(uParam0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uParam0->f_1 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
		
			if (func_70(uParam0))
			{
				uParam0->f_2 = unk_0x4B423FAA24E8ABF0(uParam0->f_1);
			
				if (unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					func_25(uParam0, 2);
			}
		}
	}

	if (func_70(uParam0))
	{
		if (!unk_0xC39AE5D390581AD5(uParam0->f_1, -1, 0))
		{
			unk = unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0);
		
			if (unk_0xFC8BFE4B41177C22(unk) && !unk_0x1C2F771CDC87A3A5(unk, 0) && unk_0x501EBB0523078750(unk))
			{
				uParam0->f_3 = unk;
			
				if (unk == unk_0x4A8C381C258A124D())
				{
					func_25(uParam0, 4);
				
					if (!func_9(uParam0, 3))
						func_25(&(uParam0->f_6), 6);
				}
			}
		}
	
		if (func_39(uParam0))
			uParam0->f_4 = _GET_VEHICLE_SEAT_PED_IS_IN(unk_0x4A8C381C258A124D(), 0);
	
		if (func_56(uParam0))
			if (func_80() && func_74(uParam0))
				func_25(uParam0, 0);
		else
			func_72(uParam0);
	}

	if (func_49(uParam0))
		uParam0->f_6.f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

void func_72(var uParam0) // Position - 0x147E
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3) && func_73(unk_0x1C1C92A1CBAE364B(uParam0->f_3)))
		func_25(uParam0, 0);
	else
		func_5(uParam0, 0);

	return;
}

BOOL func_73(int iParam0) // Position - 0x14B3
{
	return iParam0 != -1 && IS_BIT_SET(Global_1845263[iParam0 /*877*/].f_849, 1);
}

BOOL func_74(var uParam0) // Position - 0x14D2
{
	BOOL flag;

	flag = func_79();

	if (unk_0x1B1A446EFA398EB5(uParam0->f_1))
	{
		func_78(uParam0);
	
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				flag = !unk_0xA347DA69520FE64A(uParam0->f_1);
				break;
		
			case 239897677:
				flag = !unk_0xEA4743874D515F13(uParam0->f_1);
				break;
		}
	}
	else if (func_77(uParam0))
	{
		if (func_76(uParam0))
			unk_0xF093E270C0B6B318(uParam0->f_1);
	}
	else
	{
		func_75(uParam0);
	}

	return flag;
}

void func_75(var uParam0) // Position - 0x1551
{
	func_25(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x1DD05E817C89C737();
	return;
}

BOOL func_76(var uParam0) // Position - 0x156C
{
	return unk_0x1DD05E817C89C737() - uParam0->f_6.f_1 >= 200;
}

BOOL func_77(var uParam0) // Position - 0x1582
{
	return func_9(&(uParam0->f_6), 4);
}

void func_78(var uParam0) // Position - 0x1593
{
	func_5(&(uParam0->f_6), 4);
	return;
}

BOOL func_79() // Position - 0x15A4
{
	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 1);
}

BOOL func_80() // Position - 0x15BC
{
	return !func_31();
}

int _GET_VEHICLE_SEAT_PED_IS_IN(var ped, int includeLastVehicle) // Position - 0x15C9
{
	var unk;
	int num;
	int i;
	int num2;

	if (!unk_0x4FAFF4BCB7633475(ped))
	{
		if (unk_0x7F420695E3F776FB(ped, includeLastVehicle))
		{
			unk = unk_0x6EF03BE64E058E2F(ped, includeLastVehicle);
		
			if (unk_0xFC8BFE4B41177C22(unk))
			{
				num = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(unk));
			
				if (num == 1)
				{
					num2 = -1;
					return num2;
				}
			
				for (i = 0; i < num; i = i + 1)
				{
					num2 = i - 1;
				
					if (!unk_0xC39AE5D390581AD5(unk, num2, 0))
						if (unk_0xFD5C5BBD1FE92BB7(unk, num2, 0) == ped)
							return num2;
				}
			}
		}
	}

	return num2;
}

void func_82(var uParam0) // Position - 0x164E
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	return;
}

BOOL func_83() // Position - 0x166E
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x1682
{
	if (Global_1575052 == false)
		if (!unk_0x76CD105BCAC6EB9F())
			return true;

	if (func_91())
		return true;

	if (Global_2698534)
		return true;

	if (func_90())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_88())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!unk_0x261E3728EE56B3AC())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x486FF5D06E9659F1(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1706
{
	switch (func_87())
	{
		case 0:
			return func_86();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_86() // Position - 0x1739
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_87() // Position - 0x175D
{
	return Global_32828;
}

BOOL func_88() // Position - 0x1768
{
	return Global_2684312.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1777
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_90() // Position - 0x178E
{
	return Global_2695951;
}

BOOL func_91() // Position - 0x179A
{
	return Global_2684312.f_693;
}

BOOL func_92(var uParam0) // Position - 0x17A9
{
	BOOL flag;

	func_71(uParam0);

	if (func_70(uParam0))
	{
		if (func_56(uParam0))
		{
			if (unk_0x1B1A446EFA398EB5(uParam0->f_1))
			{
				flag = true;
			
				if (func_53())
				{
					flag = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(uParam0->f_6), 6);
					flag = false;
				}
			
				if (flag)
					func_51(uParam0, false);
				else
					func_25(&(uParam0->f_6), 3);
			}
		}
		else
		{
			func_25(&(uParam0->f_6), 3);
		}
	}

	return true;
}

BOOL func_93() // Position - 0x1823
{
	if (func_46() && func_94())
		return true;

	return false;
}

BOOL func_94() // Position - 0x1840
{
	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_849, 6);
}

