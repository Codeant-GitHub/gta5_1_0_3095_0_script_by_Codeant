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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	var unk;

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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;

	if (unk_0x96CFB880BAC634CE(98))
		func_15();

	func_14();
	num = 0;

	while (true)
	{
		SYSTEM::WAIT(500);
		num2 = 0;
		unk = { 0f, 0f, 0f };
	
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			unk = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	
		while (num2 != 2)
		{
			if (func_13(&Global_33169[num /*7*/]))
			{
				if (func_12(num, unk))
				{
					func_11(&Global_33169[num /*7*/], 2);
				
					if (Global_33169[num /*7*/].f_5 != 0)
					{
						if (unk_0xF40767E41852FB72(Global_33169[num /*7*/].f_5))
							unk_0xE1440F5C29913E5D(Global_33169[num /*7*/].f_5, 1);
					
						Global_33169[num /*7*/].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_33169[num /*7*/], 4))
			{
				if (func_5(&Global_33169[num /*7*/], unk))
					func_1(num);
			}
		
			num2 = num2 + 1;
			num = num + 1;
		
			if (num == 5)
				num = 0;
		}
	}

	return;
}

void func_1(int iParam0) // Position - 0x14A
{
	char* scriptName;
	int num;
	eStackSize stackSize;
	BOOL flag;

	stackSize = DEFAULT;
	flag = true;

	switch (iParam0)
	{
		case 0:
			scriptName = "re_ArmyBase";
			num = joaat("re_armybase");
			break;
	
		case 1:
			stackSize = MULTIPLAYER_MISSION;
			scriptName = "golf_ai_foursome";
			num = joaat("golf_ai_foursome");
			flag = false;
			break;
	
		case 3:
			scriptName = "re_Prison";
			num = joaat("re_prison");
			break;
	
		case 2:
			stackSize = MULTIPLAYER_MISSION;
			scriptName = "golf_ai_foursome_putting";
			num = joaat("golf_ai_foursome_putting");
			flag = false;
			break;
	
		case 4:
			stackSize = FRIEND;
			scriptName = "stripclub";
			num = joaat("stripclub");
			flag = false;
			break;
	}

	if (!flag && func_3())
		return;

	if (unk_0x09112CCF7824FE38(scriptName) != 0)
	{
		if (unk_0x486FF5D06E9659F1(num) == 0)
		{
			unk_0x97A5024CE91641F1(scriptName);
		
			while (!unk_0xA6E4F7A73ABC4A76(scriptName))
			{
				SYSTEM::WAIT(0);
			}
		
			Global_33169[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(scriptName, stackSize);
			unk_0xFD49725F3FE7EE13(scriptName);
		
			if (Global_33169[iParam0 /*7*/].f_5 != 0)
				func_2(&Global_33169[iParam0 /*7*/], 2);
		}
	}

	return;
}

void func_2(int iParam0, int iParam1) // Position - 0x24F
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_3() // Position - 0x260
{
	if (func_4() == 0)
		return true;

	return false;
}

int func_4() // Position - 0x275
{
	return Global_32828;
}

BOOL func_5(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x280
{
	if (!func_10(*iParam0, 1))
		if (func_9() && !func_6(6))
			return false;

	if (SYSTEM::VDIST2(vParam1, iParam0->f_2) > iParam0->f_1)
		return false;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, 0, 0))
			return false;

	return true;
}

BOOL func_6(int iParam0) // Position - 0x306
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x328
{
	return func_8(iParam0, Global_43922);
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x339
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

BOOL func_9() // Position - 0x51A
{
	if (Global_43922 == 15)
		return false;

	return true;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x52F
{
	return iParam0 && iParam1 != false;
}

void func_11(int iParam0, int iParam1) // Position - 0x53E
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_12(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x553
{
	vParam1.f_2 = 0f;

	if (!unk_0xF40767E41852FB72(Global_33169[iParam0 /*7*/].f_5))
		return true;

	if (func_10(Global_33169[iParam0 /*7*/], 4))
		return true;

	if (func_9() && !func_6(6))
		if (!func_10(Global_33169[iParam0 /*7*/], 1))
			if (iParam0 == 1 || iParam0 == 2)
				if (unk_0x486FF5D06E9659F1(joaat("golf")) == 0)
					return true;
			else
				return true;

	if (SYSTEM::VDIST2(Global_33169[iParam0 /*7*/].f_2, vParam1) > Global_33169[iParam0 /*7*/].f_1 + 400f)
		return true;

	return false;
}

BOOL func_13(int iParam0) // Position - 0x5FE
{
	return func_10(*iParam0, 2);
}

void func_14() // Position - 0x60E
{
	int i;

	Global_33169[0 /*7*/].f_2 = { -2189.5447f, 3129.6125f, 0f };
	Global_33169[0 /*7*/].f_1 = 1000f * 1000f;
	Global_33169[0 /*7*/] = 0;
	Global_33169[0 /*7*/].f_5 = 0;
	Global_33169[1 /*7*/].f_2 = { -1172.8221f, 66.5235f, 0f };
	Global_33169[1 /*7*/].f_1 = 300f * 300f;
	Global_33169[1 /*7*/] = 0;
	Global_33169[1 /*7*/].f_5 = 0;
	Global_33169[3 /*7*/].f_2 = { 1692.1469f, 2562.3127f, 0f };
	Global_33169[3 /*7*/].f_1 = 300f * 300f;
	Global_33169[3 /*7*/] = 0;
	Global_33169[3 /*7*/].f_5 = 0;
	Global_33169[2 /*7*/].f_2 = { -1329.6797f, 60.3478f, 0f };
	Global_33169[2 /*7*/].f_1 = 250f * 250f;
	Global_33169[2 /*7*/] = 0;
	Global_33169[2 /*7*/].f_5 = 0;
	Global_33169[4 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_33169[4 /*7*/].f_1 = 100f * 100f;
	Global_33169[4 /*7*/] = 1;
	Global_33169[4 /*7*/].f_5 = 0;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		Global_33169[i /*7*/].f_2.f_2 = 0f;
	}

	return;
}

void func_15() // Position - 0x74E
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

