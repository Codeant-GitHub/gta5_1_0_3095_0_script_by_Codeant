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
	BOOL bLocal_18 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	var unk;
	int num3;
	int i;
	int num4;

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

	if (unk_0x96CFB880BAC634CE(2))
		func_18();

	num = Global_43883;
	num2 = 15;
	unk = 8;

	while (true)
	{
		if (Global_43922 != 15)
			if (Global_43885 != 0)
				if (Global_43884 != -1)
					if (!unk_0xF40767E41852FB72(Global_43885))
						func_17(&Global_43884);
	
		if (Global_43883 > 0)
		{
			Global_43888 = true;
		
			if (Global_43883 == num)
			{
				num3 = 0;
			
				if (Global_43883 > 1)
				{
					i = 0;
				
					for (i = 0; i < Global_43883; i = i + 1)
					{
						if (_CAN_ENTER_FREEROAM_STATE(Global_43889[i /*4*/].f_2))
							unk[i] = 0;
						else
							unk[i] = 1;
					
						if (Global_43889[i /*4*/].f_1 == 7)
							unk[i] = 1;
					}
				
					num4 = 0;
					i = 0;
				
					for (i = 0; i < Global_43883 - 1; i = i + 1)
					{
						if (!unk[i + 1])
							if (Global_43889[i + 1 /*4*/].f_1 < Global_43889[num4 /*4*/].f_1)
								num4 = i + 1;
					}
				
					num3 = num4;
				
					if (Global_43889[num3 /*4*/].f_2 == 15)
						num3 = -1;
				
					if (num3 != -1)
						if (!_CAN_ENTER_FREEROAM_STATE(Global_43889[num3 /*4*/].f_2))
							num3 = -1;
				}
			
				if (num3 > -1)
				{
					Global_43884 = Global_43889[num3 /*4*/];
					Global_43885 = Global_43889[num3 /*4*/].f_3;
					Global_43922 = Global_43889[num3 /*4*/].f_2;
					Global_43883 = 0;
					Global_43888 = false;
				}
				else
				{
					Global_43883 = 0;
					Global_43888 = false;
				}
			}
		}
	
		if (num2 != Global_43922)
		{
			if (num2 == 15)
				func_14(false);
		
			if (Global_43922 == 15)
				func_14(true);
		
			Global_43888 = false;
			Global_39260 = true;
		
			if (Global_43922 != 5 && Global_43922 != 15)
				unk_0xB1495D79F52B9EEE(8);
		
			if (Global_43922 == 15 || Global_43922 == 6)
				func_13(false);
			else
				func_13(true);
		
			if (func_12(Global_43922))
			{
				if (!bLocal_18)
				{
					unk_0x6E8BBCAC6E64214C(1);
					bLocal_18 = true;
				}
			}
			else if (bLocal_18)
			{
				unk_0x6E8BBCAC6E64214C(0);
				bLocal_18 = false;
			}
		}
	
		num2 = Global_43922;
		num = Global_43883;
		Global_112795 = func_1();
		Global_33105 = unk_0xDDA4278694CAA369();
		SYSTEM::WAIT(0);
	}

	Global_43888 = false;
	return;
}

var func_1() // Position - 0x244
{
	var unk;

	func_11(&unk, unk_0x4BA5A16068183C5E());
	func_10(&unk, unk_0x18E502A71E28968C());
	func_9(&unk, unk_0x5295501D0862870D());
	func_4(&unk, unk_0xB12880C92EA6EE15());
	func_3(&unk, unk_0x8825A6E0A30BDCB8());
	func_2(&unk, unk_0x7598FE4545010A75());
	return unk;
}

void func_2(var uParam0, int iParam1) // Position - 0x28A
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_3(var uParam0, int iParam1) // Position - 0x310
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_4(var uParam0, int iParam1) // Position - 0x343
{
	int num;
	int num2;

	num = func_8(*uParam0);
	num2 = func_6(*uParam0);

	if (iParam1 < 1 || iParam1 > func_5(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_5(int iParam0, int iParam1) // Position - 0x394
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_6(int iParam0) // Position - 0x436
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_7(BOOL bParam0, var uParam1, var uParam2) // Position - 0x458
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_8(int iParam0) // Position - 0x46F
{
	return iParam0 & 15;
}

void func_9(var uParam0, int iParam1) // Position - 0x47C
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_10(var uParam0, int iParam1) // Position - 0x4B6
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_11(var uParam0, int iParam1) // Position - 0x4F1
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_12(int iParam0) // Position - 0x52D
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return true;
	}

	return false;
}

void func_13(BOOL bParam0) // Position - 0x58C
{
	if (!bParam0)
		Global_113011 = unk_0x1DD05E817C89C737() + 250;

	Global_113008 = bParam0;
	return;
}

void func_14(BOOL bParam0) // Position - 0x5AA
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/];
			Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114370.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61220[i /*3*/][0] = Global_114370.f_20567[i];
		Global_61220.f_31[i /*3*/][0] = Global_114370.f_20567.f_11[i];
		Global_61220.f_62[i /*3*/][0] = Global_114370.f_20567.f_22[i];
		Global_61220.f_93[i /*3*/][0] = Global_114370.f_20567.f_33[i];
		Global_61220.f_124[i /*3*/][0] = Global_114370.f_20567.f_44[i];
		Global_61220.f_155[i /*3*/][0] = Global_114370.f_20567.f_55[i];
		Global_61220.f_186[i /*3*/][0] = Global_114370.f_20567.f_66[i];
		Global_61220.f_217[i /*3*/][0] = Global_114370.f_20567.f_77[i];
		Global_61220.f_248[i /*3*/][0] = Global_114370.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_61220[i /*3*/][1] = Global_114370.f_20567[i];
			Global_61220.f_31[i /*3*/][1] = Global_114370.f_20567.f_11[i];
			Global_61220.f_62[i /*3*/][1] = Global_114370.f_20567.f_22[i];
			Global_61220.f_93[i /*3*/][1] = Global_114370.f_20567.f_33[i];
			Global_61220.f_124[i /*3*/][1] = Global_114370.f_20567.f_44[i];
			Global_61220.f_155[i /*3*/][1] = Global_114370.f_20567.f_55[i];
			Global_61220.f_186[i /*3*/][1] = Global_114370.f_20567.f_66[i];
			Global_61220.f_217[i /*3*/][1] = Global_114370.f_20567.f_77[i];
			Global_61220.f_248[i /*3*/][1] = Global_114370.f_20567.f_88[i];
		}
	}

	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x82C
{
	return func_16(iParam0, Global_43922);
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x83D
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

void func_17(int iParam0) // Position - 0xA1E
{
	if (*iParam0 == -1)
		return;

	if (!(*iParam0 == Global_43884))
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = false;
	Global_64036 = 0;
	return;
}

void func_18() // Position - 0xA5B
{
	func_17(&Global_43884);
	Global_43888 = false;
	unk_0xBBC29EBE6E1A48FA();
	return;
}

