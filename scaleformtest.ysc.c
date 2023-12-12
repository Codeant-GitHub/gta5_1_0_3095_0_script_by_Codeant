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
	var uLocal_17 = 0;
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
		func_5();

	uLocal_17 = unk_0x8DE4F68A9728925E("instructional_buttons");

	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_17))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		unk_0xA91A4C18A2DB01BD(uLocal_17, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_16, uLocal_17);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(int iParam0, var uParam1) // Position - 0x8D
{
	switch (iParam0)
	{
		case 0:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 191, 1));
			func_2("PRESS A");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(1);
			func_3(unk_0xE934399D6F2C3AC5(2, 194, 1));
			func_2("PRESS B");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(2);
			func_3(unk_0xE934399D6F2C3AC5(2, 193, 1));
			func_2("PRESS X");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(3);
			func_3(unk_0xE934399D6F2C3AC5(2, 192, 1));
			func_2("PRESS Y");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
	
		case 1:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 187, 1));
			func_2("DOWN");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(1);
			func_3(unk_0xE934399D6F2C3AC5(2, 188, 1));
			func_2("UP");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(2);
			func_3(unk_0xE934399D6F2C3AC5(2, 190, 1));
			func_2("LEFT");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(3);
			func_3(unk_0xE934399D6F2C3AC5(2, 189, 1));
			func_2("RIGHT");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
	
		case 2:
			unk_0x88F483FBD433696A(uParam1, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_CLEAR_SPACE");
			unk_0x330108B080A2132F(200);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			func_3(unk_0xE934399D6F2C3AC5(2, 202, 1));
			func_2("BACK");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			iLocal_16 = -1;
			break;
	
		default:
			break;
	}

	return;
}

void func_2(char* sParam0) // Position - 0x312
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_3(var uParam0) // Position - 0x324
{
	unk_0xCE3E870AC37B4253(uParam0);
	return;
}

void func_4() // Position - 0x332
{
	if (Global_20792 == false)
	{
		if (unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 190) || unk_0x6D05C5731A838CB3(2, 188) || unk_0x6D05C5731A838CB3(2, 187) || unk_0x6D05C5731A838CB3(2, 205) || unk_0x6D05C5731A838CB3(2, 206) || unk_0x6D05C5731A838CB3(2, 207) || unk_0x6D05C5731A838CB3(2, 208) || unk_0x6D05C5731A838CB3(2, 201) || unk_0x6D05C5731A838CB3(2, 202))
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
		if (unk_0x6D05C5731A838CB3(2, 217))
			iLocal_16 = 1;
	
		if (unk_0x6D05C5731A838CB3(2, 189))
			iLocal_16 = 2;
	
		if (unk_0x6D05C5731A838CB3(2, 190))
			iLocal_16 = 2;
	
		unk_0x6D05C5731A838CB3(2, 205);
		unk_0x6D05C5731A838CB3(2, 206);
		unk_0x6D05C5731A838CB3(2, 207);
		unk_0x6D05C5731A838CB3(2, 208);
	
		if (unk_0x6D05C5731A838CB3(2, 188))
			iLocal_16 = 2;
	
		if (unk_0x6D05C5731A838CB3(2, 187))
			iLocal_16 = 2;
	
		if (unk_0x6D05C5731A838CB3(2, 201))
			iLocal_16 = 1;
	
		if (unk_0x6D05C5731A838CB3(2, 202))
			iLocal_16 = 0;
	
		if (unk_0x6D05C5731A838CB3(2, 203))
			iLocal_16 = 1;
	
		if (unk_0x6D05C5731A838CB3(2, 204))
			iLocal_16 = 1;
	}

	return;
}

void func_5() // Position - 0x47D
{
	func_6(false);
	unk_0x98E393364463951A(0);
	unk_0xD314260005F064BF(&uLocal_17);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_6(BOOL bParam0) // Position - 0x499
{
	if (bParam0)
	{
		func_13();
	
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
			unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);
	
		Global_20813.f_1 = 1;
	
		if (func_12(0))
			func_7(0);
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!(Global_20813.f_1 == 0))
			Global_20813.f_1 = 3;
	}

	return;
}

void func_7(int iParam0) // Position - 0x4FC
{
	if (func_11())
		return;

	if (Global_21025)
		if (func_10())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8684, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22166 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8683, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8683, 30);

	if (!func_8())
		Global_20813.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x586
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x5AD
{
	if (bParam0)
	{
		if (func_12(0))
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

BOOL func_10() // Position - 0x621
{
	return IS_BIT_SET(Global_1956030, 5);
}

BOOL func_11() // Position - 0x62F
{
	return IS_BIT_SET(Global_1956030, 19);
}

BOOL func_12(int iParam0) // Position - 0x63E
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

void func_13() // Position - 0x695
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = false;
		Global_22215 = 1;
	}

	return;
}

