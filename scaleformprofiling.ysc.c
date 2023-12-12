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

	if (unk_0x15CCE8886267624F())
		unk_0x10B228D2FDB7AF16(500);

	if (unk_0x96CFB880BAC634CE(3))
		func_2();

	uLocal_16 = unk_0x8DE4F68A9728925E("scaleform_profiling");

	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_16))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		unk_0x6D16B99FEB0AFFF1(uLocal_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_16);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(var uParam0) // Position - 0x93
{
	if (Global_20792 == false)
	{
		if (unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 190) || unk_0x6D05C5731A838CB3(2, 188) || unk_0x6D05C5731A838CB3(2, 187) || unk_0x6D05C5731A838CB3(2, 205) || unk_0x6D05C5731A838CB3(2, 206) || unk_0x6D05C5731A838CB3(2, 201) || unk_0x6D05C5731A838CB3(2, 202))
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
		if (unk_0x6D05C5731A838CB3(2, 189))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(10);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 190))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(11);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 205))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(4);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 206))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(6);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 188))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(8);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 187))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(9);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 201))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(16);
			unk_0xE6B753D52F4CA222();
		}
	
		if (unk_0x6D05C5731A838CB3(2, 202))
		{
			unk_0x88F483FBD433696A(uParam0, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(17);
			unk_0xE6B753D52F4CA222();
		}
	}

	return;
}

void func_2() // Position - 0x215
{
	func_3(false);
	unk_0x98E393364463951A(0);
	unk_0xD314260005F064BF(&uLocal_16);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3(BOOL bParam0) // Position - 0x231
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

void func_4(int iParam0) // Position - 0x294
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

BOOL func_5() // Position - 0x31E
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x345
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

BOOL func_7() // Position - 0x3B9
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_8() // Position - 0x3C7
{
	return IS_BIT_SET(Global_1956030, 19);
}

BOOL func_9(int iParam0) // Position - 0x3D6
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

void func_10() // Position - 0x42D
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = false;
		Global_22215 = 1;
	}

	return;
}

