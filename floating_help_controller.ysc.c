void main() // Position - 0x0
{
	unk_0x51CC1333A10C4E09();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x1C
{
	int i;
	int num;

	i = 0;

	for (i = 0; i < Global_113021; i = i + 1)
	{
		if (Global_113021[i /*28*/].f_21 != 0)
		{
			num = i;
		
			if (unk_0x1DD05E817C89C737() > Global_113021[i /*28*/].f_21 && Global_113021[i /*28*/].f_21 != -1)
			{
				if (func_3(i))
					unk_0x665A7E873A6664BC(num, 0);
			
				func_2(i);
			}
			else if (func_3(i))
			{
				if (Global_113021[i /*28*/].f_21 != -1)
				{
					if (!IS_BIT_SET(Global_113021[i /*28*/].f_27, 0))
					{
						Global_113021[i /*28*/].f_21 = Global_113021[i /*28*/].f_21 + SYSTEM::ROUND(unk_0x0B852B0BF94A8DC1() * 1000f);
					
						if (unk_0x00A2121FCB70A45B(num))
							unk_0x0B0C9A0F9AAEB7F0(&(Global_113021[i /*28*/].f_27), 0);
					}
				}
			
				if (Global_113021[i /*28*/].f_24.f_2 != 9999f)
					if (Global_113021[i /*28*/].f_23 != 0)
						if (!unk_0x1C2F771CDC87A3A5(Global_113021[i /*28*/].f_23, 0))
							if (!IS_BIT_SET(Global_113021[i /*28*/].f_27, 3))
								unk_0xF2095B7705BD9724(num, unk_0x0D1381B6E0F3987D(Global_113021[i /*28*/].f_23, Global_113021[i /*28*/].f_24));
							else
								unk_0xC8E9EF71F45A1675(num, Global_113021[i /*28*/].f_23, Global_113021[i /*28*/].f_24, Global_113021[i /*28*/].f_24.f_1);
					else if (Global_113021[i /*28*/].f_24 != 0f || Global_113021[i /*28*/].f_24.f_1 != 0f || Global_113021[i /*28*/].f_24.f_2 != 0f)
						unk_0xF2095B7705BD9724(num, Global_113021[i /*28*/].f_24);
				else
					unk_0xA0FE5620B9E43942(num, Global_113021[i /*28*/].f_24, Global_113021[i /*28*/].f_24.f_1);
			}
			else if (unk_0x1DD05E817C89C737() - Global_113021[i /*28*/].f_22 > 1000)
			{
				func_2(i);
			}
		}
	}

	return;
}

void func_2(int iParam0) // Position - 0x204
{
	Global_113021[iParam0 /*28*/].f_21 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_113021[iParam0 /*28*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113021[iParam0 /*28*/].f_4), "", 64);
	Global_113021[iParam0 /*28*/].f_23 = 0;
	Global_113021[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_113021[iParam0 /*28*/].f_27 = 0;
	Global_113021[iParam0 /*28*/].f_20 = 0;
	Global_113021[iParam0 /*28*/].f_22 = 0;
	return;
}

BOOL func_3(int iParam0) // Position - 0x26C
{
	int num;

	num = iParam0;

	if (!unk_0x1B79E937E91F40C3(&Global_113021[iParam0 /*28*/], "") && !unk_0xFF692AB7350A74D7(&Global_113021[iParam0 /*28*/]))
		if (IS_BIT_SET(Global_113021[iParam0 /*28*/].f_27, 1))
			if (IS_BIT_SET(Global_113021[iParam0 /*28*/].f_27, 2))
				return func_7(num, &Global_113021[iParam0 /*28*/], &(Global_113021[iParam0 /*28*/].f_4), Global_113021[iParam0 /*28*/].f_20);
			else
				return func_6(num, &Global_113021[iParam0 /*28*/], &(Global_113021[iParam0 /*28*/].f_4));
		else if (IS_BIT_SET(Global_113021[iParam0 /*28*/].f_27, 2))
			return func_5(num, &Global_113021[iParam0 /*28*/], Global_113021[iParam0 /*28*/].f_20);
		else
			return func_4(num, &Global_113021[iParam0 /*28*/]);

	return false;
}

BOOL func_4(int iParam0, char* sParam1) // Position - 0x33F
{
	unk_0x39DCBE5519BD783A(sParam1);
	return unk_0x7EBCD400E7DE179C(1 + iParam0);
}

BOOL func_5(int iParam0, char* sParam1, var uParam2) // Position - 0x355
{
	unk_0x39DCBE5519BD783A(sParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x7EBCD400E7DE179C(1 + iParam0);
}

BOOL func_6(int iParam0, char* sParam1, char* sParam2) // Position - 0x371
{
	unk_0x39DCBE5519BD783A(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	return unk_0x7EBCD400E7DE179C(1 + iParam0);
}

BOOL func_7(int iParam0, char* sParam1, char* sParam2, var uParam3) // Position - 0x38D
{
	unk_0x39DCBE5519BD783A(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	return unk_0x7EBCD400E7DE179C(1 + iParam0);
}

