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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	BOOL bLocal_21 = 0;
	BOOL bLocal_22 = 0;
	float fLocal_23 = 0f;
	BOOL bLocal_24 = 0;
	BOOL bLocal_25 = 0;
	float fLocal_26 = 0f;
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	float fLocal_29 = 0f;
	BOOL bLocal_30 = 0;
	BOOL bLocal_31 = 0;
	float fLocal_32 = 0f;
	BOOL bLocal_33 = 0;
	BOOL bLocal_34 = 0;
	float fLocal_35 = 0f;
	BOOL bLocal_36 = 0;
	BOOL bLocal_37 = 0;
	float fLocal_38 = 0f;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	float fLocal_41 = 0f;
	BOOL bLocal_42 = 0;
	BOOL bLocal_43 = 0;
	float fLocal_44 = 0f;
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
	uLocal_18 = unk_0x34864AB7DA700AA6(100f, 100f, 30f);
	iLocal_20 = 1;
	fLocal_23 = 0f;
	fLocal_26 = 0f;
	fLocal_29 = 0f;
	fLocal_32 = 0f;
	fLocal_35 = 0f;
	fLocal_38 = 0f;
	fLocal_41 = 0f;
	fLocal_44 = 0f;

	if (unk_0x15CCE8886267624F())
		unk_0x10B228D2FDB7AF16(500);

	if (unk_0x96CFB880BAC634CE(3))
		func_2();

	uLocal_16 = unk_0x8DE4F68A9728925E("p_bubblegum");

	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_16))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		iLocal_19 == 1;
	
		if (iLocal_20 == 1)
		{
			iLocal_20 = 0;
			uLocal_17 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
		
			if (unk_0x78411E34CF90EA8C(uLocal_17))
			{
				unk_0xA3774254665BAA82(uLocal_17, -160.6632f, -1072.1438f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x3AAB5D3F3D4028CC(uLocal_17, 0.01f);
				unk_0x8397B3389E13A5E5(uLocal_17, 0.02f);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			}
		
			unk_0x4C905FB262965D5D(uLocal_18, 66);
		}
	
		iLocal_19 = 1;
		unk_0x6D16B99FEB0AFFF1(uLocal_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_16);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(var uParam0) // Position - 0x13F
{
	if (Global_20792 == false)
	{
		if (unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 190))
		{
			Global_20792 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20792 = false;
	}

	if (Global_20792 == false)
	{
		if (unk_0x875A214D5EBCA509(2, 189))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 189))
		{
			bLocal_21 = true;
			fLocal_23 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 189))
		{
			bLocal_21 = false;
			fLocal_23 = 0f;
		}
	
		if (!bLocal_21 == bLocal_22)
		{
			bLocal_22 = bLocal_21;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(10);
			unk_0x74BF156C860580D4(fLocal_23);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 190))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 190))
		{
			bLocal_24 = true;
			fLocal_26 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 190))
		{
			bLocal_24 = false;
			fLocal_26 = 0f;
		}
	
		if (!bLocal_24 == bLocal_25)
		{
			bLocal_25 = bLocal_24;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(11);
			unk_0x74BF156C860580D4(fLocal_26);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 188))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 188))
		{
			bLocal_27 = true;
			fLocal_29 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 188))
		{
			bLocal_27 = false;
			fLocal_29 = 0f;
		}
	
		if (!bLocal_27 == bLocal_28)
		{
			bLocal_28 = bLocal_27;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(8);
			unk_0x74BF156C860580D4(fLocal_29);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 187))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 187))
		{
			bLocal_30 = true;
			fLocal_32 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 187))
		{
			bLocal_30 = false;
			fLocal_32 = 0f;
		}
	
		if (!bLocal_30 == bLocal_31)
		{
			bLocal_31 = bLocal_30;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0x74BF156C860580D4(fLocal_32);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 202))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 202))
		{
			bLocal_33 = true;
			fLocal_35 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 202))
		{
			bLocal_33 = false;
			fLocal_35 = 0f;
		}
	
		if (!bLocal_33 == bLocal_34)
		{
			bLocal_34 = bLocal_33;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(17);
			unk_0x74BF156C860580D4(fLocal_35);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 204))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 204))
		{
			bLocal_36 = true;
			fLocal_38 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 204))
		{
			bLocal_36 = false;
			fLocal_38 = 0f;
		}
	
		if (!bLocal_36 == bLocal_37)
		{
			bLocal_37 = bLocal_36;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(15);
			unk_0x74BF156C860580D4(fLocal_38);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 201))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			bLocal_39 = true;
			fLocal_41 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 201))
		{
			bLocal_39 = false;
			fLocal_41 = 0f;
		}
	
		if (!bLocal_39 == bLocal_40)
		{
			bLocal_40 = bLocal_39;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(16);
			unk_0x74BF156C860580D4(fLocal_41);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x875A214D5EBCA509(2, 203))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
	
		if (unk_0x6D05C5731A838CB3(2, 203))
		{
			bLocal_42 = true;
			fLocal_44 = 1f;
		}
	
		if (!unk_0x6D05C5731A838CB3(2, 203))
		{
			bLocal_42 = false;
			fLocal_44 = 0f;
		}
	
		if (!bLocal_42 == bLocal_43)
		{
			bLocal_43 = bLocal_42;
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(14);
			unk_0x74BF156C860580D4(fLocal_44);
			unk_0xE6B753D52F4CA222();
		}
	}

	return;
}

void func_2() // Position - 0x43D
{
	if (unk_0x78411E34CF90EA8C(uLocal_17))
		unk_0x85E6A1E36B5E2E4D(uLocal_17, 0);

	unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	func_3(false);
	unk_0x98E393364463951A(0);
	unk_0x428C32CC68809A35(1);
	unk_0xD314260005F064BF(&uLocal_16);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3(BOOL bParam0) // Position - 0x47A
{
	if (bParam0)
	{
		func_10();
	
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
			unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);
	
		Global_20813.f_1 = 1;
	
		if (func_9(0))
			func_4(0);
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!(Global_20813.f_1 == 0))
			Global_20813.f_1 = 3;
	}

	return;
}

void func_4(int iParam0) // Position - 0x4DD
{
	if (func_8())
		return;

	if (Global_21025)
		if (func_7())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_5())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x567
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x58E
{
	if (bParam0)
	{
		if (func_9(0))
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

BOOL func_7() // Position - 0x602
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_8() // Position - 0x610
{
	return IS_BIT_SET(Global_1956030, 19);
}

BOOL func_9(int iParam0) // Position - 0x61F
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

void func_10() // Position - 0x676
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = false;
		Global_22215 = 1;
	}

	return;
}

