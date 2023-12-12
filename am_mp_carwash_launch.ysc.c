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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	char* scriptName;
	Vector3 vector;
	int num3;

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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	num2 = joaat("carwash1");
	scriptName = "carwash1";
	vector = { uScriptParam_0.f_1[0 /*3*/] };

	if (unk_0x486FF5D06E9659F1(joaat("am_mp_carwash_launch")) > 1)
		unk_0xBBC29EBE6E1A48FA();

	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x51CC1333A10C4E09();
		unk_0xAECC5FA98C879D67(0);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}

	if (Global_2883694)
	{
		if (unk_0x486FF5D06E9659F1(131838674) == 0)
		{
			unk_0x625263BFD08AE230(131838674);
		
			while (!unk_0x65F606616F48186B(131838674))
			{
				SYSTEM::WAIT(0);
			}
		
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &uScriptParam_0, 23, DEFAULT);
		}
	
		unk_0xBBC29EBE6E1A48FA();
	}

	func_12(unk_0x4A8C381C258A124D());
	num3 = 0;

	while (num3 == 0)
	{
		if (func_9(unk_0x259BE71D8A81D4FA(), true, false) || func_8() || !func_7(unk_0x259BE71D8A81D4FA()) || func_6() || func_5(unk_0x259BE71D8A81D4FA()) || func_4(unk_0x259BE71D8A81D4FA()) || func_2(unk_0x259BE71D8A81D4FA()))
			num3 = 0;
		else
			num3 = 1;
	
		SYSTEM::WAIT(0);
	}

	if (SYSTEM::VDIST2(vector, func_1(157)) < SYSTEM::VDIST2(vector, func_1(156)))
		scriptName = "carwash2";

	num = unk_0x1DD05E817C89C737();
	num2 = unk_0x70E57E9927B6BA58(scriptName);

	if (unk_0x486FF5D06E9659F1(num2) == 0)
	{
		unk_0x97A5024CE91641F1(scriptName);
	
		while (!unk_0xA6E4F7A73ABC4A76(scriptName))
		{
			unk_0x97A5024CE91641F1(scriptName);
			SYSTEM::WAIT(0);
		
			if (unk_0x1DD05E817C89C737() > num + 20000)
				unk_0xBBC29EBE6E1A48FA();
		}
	
		if (unk_0xA6E4F7A73ABC4A76(scriptName))
		{
			SYSTEM::START_NEW_SCRIPT(scriptName, DEFAULT);
			unk_0xFD49725F3FE7EE13(scriptName);
		}
	}

	unk_0xBBC29EBE6E1A48FA();
	return;
}

Vector3 func_1(int iParam0) // Position - 0x1FF
{
	int num;

	num = iParam0;
	return Global_33208[num /*23*/][0 /*3*/];
}

BOOL func_2(Player plParam0) // Position - 0x217
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_5, 4);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x23C
{
	return -1;
}

BOOL func_4(Player plParam0) // Position - 0x245
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_431.f_2, 16);

	return false;
}

BOOL func_5(Player plParam0) // Position - 0x26E
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_368, 29);

	return false;
}

BOOL func_6() // Position - 0x295
{
	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_36.f_18, 0);
}

BOOL func_7(int iParam0) // Position - 0x2AE
{
	return IS_BIT_SET(Global_1845263[iParam0 /*877*/].f_139, 6);
}

int func_8() // Position - 0x2C3
{
	Player player;

	player = Global_2672741;

	if (IS_BIT_SET(Global_1882422[player /*142*/].f_14, 0) && Global_1882422[player /*142*/].f_24 == 2)
		return 1;

	return 0;
}

int func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F6
{
	if (bParam1)
		if (func_10(iParam0))
			return 1;

	!bParam2;

	if (Global_1845263[iParam0 /*877*/] == -1)
		return 0;

	return 1;
}

BOOL func_10(int iParam0) // Position - 0x328
{
	return func_11(iParam0);
}

BOOL func_11(int iParam0) // Position - 0x336
{
	return IS_BIT_SET(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

BOOL func_12(var uParam0) // Position - 0x34D
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return false;

	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

