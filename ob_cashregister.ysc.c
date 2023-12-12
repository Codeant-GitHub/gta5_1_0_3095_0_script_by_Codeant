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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uScriptParam_0 = 0;
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

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (IS_BIT_SET(Global_1681028, 1))
		{
			func_25();
		}
		else
		{
			unk_0xDB2434E51017FFCC(32, 0, -1);
			_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
			unk_0xAECC5FA98C879D67(0);
			iLocal_20 = 1;
		}
	}
	else if (unk_0x96CFB880BAC634CE(2))
	{
		func_25();
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (iLocal_20 == 1)
			if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
				func_25();
	
		if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_0))
			{
				switch (iLocal_16)
				{
					case 0:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_0))
						{
							uLocal_17 = { unk_0xD1A6A821F5AC81DB(uScriptParam_0, 1) };
							iLocal_16 = 1;
						}
						break;
				
					case 1:
						if (unk_0x1C3788A51C49D6AD(uScriptParam_0, 0) && unk_0xE5E2AE8B19267B8A(uScriptParam_0) && !unk_0x110821AE6C63DD4F(uScriptParam_0))
						{
							func_1();
							iLocal_16 = 2;
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}

	return;
}

void func_1() // Position - 0x111
{
	int num;
	int num2;
	var unk;
	int num3;

	num = joaat("prop_money_bag_01");
	num2 = joaat("PICKUP_MONEY_MED_BAG");
	num3 = unk_0xC5935DFB3F39785A(70, 121);

	if (unk_0x76CD105BCAC6EB9F())
	{
		num = joaat("prop_cash_pile_01");
		num3 = unk_0xC5935DFB3F39785A(50, 101);
		num3 = func_13(num3, 1);
	}

	unk_0x0B0C9A0F9AAEB7F0(&unk, 3);
	unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
	unk_0xEC9DAA34BBB4658C(num);

	while (!unk_0x6252BC0DD8A320DB(num))
	{
		SYSTEM::WAIT(0);
	}

	if (unk_0x76CD105BCAC6EB9F())
		func_2(num2, unk_0x165E2DDD2BD0F07D(uLocal_17, 1067030938, 1069547520), unk, num3, num, false, 0);
	else
		unk_0x8D4CAF9A056EA9E4(num2, unk_0x165E2DDD2BD0F07D(uLocal_17, 1067030938, 1069547520), unk, num3, 0, num);

	return;
}

struct<5> func_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x1C5
{
	var unk;

	unk = 123;

	if (func_12() && func_11(iParam0))
		unk = { func_3(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7) };
	else
		unk.f_4 = unk_0xD0DDC0D0D8D33E57(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, iParam8);

	return unk;
}

struct<5> func_3(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x21C
{
	var unk;
	int num;
	int num2;
	int num3;

	unk = 123;

	if (func_10() == -1)
		return unk;

	num = func_9(-1);

	if (num == -1)
		return unk;

	num2 = 123;
	num2 = iParam0;
	num2.f_1 = { uParam1 };

	if (func_4(&num2) != -1)
		return unk;

	unk_0x0B0C9A0F9AAEB7F0(&uParam4, 5);
	num2.f_4 = unk_0x192C5E68A3552FDC(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, 0);
	num3 = unk_0x383461852896D73D();

	if (bParam7)
	{
		Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_12 = unk_0x931D15B1D60C81B0();
		Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_13 = unk_0x4C7F9ACFABADEB9E();
	
		if (Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_13 == 0)
		{
			Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_13 = unk_0xF25E5B7C1279A85B();
			Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_11 = 1;
		}
		else
		{
			Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_11 = 2;
		}
	}

	Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/] = { num2 };
	Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_5 = { uParam1 };
	Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_8 = uParam4;
	Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_9 = iParam5;
	Global_1906517[num3 /*299*/].f_98.f_21[num /*14*/].f_10 = iParam6;
	return num2;
}

int func_4(var uParam0) // Position - 0x399
{
	int i;

	if (!func_7(uParam0))
		return -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_5(uParam0, &Global_2652572.f_2452[i /*16*/]))
			return i;
	}

	return -1;
}

BOOL func_5(var uParam0, var uParam1) // Position - 0x3DC
{
	if (*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, false) && uParam0->f_4 == uParam1->f_4)
		return true;

	return false;
}

BOOL func_6(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x417
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_7(var uParam0) // Position - 0x45E
{
	if (*uParam0 == 123 || _IS_NULL_VECTOR(uParam0->f_1) || uParam0->f_4 == 0)
		return false;

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x490
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_9(int iParam0) // Position - 0x4BA
{
	int num;
	int i;

	if (iParam0 == -1)
		iParam0 = unk_0x383461852896D73D();

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_1906517[iParam0 /*299*/].f_98.f_21[i /*14*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

int func_10() // Position - 0x506
{
	int num;
	int i;

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_2652572.f_2452[i /*16*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

BOOL func_11(int iParam0) // Position - 0x540
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
		case joaat("PICKUP_VEHICLE_MONEY_VARIABLE"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_12() // Position - 0x590
{
	return Global_262145.f_31218;
}

int func_13(int iParam0, int iParam1) // Position - 0x59F
{
	float value;

	switch (iParam1)
	{
		case 0:
			break;
	
		case 1:
			if (iParam0 > 0)
			{
				value = SYSTEM::TO_FLOAT(iParam0) * Global_262145;
				iParam0 = SYSTEM::ROUND(value);
			}
			break;
	
		default:
			break;
	}

	return iParam0;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x5E0
{
	if (Global_1575052 == false)
		if (!unk_0x76CD105BCAC6EB9F())
			return true;

	if (func_21())
		return true;

	if (Global_2698534)
		return true;

	if (func_20())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_18())
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

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x664
{
	switch (func_17())
	{
		case 0:
			return func_16();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_16() // Position - 0x697
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_17() // Position - 0x6BB
{
	return Global_32828;
}

BOOL func_18() // Position - 0x6C6
{
	return Global_2684312.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x6D5
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_20() // Position - 0x6EC
{
	return Global_2695951;
}

BOOL func_21() // Position - 0x6F8
{
	return Global_2684312.f_693;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x707
{
	int i;

	for (i = unk_0xDFF16B5B12604EFF(); i != 2; i = unk_0xDFF16B5B12604EFF())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_24();
			else
				return 0;
	
		if (!func_23(false))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			
				if (func_21())
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bNoTerminate)
					func_24();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			if (!bNoTerminate)
				func_24();
			else
				return 0;
	else if (!unk_0xBF52D447C795492B())
		if (!bNoTerminate)
			func_24();
		else
			return 0;

	return 1;
}

BOOL func_23(BOOL bParam0) // Position - 0x81D
{
	bParam0;
	return Global_1575052;
}

void func_24() // Position - 0x82E
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_25() // Position - 0x83A
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

