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
	BOOL bLocal_16 = 0;
	BOOL bLocal_17 = 0;
	BOOL bLocal_18 = 0;
	BOOL bLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
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

	if (unk_0x96CFB880BAC634CE(3))
	{
		func_14();
		unk_0xBBC29EBE6E1A48FA();
	}

	func_8();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20813.f_1 != 9)
		{
			if (!bLocal_16)
			{
				bLocal_16 = true;
			}
			else if (Global_20795)
			{
				if (!bLocal_17)
				{
					bLocal_17 = true;
					func_7(Global_20794, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_20794, true);
					func_7(Global_20794, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
		
			if (func_2())
				func_14();
		}
	
		if (func_1())
			func_14();
	}

	return;
}

BOOL func_1() // Position - 0xDC
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 3 || Global_20813.f_1 == 0 || Global_20757 == 1)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x11F
{
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x148
{
	if (!bLocal_18)
	{
		if (unk_0x6D05C5731A838CB3(2, 172))
		{
			bLocal_18 = true;
			func_7(Global_20794, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 172))
	{
		bLocal_18 = false;
	}

	if (!bLocal_19)
	{
		if (unk_0x6D05C5731A838CB3(2, 173))
		{
			bLocal_19 = true;
			func_7(Global_20794, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 173))
	{
		bLocal_19 = false;
	}

	if (!bLocal_20)
	{
		if (unk_0x6D05C5731A838CB3(2, 174))
		{
			bLocal_20 = true;
			func_7(Global_20794, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 174))
	{
		bLocal_20 = false;
	}

	if (!bLocal_21)
	{
		if (unk_0x6D05C5731A838CB3(2, 175))
		{
			bLocal_21 = true;
			func_7(Global_20794, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 175))
	{
		bLocal_21 = false;
	}

	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x25C
{
	int num;
	int num2;
	BOOL flag;
	int num3;
	int num4;
	int num5;
	char* str;

	if (Global_98459 == Global_98460)
		if (!bParam1)
			return;

	if (iParam0 == 0)
		return;

	if (!unk_0xA0C7B98BCF1EEF9E(iParam0))
		return;

	func_8();
	num = Global_98463;
	num2 = Global_98462;
	flag = true;
	num3 = 0;
	num4 = 0;
	num5 = 0;

	while (flag)
	{
		num4 = num3;
		num3 = Global_98464[num /*25*/][num2];
	
		if (!(num3 == num4))
		{
			if (!(num3 == 0))
			{
				switch (num)
				{
					case 0:
						str = "fSu" /*SUNDAY*/;
						break;
				
					case 1:
						str = "fMo" /*MONDAY*/;
						break;
				
					case 2:
						str = "fTu" /*TUESDAY*/;
						break;
				
					case 3:
						str = "fWe" /*WEDNESDAY*/;
						break;
				
					case 4:
						str = "fTh" /*THURSDAY*/;
						break;
				
					case 5:
						str = "fFr" /*FRIDAY*/;
						break;
				
					case 6:
						str = "fSa" /*SATURDAY*/;
						break;
				}
			
				unk_0x88F483FBD433696A(iParam0, "SET_DATA_SLOT_EMPTY");
				unk_0x330108B080A2132F(num5);
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(iParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(5);
				unk_0x330108B080A2132F(num5);
				unk_0x330108B080A2132F(num2);
				unk_0x74BF156C860580D4(0f);
				unk_0x74BF156C860580D4(-1f);
				func_6(str);
				func_6(func_5(num3));
				unk_0xE6B753D52F4CA222();
				num5 = num5 + 1;
			}
		}
	
		num2 = num2 + 1;
	
		if (num2 > 23)
		{
			num2 = 0;
			num = num + 1;
		}
	
		if (num > 6)
			num = 0;
	
		if (num == Global_98463 && num2 == Global_98462)
			flag = false;
	}

	Global_98460 = Global_98459;
	return;
}

char* func_5(int iParam0) // Position - 0x3D0
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /*NOT SET!*/;
	
		case 1:
			return "ORG_EV_1" /*House Viewing*/;
	}

	return "ORG_EV_0" /*NOT SET!*/;
}

void func_6(char* sParam0) // Position - 0x400
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x412
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

void func_8() // Position - 0x475
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int i;
	int j;
	int num9;
	int num10;

	if (!Global_98458)
	{
		Global_98642 = unk_0x8825A6E0A30BDCB8();
		Global_98641 = unk_0xB12880C92EA6EE15();
		Global_98640 = unk_0x5295501D0862870D();
		Global_98458 = true;
		Global_98463 = unk_0xDDA4278694CAA369();
		Global_98462 = unk_0x5295501D0862870D();
		func_12();
		return;
	}

	num = unk_0x8825A6E0A30BDCB8();
	num2 = unk_0xB12880C92EA6EE15();
	num3 = unk_0x5295501D0862870D();
	num4 = Global_98642;
	num5 = Global_98641;
	num6 = Global_98640;
	num7 = 0;
	num8 = 0;
	i = 0;
	j = 0;
	num9 = 0;
	num10 = func_9(num5, num4, num2, num);

	if (num10 > 0)
	{
		num9 = 0;
	
		if (num10 > 7)
		{
			i = 0;
			j = 0;
		
			for (i = 0; i < 7; i = i + 1)
			{
				for (j = 0; j < 24; j = j + 1)
				{
					if (!(Global_98464[num7 /*25*/][num8] == 0))
					{
						Global_98459 = Global_98459 + 1;
						Global_98461 = Global_98461 - 1;
					}
				
					Global_98464[num7 /*25*/][num8] = 0;
				}
			}
		}
		else if (num10 > 1)
		{
			num9 = num9 + ((num10 - 1) * 24);
		}
	
		num9 = num9 + (24 - num6);
		num9 = num9 + (24 - 24 - num3);
		i = 0;
		num8 = Global_98462;
		num7 = Global_98463;
	
		for (i = 0; i < num9; i = i + 1)
		{
			if (num8 > 23)
			{
				num8 = 0;
				num7 = num7 + 1;
			}
		
			if (num7 > 6)
				num7 = 0;
		
			if (!(Global_98464[num7 /*25*/][num8] == 0))
			{
				Global_98459 = Global_98459 + 1;
				Global_98461 = Global_98461 - 1;
			}
		
			Global_98464[num7 /*25*/][num8] = 0;
			num8 = num8 + 1;
		}
	
		Global_98462 = num8 - 1;
		Global_98463 = num7;
	}
	else
	{
		if (num6 > num3)
		{
			Global_98642 = num;
			Global_98641 = num2;
			Global_98640 = num3;
			Global_98463 = unk_0xDDA4278694CAA369();
			Global_98462 = unk_0x5295501D0862870D();
			return;
		}
	
		if (num6 == num3)
		{
			return;
		}
		else
		{
			num9 = num3 - num6;
			i = 0;
			num8 = Global_98462;
			num7 = Global_98463;
		
			for (i = 0; i < num9; i = i + 1)
			{
				if (!(Global_98464[num7 /*25*/][num8] == 0))
				{
					Global_98459 = Global_98459 + 1;
					Global_98461 = Global_98461 - 1;
				}
			
				Global_98464[num7 /*25*/][num8] = 0;
				num8 = num8 + 1;
			
				if (num8 > 23)
				{
					num8 = 0;
					num7 = num7 + 1;
				}
			
				if (num7 > 6)
					num7 = 0;
			}
		
			Global_98462 = num8;
			Global_98463 = num7;
		}
	}

	Global_98459 > Global_98460;

	if (num4 == num && num6 == num3 && num5 == num2)
	{
	}
	else
	{
		Global_98642 = num;
		Global_98641 = num2;
		Global_98640 = num3;
	}

	return;
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x712
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	i = 0;

	if (!(iParam1 == iParam3))
	{
		if (iParam1 < iParam3)
		{
			num = func_10(iParam1) - func_10(iParam1) - iParam0;
			num2 = 0;
		
			if (iParam3 > iParam1 + 1)
			{
				num3 = iParam3 - iParam1;
				num4 = iParam1 + 1;
				i = 0;
			
				for (i = 0; i < num3; i = i + 1)
				{
					if (num4 > 11)
						num4 = 0;
				
					num2 = num2 + func_10(num4);
					num4 = num4 + 1;
				}
			}
		
			num5 = func_10(iParam3) - iParam2;
			num6 = num + num2 + num5;
			return num6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
			return 0;
	
		if (iParam2 == iParam0)
			return 0;
	
		return iParam2 - iParam0;
	}

	return 0;
}

int func_10(int iParam0) // Position - 0x7C5
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x7D3
{
	switch (iParam0)
	{
		case 8:
			return 30;
	
		case 3:
			return 30;
	
		case 5:
			return 30;
	
		case 10:
			return 30;
	
		case 1:
			return 28;
	
		default:
		
	}

	return 31;
}

void func_12() // Position - 0x81F
{
	int i;
	int j;

	Global_98462 = 0;
	Global_98463 = 0;
	i = 0;
	j = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		for (j = 0; j < 24; j = j + 1)
		{
			Global_98464[i /*25*/][j] = 0;
		}
	}

	func_13();
	return;
}

void func_13() // Position - 0x86D
{
	Global_98462 = 0;
	Global_98463 = 0;
	Global_98640 = unk_0x5295501D0862870D();
	Global_98641 = unk_0xB12880C92EA6EE15();
	Global_98642 = unk_0x8825A6E0A30BDCB8();
	return;
}

void func_14() // Position - 0x897
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

