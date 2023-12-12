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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
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
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	func_12();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (func_11())
			return;
	
		func_1();
	}

	return;
}

void func_1() // Position - 0xA2
{
	func_2();
	return;
}

void func_2() // Position - 0xAE
{
	int i;
	int num;
	int num2;
	var unk3;

	for (i = 0; i < unk_0x703C4F7316B7195D(2); i = i + 1)
	{
		num = unk_0x4BC3E5D2FB0A1665(2, i);
	
		if (func_10(num))
		{
			func_9(&num2);
			func_8(2, i, num, &num2);
			num2.f_1 = unk_0x8034325BF6D6E41F() - 1;
			num2 = num;
		
			if (!func_7(&num2, &unk3))
				func_6(&num2);
		
			func_3(&num2);
		}
	}

	return;
}

void func_3(var uParam0) // Position - 0x116
{
	int num;

	num = *uParam0;

	if (_IS_FMMC_ACTIVE() && func_4(num) && num != 248 && unk_0xF08B45C0CEBE11C2())
		unk_0xB0926B14C2D3A838(0, 1, 0);

	return;
}

BOOL func_4(int iParam0) // Position - 0x14F
{
	return iParam0 == 249 || iParam0 == 250 || iParam0 == 251 || iParam0 == 248;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x17D
{
	return Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_192 != 0;
}

int func_6(var uParam0) // Position - 0x194
{
	if (Global_33107.f_61 < 20)
	{
		Global_33107[Global_33107.f_61 /*3*/] = { *uParam0 };
		Global_33107.f_61 = Global_33107.f_61 + 1;
		return 1;
	}

	return 0;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x1C7
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_33107.f_61)
	{
		if (Global_33107[*uParam1 /*3*/] == *uParam0 && Global_33107[*uParam1 /*3*/].f_2 == uParam0->f_2)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_8(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x215
{
	var unk;

	if (iParam2 == 248 || iParam2 == 249 || iParam2 == 250 || iParam2 == 251)
		if (unk_0xFCEF367B86651ED3(iParam0, iParam1, &unk, 1))
			uParam3->f_2 = unk;

	return;
}

void func_9(var uParam0) // Position - 0x25A
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	return;
}

BOOL func_10(int iParam0) // Position - 0x270
{
	return func_4(iParam0);
}

BOOL func_11() // Position - 0x27E
{
	return false;
}

void func_12() // Position - 0x287
{
	unk_0x51CC1333A10C4E09();
	return;
}

