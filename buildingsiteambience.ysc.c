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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;

	if (unk_0x96CFB880BAC634CE(67))
	{
		if (unk_0x36E4BBBE16306470() != 2)
			func_4(19);
	
		func_3();
	}

	func_2(19);
	unk_0x8E1F26D6742EC167(1);

	while (!unk_0xB3157976738FC0C0("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}

	unk_0x8D4B90E299F8C082(-147f, -1005f, 28f);

	while (func_1(70))
	{
		SYSTEM::WAIT(0);
	}

	func_4(19);
	func_3();
	return;
}

BOOL func_1(int iParam0) // Position - 0xB6
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_99.f_58[iParam0];
}

int func_2(int iParam0) // Position - 0xE3
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], num2))
		return 0;

	unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_9088.f_99.f_219[num], num2);
	return 1;
}

void func_3() // Position - 0x13A
{
	unk_0x22A76EDE2316E9A1();
	unk_0x6CC88053C1AF072D();
	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_4(int iParam0) // Position - 0x14E
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114370.f_9088.f_99.f_219[num], num2))
	{
		unk_0x8744D2E3FC95740E(&Global_114370.f_9088.f_99.f_219[num], num2);
		return 1;
	}

	return 0;
}

