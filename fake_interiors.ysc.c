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
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	iLocal_27 = -1;
	uLocal_28 = { 0f, 0f, 0f };

	if (unk_0x96CFB880BAC634CE(2))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!unk_0x76CD105BCAC6EB9F())
			unk_0xBBC29EBE6E1A48FA();
	
		if (func_24(unk_0x259BE71D8A81D4FA()) && unk_0xFC8BFE4B41177C22(func_23()))
			iLocal_31 = func_23();
		else
			iLocal_31 = unk_0x4A8C381C258A124D();
	
		unk_0x1C2F771CDC87A3A5(iLocal_31, 0);
		func_1();
	}

	return;
}

void func_1() // Position - 0xB1
{
	Vector3 vector;
	Vector3 vector2;
	BOOL flag;
	int i;

	func_22();

	if (iLocal_27 != -1 && func_21(iLocal_27))
	{
		vector = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
		vector2 = { func_20(iLocal_27) };
	
		if (SYSTEM::VDIST2(vector2, vector) < (float)func_19(iLocal_27))
		{
			flag = false;
			i = 0;
		
			for (i = 0; i < func_18(iLocal_27); i = i + 1)
			{
				if (!flag)
					if (unk_0x5105BE70DEF1F5FB(iLocal_31, func_17(iLocal_27, i), func_16(iLocal_27, i), func_15(iLocal_27, i), 0, 1, 0))
						flag = true;
			}
		
			if (flag)
			{
				unk_0xF42A811582CF3AE1(unk_0x70E57E9927B6BA58(func_14(iLocal_27)), vector2, vector2.f_1, func_13(iLocal_27), func_12(iLocal_27));
				func_11(iLocal_27);
			}
		}
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_2())
		{
			if (IS_BIT_SET(iLocal_32, 1))
				unk_0x8744D2E3FC95740E(&iLocal_32, 1);
		
			if (unk_0x4D9174D8796EA622())
			{
				if (!IS_BIT_SET(iLocal_32, 0))
				{
					unk_0xA3EA82ACD0C97C3F(15, 1, -1);
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_32, 0);
				}
			}
			else if (IS_BIT_SET(iLocal_32, 0))
			{
				unk_0xA3EA82ACD0C97C3F(15, 0, -1);
				unk_0x8744D2E3FC95740E(&iLocal_32, 0);
			}
		}
		else if (!IS_BIT_SET(iLocal_32, 1))
		{
			unk_0xA3EA82ACD0C97C3F(15, 0, -1);
			unk_0x8744D2E3FC95740E(&iLocal_32, 0);
			unk_0x0B0C9A0F9AAEB7F0(&iLocal_32, 1);
		}
	}

	return;
}

BOOL func_2() // Position - 0x1E7
{
	Player player;

	if (func_8(unk_0x259BE71D8A81D4FA()))
		return true;

	if (func_5(unk_0x259BE71D8A81D4FA(), true))
	{
		player = func_4();
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_8(player))
				return true;
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x227
{
	return -1;
}

Player func_4() // Position - 0x230
{
	return Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10;
}

BOOL func_5(int iParam0, BOOL bParam1) // Position - 0x245
{
	if (!func_7(iParam0))
		return false;

	if (!bParam1)
		if (func_6(iParam0))
			return false;

	return Global_1886967[iParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_6(Player plParam0) // Position - 0x27E
{
	if (func_7(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[plParam0 /*609*/].f_10 == plParam0;

	return false;
}

BOOL func_7(int iParam0) // Position - 0x2B3
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0x2D5
{
	int num;

	if (func_10(plParam0))
	{
		num = func_9(plParam0);
	
		if (num == 3 || num == 4 || num == 5)
			return true;
	}

	return false;
}

int func_9(Player plParam0) // Position - 0x30E
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845263[plParam0 /*877*/].f_267.f_295;

	return 0;
}

BOOL func_10(Player plParam0) // Position - 0x332
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845263[plParam0 /*877*/].f_267.f_295 != 0;

	return false;
}

void func_11(int iParam0) // Position - 0x358
{
	var unk;

	unk = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
	unk_0x83F9B9189E65251B(unk, unk.f_1);

	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			unk = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
			unk_0x83F9B9189E65251B(unk, unk.f_1);
			break;
	
		case 3:
			unk_0xBB6D152B544953A3();
			break;
	
		case 4:
			unk_0xBB6D152B544953A3();
			break;
	}

	return;
}

int func_12(int iParam0) // Position - 0x3C6
{
	var unk;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			unk = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
		
			if (unk.f_2 < 9.7796f)
				return 0;
			else if (unk.f_2 > 9.7796f && unk.f_2 < 16f)
				return 1;
			else
				return 2;
			break;
	
		case 2:
			unk = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
		
			if (unk.f_2 < 178.9f)
				return 0;
			else if (unk.f_2 > 178.9f && unk.f_2 < 188.7f)
				return 1;
			else
				return 2;
			break;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_13(int iParam0) // Position - 0x49B
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

char* func_14(int iParam0) // Position - 0x4EC
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
	
		case 1:
			return "V_FakeWarehousePO103";
	
		case 2:
			return "V_FakeKortzCenter";
	
		case 3:
			return "V_FakePrison";
	
		case 4:
			return "V_FakeMilitaryBase";
	}

	return "";
}

float func_15(int iParam0, int iParam1) // Position - 0x548
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
			
				case 1:
					return 13.1875f;
			
				case 2:
					return 16.25f;
			
				case 3:
					return 21.75f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
			
				case 1:
					return 78.75f;
			
				case 2:
					return 70.6875f;
			
				case 3:
					return 64.4375f;
			
				case 4:
					return 32.375f;
			
				case 5:
					return 19f;
			
				case 6:
					return 19f;
			
				case 7:
					return 19.78125f;
			
				case 8:
					return 32.0625f;
			
				case 9:
					return 35.8125f;
			
				case 10:
					return 30.5f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
			}
			break;
	}

	return 0f;
}

Vector3 func_16(int iParam0, int iParam1) // Position - 0x6DA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5371f, -3057.2888f, 40.75164f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.278374f, -2654.2437f, 20.942299f;
			
				case 1:
					return 13.931628f, -2654.5605f, 14.44239f;
			
				case 2:
					return 55.595722f, -2667.4985f, 10.822453f;
			
				case 3:
					return 34.586597f, -2746.3875f, 10.950064f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.1704f, 256.7264f, 203.40813f;
			
				case 1:
					return -2216.3938f, 329.4761f, 201.36168f;
			
				case 2:
					return -2345.3528f, 350.78818f, 189.65222f;
			
				case 3:
					return -2288.0972f, 388.99094f, 200.9045f;
			
				case 4:
					return -2310.2632f, 406.638f, 200.90408f;
			
				case 5:
					return -2169.2214f, 260.5679f, 202.42944f;
			
				case 6:
					return -2258.7776f, 166.9506f, 202.83177f;
			
				case 7:
					return -2236.9731f, 285.59576f, 203.03947f;
			
				case 8:
					return -2211.3618f, 303.67413f, 214.93228f;
			
				case 9:
					return -2282.0981f, 383.09036f, 201.0395f;
			
				case 10:
					return -2277.9302f, 356.44424f, 201.10155f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.2051f, 2689.4402f, -37.62654f;
			}
			break;
	}

	return uLocal_28;
}

Vector3 func_17(int iParam0, int iParam1) // Position - 0x923
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5345f, -2880.354f, -19.964888f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.0674f, 1.137565f;
			
				case 1:
					return 13.957768f, -2700.626f, 5.046232f;
			
				case 2:
					return 55.61185f, -2687.6814f, 5.005801f;
			
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.3801f, 191.63188f, 165.40373f;
			
				case 1:
					return -2357.9949f, 264.02972f, 162.79884f;
			
				case 2:
					return -2261.4329f, 387.3963f, 154.35222f;
			
				case 3:
					return -2326.399f, 408.3378f, 140.31822f;
			
				case 4:
					return -2304.6167f, 460.21268f, 140.21474f;
			
				case 5:
					return -2150.825f, 216.41681f, 162.80118f;
			
				case 6:
					return -2172.7651f, 203.5957f, 167.41351f;
			
				case 7:
					return -2191.0364f, 305.96097f, 159.62502f;
			
				case 8:
					return -2227.613f, 340.05872f, 165.13574f;
			
				case 9:
					return -2244.4097f, 399.57635f, 137.5101f;
			
				case 10:
					return -2243.2615f, 371.4072f, 137.2722f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.1074f, 3506.837f, 1000.47363f;
			}
			break;
	}

	return uLocal_28;
}

int func_18(int iParam0) // Position - 0xB6C
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 11;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	}

	return 0;
}

int func_19(int iParam0) // Position - 0xBBE
{
	switch (iParam0)
	{
		case 0:
			return 10000;
	
		case 1:
			return 10000;
	
		case 2:
			return 250000;
	
		case 3:
			return 9000000;
	
		case 4:
			return 2250000;
	}

	return 0;
}

Vector3 func_20(int iParam0) // Position - 0xC1C
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
	
		case 1:
			return 40f, -2720f, 12f;
	
		case 2:
			return -2250f, 300f, 182.2f;
	
		case 3:
			return 1700f, 2580f, 80f;
	
		case 4:
			return -2250f, 3100f, 80f;
	}

	return uLocal_28;
}

BOOL func_21(int iParam0) // Position - 0xCB6
{
	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return true;
}

void func_22() // Position - 0xCF3
{
	Vector3 vector;

	iLocal_26 = iLocal_26 + 1;

	if (iLocal_26 > 4)
		iLocal_26 = 0;

	if (iLocal_26 != iLocal_27)
	{
		if (iLocal_27 == -1)
		{
			iLocal_27 = iLocal_26;
		}
		else
		{
			vector = { unk_0xD1A6A821F5AC81DB(iLocal_31, 0) };
		
			if (SYSTEM::VDIST2(func_20(iLocal_26), vector) < SYSTEM::VDIST2(func_20(iLocal_27), vector))
				iLocal_27 = iLocal_26;
		}
	}

	return;
}

int func_23() // Position - 0xD4D
{
	return Global_2621446.f_2;
}

int func_24(int iParam0) // Position - 0xD5B
{
	if (func_26(iParam0, 0))
		return 1;

	if (func_25())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return 1;

	if (IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_199, 2))
		return 1;

	return 0;
}

BOOL func_25() // Position - 0xD9A
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_26(int iParam0, int iParam1) // Position - 0xDA8
{
	BOOL flag;

	if (!func_7(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_27(-1, false) == 8;
	else
		flag = Global_1845263[iParam0 /*877*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_27(int iParam0, BOOL bParam1) // Position - 0xE01
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_28();

	if (Global_1575059[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574919[num2];
		bParam1;
	}

	return num;
}

int func_28() // Position - 0xE42
{
	return Global_1574925;
}

