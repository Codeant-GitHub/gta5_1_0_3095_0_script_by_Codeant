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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
	BOOL flag;

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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;

	if (unk_0x96CFB880BAC634CE(3))
		func_20();

	unk_0x925970A93719CADE(1);
	func_19(0);
	func_18();
	unk_0x29AB4A18A37441C7();

	while (!flag)
	{
		unk = unk_0x29637E6F2B8E5690();
	
		if (unk_0x1B79E937E91F40C3(unk_0xACF74B377C634277(unk), "heist_ctrl_finale"))
			flag = true;
	}

	unk_0xA82578E07F14DD90(unk);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, true, true, true, false, false);
	func_20();
	return;
}

void func_1(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0xE8
{
	func_2(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
	return;
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x111
{
	var unk;
	BOOL flag;
	BOOL flag2;
	int num;
	var unk2;
	float num2;
	var unk7;
	int num3;
	var unk10;
	int num4;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	unk = unk_0xDC8D5832207C2EAD();

	if (unk_0xFC8BFE4B41177C22(unk))
	{
		if (!unk_0x110821AE6C63DD4F(unk))
		{
			unk_0xEE0BCDB1B5E36BCB(unk, 1, 0);
			num = 1;
		}
	
		if (unk_0xD9F5E1FEFD1329E4(unk, 0))
		{
			if (bParam18)
				func_16(unk);
		
			if (unk_0x5105BE70DEF1F5FB(unk, uParam0, uParam3, fParam6, 0, 1, 0))
			{
				flag = true;
			}
			else
			{
				unk7 = { unk_0xD1A6A821F5AC81DB(unk, 1) };
			
				if (unk7.f_2 > uParam0.f_2 && unk7.f_2 < uParam3.f_2 || unk7.f_2 > uParam3.f_2 && unk7.f_2 < uParam0.f_2)
					if (func_13(unk, uParam0, uParam3, fParam6))
						flag = true;
			}
		
			if (unk_0xD9F5E1FEFD1329E4(unk, 0))
			{
				if (unk_0x2E6A27037F1DC473(unk, joaat("taxi")))
				{
					if (unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) != unk_0x4A8C381C258A124D() && unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) != 0)
					{
						if (unk_0xED977E2AE2CB16EE((uParam0 + uParam3) / { 2f, 2f, 2f }, unk_0xD1A6A821F5AC81DB(unk, 1), 1) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_4(unk, _GET_CURRENT_PLAYER_CHARACTER(), true))
					flag = false;
		
			if (flag)
			{
				if (!_IS_NULL_VECTOR(fParam11))
				{
					if (unk_0xD9F5E1FEFD1329E4(unk, 0))
					{
						num3 = unk_0x4B423FAA24E8ABF0(unk);
						unk_0xB07407B3B153C760(unk, &unk2, &num2);
					
						if (unk_0xBA16CD57E37AC32A(num3))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (num3 == joaat("zentorno") || num3 == joaat("btype") || num3 == joaat("dubsta3") || num3 == joaat("monster"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (num3 == joaat("t20") || num3 == joaat("virgo"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (num2 - unk2 > fParam11)
							flag2 = false;
						else if (num2.f_1 - unk2.f_1 > fParam11.f_1)
							flag2 = false;
						else if (num2.f_2 - unk2.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (unk_0xD9F5E1FEFD1329E4(unk, 0))
				{
					if (flag2)
					{
						unk_0x60040CDD28AA1BC3(uParam7, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x5C96CEA06531AB03(unk, fParam10);
						unk_0xB2BD5837A8D3CEDA(unk, uParam7, 1, 0, 0, 1);
						unk_0x1DE99C193C7EC64B(unk, 1084227584);
					
						if (bParam17)
						{
							unk_0xC229299217554C78(unk, 0, 1, 0);
							unk_0xC3680B85B2D7086A(unk, 1);
						}
					}
					else
					{
						if (!unk_0x110821AE6C63DD4F(unk) || !unk_0x7C9905528EE2C3AB(unk, 1))
							unk_0xEE0BCDB1B5E36BCB(unk, 1, 1);
					
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk, 0))
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk, 1), 1, 0, 0, 1);
					
						unk_0x8C1F7D7A31B2A38E(&unk);
					}
				}
			}
		
			if (bParam14)
				unk_0x6F3435F85C932A08(uParam0, uParam3, fParam6, 0, 0, 0, 0, 0, 0, 0);
		
			if (num == 1)
				if (unk_0xFC8BFE4B41177C22(unk))
					if (unk_0x110821AE6C63DD4F(unk))
						unk_0x68298CA6191CDFDB(&unk);
		}
		else
		{
			if (!unk_0x110821AE6C63DD4F(unk))
				unk_0xEE0BCDB1B5E36BCB(unk, 1, 0);
		
			unk10 = unk_0xFD5C5BBD1FE92BB7(unk, -1, 0);
		
			if (unk_0xFC8BFE4B41177C22(unk10) && !unk_0x4FAFF4BCB7633475(unk10))
				unk_0xB2BD5837A8D3CEDA(unk10, unk_0xD1A6A821F5AC81DB(unk10, 1), 1, 0, 0, 1);
		
			num4 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(unk));
		
			if (num4 <= 2)
			{
				unk10 = unk_0xFD5C5BBD1FE92BB7(unk, 0, 0);
			
				if (unk_0xFC8BFE4B41177C22(unk10) && !unk_0x4FAFF4BCB7633475(unk10))
					unk_0xB2BD5837A8D3CEDA(unk10, unk_0xD1A6A821F5AC81DB(unk10, 1), 1, 0, 0, 1);
			}
		
			if (num4 <= 4)
			{
				unk10 = unk_0xFD5C5BBD1FE92BB7(unk, 1, 0);
			
				if (unk_0xFC8BFE4B41177C22(unk10) && !unk_0x4FAFF4BCB7633475(unk10))
					unk_0xB2BD5837A8D3CEDA(unk10, unk_0xD1A6A821F5AC81DB(unk10, 1), 1, 0, 0, 1);
			
				unk10 = unk_0xFD5C5BBD1FE92BB7(unk, 2, 0);
			
				if (unk_0xFC8BFE4B41177C22(unk10) && !unk_0x4FAFF4BCB7633475(unk10))
					unk_0xB2BD5837A8D3CEDA(unk10, unk_0xD1A6A821F5AC81DB(unk10, 1), 1, 0, 0, 1);
			}
		
			unk_0x8C1F7D7A31B2A38E(&unk);
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x507
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_4(var uParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x531
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return false;

	for (i = 0; func_5(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114370.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_5(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x59F
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x670
{
	func_7();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_7() // Position - 0x689
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_9(character) && !func_8(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_9(Global_114370.f_2366.f_539.f_4321))
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
			
				Global_114370.f_2366.f_539.f_4323 = character;
				Global_114370.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_8(int iParam0) // Position - 0x786
{
	return Global_43922 == iParam0;
}

BOOL func_9(eCharacter echParam0) // Position - 0x794
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x7A0
{
	eCharacter i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x7DD
{
	if (func_9(character))
		return func_12(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_12(eCharacter echParam0) // Position - 0x802
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x811
{
	float num;
	var unk3;
	var unk6;
	var unk9;
	var unk12;
	var unk15;
	var unk18;
	var unk31;
	var unk34;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_15(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(uParam0), &unk31, &unk34);
		unk18[0 /*3*/] = { unk_0x0D1381B6E0F3987D(uParam0, unk31, unk31.f_1, 0f) };
		unk18[1 /*3*/] = { unk_0x0D1381B6E0F3987D(uParam0, unk31, unk34.f_1, 0f) };
		unk18[2 /*3*/] = { unk_0x0D1381B6E0F3987D(uParam0, unk34, unk31.f_1, 0f) };
		unk18[3 /*3*/] = { unk_0x0D1381B6E0F3987D(uParam0, unk34, unk34.f_1, 0f) };
	
		if (func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_14(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0xB07
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

Vector3 func_15(float fParam0, var uParam1, var uParam2) // Position - 0xBBB
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_16(var uParam0) // Position - 0xBFA
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (unk_0x4C7724D572378B05(uParam0) <= 200f)
				unk_0x2AEBE39F6BF7D6BC(uParam0, 500f);
		
			if (unk_0x31B58D7972181BFA(uParam0) <= 700f)
				unk_0x2AEBE39F6BF7D6BC(uParam0, 900f);
		
			if (unk_0x8D91ADE44AC79BC9(uParam0) < 200)
				unk_0x2AEBE39F6BF7D6BC(uParam0, 500f);
		}
	}

	return;
}

void func_17() // Position - 0xC5F
{
	Global_113393 = 1;
	return;
}

void func_18() // Position - 0xC6C
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			unk_0x046FF102DCE74A94("BS_2A_2B_INT", 12, 8);
			break;
	
		case CHAR_FRANKLIN:
			unk_0x046FF102DCE74A94("BS_2A_2B_INT", 14, 8);
			break;
	
		case CHAR_TREVOR:
			unk_0x839AD252B0708F35("BS_2A_2B_INT", 8);
			break;
	}

	while (!unk_0xC4ADACBD3FE3F266("BS_2A_2B_INT"))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_19(int iParam0) // Position - 0xCCC
{
	Global_78038.f_138 = iParam0;
	return;
}

void func_20() // Position - 0xCDC
{
	func_25(24, 1);
	func_21(true, 0);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_21(BOOL bParam0, BOOL bParam1) // Position - 0xCF5
{
	int num;
	int num2;
	int num3;

	if (!Global_64040)
		Global_64040 = bParam1;

	if (bParam0)
	{
		if (_IS_MISSION_REPEAT_ACTIVE(false) && Global_79495.f_1 == 1 && func_23(Global_79495))
		{
		}
		else
		{
			Global_64038 = true;
		}
	}

	if (Global_114370.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_22();
		num2 = Global_92124[num /*5*/];
		num3 = Global_79519.f_109[num2 /*4*/];
	
		if (num == -1)
		{
			Global_114370.f_9088;
			return;
		}
	
		if (IS_BIT_SET(Global_92124[num /*5*/].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_92124[num /*5*/].f_1, 5))
			return;
	
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92124[num /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79497, 1);
		Global_79513 = num3;
		Global_79514 = unk_0x1DD05E817C89C737();
	}

	return;
}

int func_22() // Position - 0xDC5
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_92124[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

BOOL func_23(int iParam0) // Position - 0xDF7
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xE35
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

void func_25(int iParam0, BOOL bParam1) // Position - 0xE5D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114370.f_9088.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114370.f_9088.f_99.f_58[iParam0] = bParam1;
	return;
}

