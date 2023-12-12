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
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	BOOL bLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 7;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	eCharacter echLocal_61 = CHAR_MICHAEL;
	eCharacter echLocal_62 = CHAR_MICHAEL;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	BOOL bLocal_71 = 0;
#endregion

void main() // Position - 0x0
{
	int i;
	int num;
	int j;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	int num6;
	BOOL flag3;
	int num7;

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
	sLocal_19 = "CHECKPOINT_NORMAL";
	sLocal_20 = "CHECKPOINT_MISSED";
	sLocal_21 = "CHECKPOINT_PERFECT";
	uLocal_22 = { 1694.7395f, 3276.5024f, 41.2796f };
	uLocal_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_37 = 80f;
	fLocal_38 = 140f;
	fLocal_39 = 180f;
	bLocal_48 = true;
	iLocal_51 = -1;

	if (unk_0x96CFB880BAC634CE(2))
		func_52();

	for (i = 0; i <= 60; i = i + 1)
	{
		if (func_51(i))
		{
			num = func_50(i);
			func_47(num, func_48(i));
		}
	}

	func_46(91, true);
	func_46(92, true);
	Global_33205 = true;

	while (Global_33207)
	{
		unk_0x1DD05E817C89C737() % 250 == 0;
		SYSTEM::WAIT(0);
	}

	j = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		uLocal_53[j] = -1;
	}

	unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[j /*23*/].f_11), 18);
	j = 0;

	for (j = 0; j < 263; j = j + 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[j /*23*/].f_11), 18);
	}

	bLocal_69 = Global_39259;
	flag = false;
	func_45();
	func_43();

	while (true)
	{
		if (!flag)
			func_42();
	
		flag = func_35();
	
		if (flag)
			Global_33205 = true;
	
		num2 = 0;
		num3 = 0;
		j = 0;
	
		if (Global_33205)
		{
			func_45();
			func_43();
			num4 = 0;
		
			for (j = 0; j < 263; j = j + 1)
			{
				flag2 = IS_BIT_SET(Global_33208[j /*23*/].f_11, 18);
			
				if (!flag2)
				{
					if (func_34(j))
					{
						num3 = num3 + 1;
						flag2 = true;
					}
				}
			
				num2 = num2 + 1;
			
				if (flag2)
				{
					num5 = 0;
					num6 = 0;
				
					if (Global_39259)
					{
						num5 = num5 + 1;
						num6 = num6 + 1;
					}
					else
					{
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 13))
						{
							if (func_33())
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 1))
						{
							if (!bLocal_48)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 2))
						{
							if (bLocal_48)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 7))
						{
							if (!func_32(15))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 16))
						{
							if (!_CAN_ENTER_FREEROAM_STATE(Global_33208[j /*23*/].f_22))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 14))
						{
							if (func_32(5))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 8))
						{
							if (Global_33208[j /*23*/].f_16 != 4 && Global_33208[j /*23*/].f_16 != 8)
							{
								if (!func_29(j))
									num5 = num5 + 1;
							
								num6 = num6 + 1;
							}
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 19))
						{
							switch (echLocal_62)
							{
								case CHAR_FRANKLIN:
								case CHAR_MICHAEL:
								case CHAR_TREVOR:
									break;
							
								default:
									num5 = num5 + 1;
									break;
							}
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 27))
						{
							if (bLocal_43)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (Global_33208[j /*23*/].f_16 == 1)
							func_23();
					}
				
					if (num6 > 0)
						if (num5 > 0)
							unk_0x8744D2E3FC95740E(&(Global_33208[j /*23*/].f_11), 0);
						else if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 15))
							unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[j /*23*/].f_11), 0);
					else if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 15))
						unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[j /*23*/].f_11), 0);
				
					if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 0) && IS_BIT_SET(Global_33208[j /*23*/].f_11, 3))
					{
						flag3 = false;
					
						if (!unk_0xC450B06E5AAA0985(Global_33208[j /*23*/].f_19))
						{
							while (!(unk_0xC802478C8862BDAD() < 150))
							{
								SYSTEM::WAIT(2000);
							}
						
							if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 19))
							{
								switch (echLocal_62)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 28))
										{
											Global_33208[j /*23*/].f_19 = unk_0x339BF323C4261E69(Global_33208[j /*23*/][0 /*3*/], Global_33208[j /*23*/].f_10);
											unk_0xF42EBD7CD0682A8B(Global_33208[j /*23*/].f_19, 128);
											unk_0x89FE619BFBB2024B(Global_33208[j /*23*/].f_19, 0);
										}
										else
										{
											Global_33208[j /*23*/].f_19 = unk_0x34864AB7DA700AA6(Global_33208[j /*23*/][echLocal_62 /*3*/]);
											unk_0x4C905FB262965D5D(Global_33208[j /*23*/].f_19, Global_33208[j /*23*/].f_12[echLocal_62]);
										}
										break;
								
									default:
										Global_33208[j /*23*/].f_19 = unk_0x34864AB7DA700AA6(1f, 2f, 3f);
										break;
								}
							}
							else if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 28))
							{
								Global_33208[j /*23*/].f_19 = unk_0x339BF323C4261E69(Global_33208[j /*23*/][0 /*3*/], Global_33208[j /*23*/].f_10);
								unk_0xF42EBD7CD0682A8B(Global_33208[j /*23*/].f_19, 128);
								unk_0x89FE619BFBB2024B(Global_33208[j /*23*/].f_19, 0);
							}
							else
							{
								Global_33208[j /*23*/].f_19 = unk_0x34864AB7DA700AA6(Global_33208[j /*23*/][0 /*3*/]);
								unk_0x4C905FB262965D5D(Global_33208[j /*23*/].f_19, Global_33208[j /*23*/].f_12[0]);
							}
						
							if (Global_33208[j /*23*/].f_16 == 1)
								flag3 = true;
						}
						else
						{
							if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 19))
							{
								switch (echLocal_62)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										unk_0xDABC73EF230B6665(Global_33208[j /*23*/].f_19, Global_33208[j /*23*/][echLocal_62 /*3*/]);
										break;
								
									default:
										break;
								}
							}
							else
							{
								unk_0xDABC73EF230B6665(Global_33208[j /*23*/].f_19, Global_33208[j /*23*/][0 /*3*/]);
							}
						
							if (IS_BIT_SET(Global_33208[j /*23*/].f_11, 9))
							{
								if (bLocal_45)
								{
									unk_0x861AC9C2D48CEA7F(Global_33208[j /*23*/].f_19, 1);
									bLocal_45 = false;
								}
								else
								{
									unk_0xAB1FFF93A0BBFCDB(Global_33208[j /*23*/].f_19, 1);
									bLocal_45 = true;
								}
							
								unk_0x8D777E1B885E428C(Global_33208[j /*23*/].f_19, 10000);
								unk_0x8744D2E3FC95740E(&(Global_33208[j /*23*/].f_11), 9);
							}
							else
							{
								unk_0x861AC9C2D48CEA7F(Global_33208[j /*23*/].f_19, 0);
							}
						}
					
						func_20(Global_33208[j /*23*/].f_19, j);
					
						if (flag3)
							func_19(j);
					
						num3 = num3 + 1;
					}
					else
					{
						if (unk_0xC450B06E5AAA0985(Global_33208[j /*23*/].f_19))
						{
							unk_0xFE54B8568B2ABD12(&(Global_33208[j /*23*/].f_19));
							num3 = num3 + 1;
						
							if (Global_33208[j /*23*/].f_16 == 1)
								func_18(j);
						}
					
						Global_33208[j /*23*/].f_19 = 0;
					}
				}
			
				unk_0x8744D2E3FC95740E(&(Global_33208[j /*23*/].f_11), 18);
				num7 = 30;
			
				if (unk_0x15CCE8886267624F())
					num7 = 250;
			
				if (num3 > num7)
				{
					SYSTEM::WAIT(0);
					num3 = 0;
				}
			
				if (num2 / 20 > num4)
				{
					num4 = num2 / 20;
					SYSTEM::WAIT(0);
				}
			}
		}
	
		Global_33205 = Global_33206;
		Global_33206 = false;
	
		if (num2 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			echLocal_62 = _GET_CURRENT_PLAYER_CHARACTER();
		}
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x716
{
	func_2();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_2() // Position - 0x72F
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_3(character) && !func_32(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_3(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_3(eCharacter echParam0) // Position - 0x82C
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x838
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x875
{
	if (func_3(character))
		return func_6(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_6(eCharacter echParam0) // Position - 0x89A
{
	return Global_2139[echParam0 /*29*/];
}

void func_7() // Position - 0x8A9
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
	{
		if (func_10(63))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (func_10(126))
				{
					if (func_9(138))
						func_8(138, false, false);
				
					if (!func_9(139))
						if (unk_0x486FF5D06E9659F1(joaat("chop")) == 0)
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
								func_8(139, true, false);
				}
				else
				{
					if (func_9(139))
						func_8(139, false, false);
				
					if (!func_9(138))
						if (unk_0x486FF5D06E9659F1(joaat("chop")) == 0)
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
								func_8(138, true, false);
				}
			}
		}
	}

	return;
}

void func_8(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x985
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33208[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33208[num /*23*/].f_11, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 18);
	
		if (Global_33205 == true)
			Global_33206 = 1;
	
		Global_33205 = true;
	}

	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 15);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 0);
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33208[num /*23*/].f_11, 0))
	{
		if (unk_0xC450B06E5AAA0985(Global_33208[num /*23*/].f_19))
		{
			unk_0x9F83BF77C7204C05(1);
			unk_0xFE54B8568B2ABD12(&(Global_33208[num /*23*/].f_19));
			unk_0x9F83BF77C7204C05(0);
		}
	}

	return;
}

BOOL func_9(int iParam0) // Position - 0xA85
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return unk_0xC450B06E5AAA0985(Global_33208[num /*23*/].f_19);
}

BOOL func_10(int iParam0) // Position - 0xAC1
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_99.f_58[iParam0];
}

void func_11() // Position - 0xAEE
{
	var unk;
	int num;
	float num2;
	int i;
	float num3;

	if (unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
		return;

	unk = { _GET_PLAYER_COORDS(unk_0xB6B621402486C3E4()) };
	num = -1;
	num2 = 1000000f;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] != -1)
		{
			if (unk_0xC450B06E5AAA0985(Global_33208[uLocal_53[i] /*23*/].f_19))
			{
				num3 = unk_0xED977E2AE2CB16EE(unk, unk_0x3CF9D442F2C902BD(Global_33208[uLocal_53[i] /*23*/].f_19), 1);
			
				if (num3 < num2)
				{
					num2 = num3;
					num = i;
				}
			}
		}
	}

	if (iLocal_51 == num)
		return;

	iLocal_51 = num;

	if (num == -1)
		return;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] != -1)
			if (i == num)
				if (unk_0xC450B06E5AAA0985(Global_33208[uLocal_53[i] /*23*/].f_19))
					func_16(uLocal_53[i]);
			else if (unk_0xC450B06E5AAA0985(Global_33208[uLocal_53[i] /*23*/].f_19))
				func_12(uLocal_53[i]);
	}

	return;
}

void func_12(int iParam0) // Position - 0xBF2
{
	func_15(iParam0, false, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

void func_13(int iParam0, BOOL bParam1) // Position - 0xC10
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33208[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 4);
	else
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 4);

	if (Global_33205 == true)
		Global_33206 = 1;

	Global_33205 = true;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 18);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Position - 0xC93
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33208[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 5);
	else
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 5);

	if (Global_33205 == true)
		Global_33206 = 1;

	Global_33205 = true;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 18);
	return;
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD16
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33208[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 6);
	else
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 6);

	if (bParam2)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 11);
	else
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 11);

	if (Global_33205 == true)
		Global_33206 = 1;

	Global_33205 = true;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 18);
	return;
}

void func_16(int iParam0) // Position - 0xDBF
{
	func_15(iParam0, true, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0xDDD
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_18(int iParam0) // Position - 0xDF0
{
	int i;

	if (iLocal_52 < 1)
		return;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] == iParam0)
		{
			iLocal_52 = iLocal_52 - 1;
			uLocal_53[i] = -1;
		
			if (iParam0 == iLocal_51)
				iLocal_51 = -1;
		
			return;
		}
	}

	return;
}

void func_19(int iParam0) // Position - 0xE3B
{
	int i;
	int num;

	if (iLocal_52 == 7)
		return;

	i = 0;
	num = -1;

	for (i = 0; i < iLocal_52; i = i + 1)
	{
		if (uLocal_53[i] == iParam0)
			return;
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_53[i] == -1)
		{
			num = i;
			i = 7;
		}
	}

	uLocal_53[num] = iParam0;
	iLocal_52 = iLocal_52 + 1;
	return;
}

void func_20(var uParam0, int iParam1) // Position - 0xEA4
{
	eCharacter character;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	unk_0xC4F090C2EC0D0FBF(uParam0, 1);
	unk_0x1456FD5C0C438B19(uParam0, 2);
	unk_0x61183D6239A9D7B8(uParam0, func_22(iParam1));

	if (Global_33208[iParam1 /*23*/].f_16 == 4 || Global_33208[iParam1 /*23*/].f_16 == 8)
	{
		switch (character)
		{
			case CHAR_MICHAEL:
				unk_0x61183D6239A9D7B8(uParam0, 42);
				break;
		
			case CHAR_FRANKLIN:
				unk_0x61183D6239A9D7B8(uParam0, 43);
				break;
		
			case CHAR_TREVOR:
				unk_0x61183D6239A9D7B8(uParam0, 44);
				break;
		}
	}

	if (!IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 28))
		unk_0x5D3946F818C6B331(uParam0, 1f);

	if (!unk_0xD6F9DEE4765092A9(&(Global_33208[iParam1 /*23*/].f_20)))
		if (unk_0x6BA487C862DB8DDF(&(Global_33208[iParam1 /*23*/].f_20)))
			unk_0x594D5D0D7071B0DE(uParam0, &(Global_33208[iParam1 /*23*/].f_20));

	flag = IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 4);
	flag2 = IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 5);
	flag3 = IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 6);
	flag4 = false;

	if (func_21(0))
		flag4 = IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 11);

	if (flag3 && !flag4)
		unk_0x360B279488A775FC(uParam0, 0);
	else
		unk_0x360B279488A775FC(uParam0, 1);

	if (flag2 && flag)
	{
		unk_0xF55F62DA99DB0C2F(uParam0, 4);
	}
	else
	{
		if (flag2)
			unk_0xF55F62DA99DB0C2F(uParam0, 5);
	
		if (flag)
			unk_0xF55F62DA99DB0C2F(uParam0, 3);
	}

	switch (Global_33208[iParam1 /*23*/].f_16)
	{
		case 7:
			unk_0x1456FD5C0C438B19(uParam0, 2);
			unk_0x3C6F00DDEA51A2DA(uParam0, 0);
			break;
	
		case 6:
		case 5:
			unk_0x1456FD5C0C438B19(uParam0, 2);
			unk_0x3C6F00DDEA51A2DA(uParam0, 0);
			break;
	
		case 1:
			unk_0x1456FD5C0C438B19(uParam0, 3);
			unk_0x3C6F00DDEA51A2DA(uParam0, 1);
			break;
	
		case 9:
			unk_0x1456FD5C0C438B19(uParam0, 1);
			unk_0x084D9FE4DB5714CF(uParam0, 10);
			unk_0x3C6F00DDEA51A2DA(uParam0, 0);
			break;
	
		case 4:
		case 8:
			unk_0x3C6F00DDEA51A2DA(uParam0, 1);
		
			if (Global_33208[iParam1 /*23*/].f_16 == 4)
				unk_0x1456FD5C0C438B19(uParam0, 7);
			else
				unk_0x1456FD5C0C438B19(uParam0, 5);
		
			if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 28))
					{
						unk_0xF42EBD7CD0682A8B(uParam0, 0);
					}
					else
					{
						if (Global_33208[iParam1 /*23*/].f_17 == CHAR_MICHAEL)
							unk_0x61183D6239A9D7B8(uParam0, 42);
					
						if (Global_33208[iParam1 /*23*/].f_17 == CHAR_FRANKLIN)
							unk_0x61183D6239A9D7B8(uParam0, 43);
					
						if (Global_33208[iParam1 /*23*/].f_17 == CHAR_TREVOR)
							unk_0x61183D6239A9D7B8(uParam0, 44);
					
						if (Global_33208[iParam1 /*23*/].f_16 == 8)
						{
							unk_0x360B279488A775FC(uParam0, IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 5));
							unk_0x1456FD5C0C438B19(uParam0, 3);
							unk_0x360B279488A775FC(uParam0, 1);
							unk_0xA1DFF583C8070610(uParam0, 1);
							unk_0x5D3946F818C6B331(uParam0, 0.77f);
						}
						else
						{
							unk_0x5D3946F818C6B331(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 28))
						unk_0xF42EBD7CD0682A8B(uParam0, 128);
				
					if (Global_33208[iParam1 /*23*/].f_16 == 8)
						unk_0xA1DFF583C8070610(uParam0, 0);
				}
			}
			break;
	
		default:
			unk_0x1456FD5C0C438B19(uParam0, 5);
			break;
	}

	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			unk_0x3C6F00DDEA51A2DA(uParam0, 1);
			break;
	}

	if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 19))
	{
		switch (character)
		{
			case CHAR_FRANKLIN:
			case CHAR_MICHAEL:
			case CHAR_TREVOR:
				unk_0xDABC73EF230B6665(Global_33208[iParam1 /*23*/].f_19, Global_33208[iParam1 /*23*/][character /*3*/]);
				break;
		}
	}

	if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 17))
		unk_0xEDFFFD65B4603707(uParam0, 1);
	else
		unk_0xEDFFFD65B4603707(uParam0, 0);

	if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 20))
		unk_0x80595F890177CB50(uParam0, 1);
	else
		unk_0x80595F890177CB50(uParam0, 0);

	if (IS_BIT_SET(Global_33208[iParam1 /*23*/].f_11, 29))
		unk_0x61183D6239A9D7B8(uParam0, 39);

	return;
}

BOOL func_21(int iParam0) // Position - 0x128B
{
	if (Global_43922 == 15)
		return 0;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return 0;

	return 1;
}

int func_22(int iParam0) // Position - 0x12AD
{
	int num;
	int num2;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0;

	num2 = unk_0x8B5B2BE72A7C0CF6(Global_33208[num /*23*/].f_11, 21, 26);
	return num2;
}

void func_23() // Position - 0x12F0
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_24(i);
	}

	return;
}

void func_24(int iParam0) // Position - 0x1310
{
	BOOL flag;

	if (iParam0 == 10)
		return;

	if (Global_96410[iParam0 /*10*/].f_7 == 263)
		return;

	flag = false;

	if (IS_BIT_SET(Global_114370.f_7232[iParam0], 0))
		if (Global_96410[iParam0 /*10*/].f_9 != _GET_CURRENT_PLAYER_CHARACTER_0())
			flag = true;
		else if (!func_26(iParam0))
			flag = true;

	if (iParam0 == 5)
		if (func_25(6))
			flag = false;

	if (func_21(14))
		flag = false;

	func_8(Global_96410[iParam0 /*10*/].f_7, flag, false);
	return;
}

BOOL func_25(int iParam0) // Position - 0x139A
{
	return IS_BIT_SET(Global_114370.f_7232[iParam0], 0);
}

BOOL func_26(int iParam0) // Position - 0x13AF
{
	int i;
	var unk;
	int num;

	if (Global_101444.f_391 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_26(i))
				return true;
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_27(iParam0, &unk);
		num = unk_0x0556019E7EE8EC9A(Global_96410[iParam0 /*10*/].f_3, &unk);
	
		if (num != 0 && Global_101444.f_391 == num)
			return true;
	}

	return false;
}

BOOL func_27(int iParam0, char* sParam1) // Position - 0x1434
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (unk_0x5AEB336317DC4151("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !unk_0x1B79E937E91F40C3(sParam1, "");
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x1508
{
	func_2();
	return Global_114370.f_2366.f_539.f_4321;
}

BOOL func_29(int iParam0) // Position - 0x1521
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	if (!IS_BIT_SET(Global_33208[num /*23*/].f_11, 8))
		return false;

	if (Global_33208[num /*23*/].f_17 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	if (!IS_BIT_SET(Global_33208[num /*23*/].f_11, 10))
		return false;

	if (Global_33208[num /*23*/].f_18 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	return false;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x15A1
{
	return func_31(iParam0, Global_43922);
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x15B2
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

BOOL func_32(int iParam0) // Position - 0x1793
{
	return Global_43922 == iParam0;
}

BOOL func_33() // Position - 0x17A1
{
	if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) != 0)
		return true;

	return false;
}

BOOL func_34(int iParam0) // Position - 0x17BA
{
	if (bLocal_66 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 13))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_67 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 7) || IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 11) || IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 16))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_68 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 14))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_63 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 10) || IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 8) || IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 19))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_64)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_70 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 27))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_71 && IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 1) || IS_BIT_SET(Global_33208[iParam0 /*23*/].f_11, 2) || Global_33208[iParam0 /*23*/].f_16 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[iParam0 /*23*/].f_11), 18);
		return true;
	}

	return false;
}

BOOL func_35() // Position - 0x1939
{
	int num;

	num = 0;

	if (func_41())
	{
		if (!bLocal_65)
		{
			bLocal_65 = true;
			num = 1;
		}
	}

	if (func_40())
	{
		if (!bLocal_66)
		{
			bLocal_66 = true;
			num = 1;
		}
	}

	if (func_39())
	{
		if (!bLocal_67)
		{
			bLocal_67 = true;
			num = 1;
		}
	}

	if (func_38())
	{
		if (!bLocal_68)
		{
			bLocal_68 = true;
			num = 1;
		}
	}

	bLocal_64 = false;

	if (Global_39259 != bLocal_69)
	{
		bLocal_69 = Global_39259;
	
		if (!bLocal_64)
		{
			bLocal_64 = true;
			num = 1;
		}
	}

	if (func_36())
	{
		if (!bLocal_71)
		{
			bLocal_71 = true;
			num = 1;
		}
	}

	echLocal_62 = _GET_CURRENT_PLAYER_CHARACTER();

	if (echLocal_62 != echLocal_61)
	{
		echLocal_61 = echLocal_62;
		bLocal_63 = true;
		num = 1;
	}

	bLocal_44 = bLocal_43;

	if (func_10(130))
		bLocal_43 = true;

	if (func_10(131))
		bLocal_43 = false;

	if (bLocal_43 != bLocal_44)
	{
		if (!bLocal_70)
			num = 1;
	
		bLocal_70 = true;
	}

	return num;
}

BOOL func_36() // Position - 0x1A07
{
	int num;

	if (unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0))
		return false;

	num = unk_0xF8F35890F43ED2AE(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()));

	if (iLocal_49 != num)
	{
		iLocal_49 = num;
	
		if (num == 0 || func_37(num, false))
			bLocal_48 = true;
		else
			bLocal_48 = false;
	
		return true;
	}

	return false;
}

BOOL func_37(int iParam0, BOOL bParam1) // Position - 0x1A5E
{
	int i;

	i = 0;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (bParam1 && Global_31[i] == 0)
		{
		}
		else if (Global_31[i] == iParam0)
		{
			return true;
		}
	}

	return false;
}

BOOL func_38() // Position - 0x1AA3
{
	if (bLocal_50 != func_21(0))
	{
		bLocal_50 = func_21(0);
		return true;
	}

	return false;
}

BOOL func_39() // Position - 0x1AC1
{
	BOOL flag;

	flag = Global_39260;
	Global_39260 = false;
	flag;
	return flag;
}

BOOL func_40() // Position - 0x1AD9
{
	if (unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4()) != uLocal_47)
	{
		uLocal_47 = unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4());
		return true;
	}

	return false;
}

BOOL func_41() // Position - 0x1AFD
{
	if (Global_43922 != 15)
		return false;

	if (unk_0x5295501D0862870D() != uLocal_46)
	{
		uLocal_46 = unk_0x5295501D0862870D();
		return true;
	}

	return false;
}

void func_42() // Position - 0x1B25
{
	bLocal_63 = false;
	bLocal_64 = false;
	bLocal_65 = false;
	bLocal_66 = false;
	bLocal_67 = false;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	bLocal_71 = false;
	return;
}

void func_43() // Position - 0x1B48
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(112, true, false);
		func_8(113, true, false);
		func_8(114, true, false);
	}

	return;
}

BOOL func_44(int iParam0) // Position - 0x1B7D
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114370.f_9088.f_330[iParam0 /*6*/];
}

void func_45() // Position - 0x1BA9
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(156, 1, false);
		func_8(157, true, false);
		func_8(161, true, false);
		func_8(160, true, false);
		func_8(158, true, false);
		func_12(158);
		func_8(159, true, false);
		func_12(159);
	}

	return;
}

void func_46(int iParam0, BOOL bParam1) // Position - 0x1C02
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33208[num /*23*/].f_11, 2))
		return;

	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 2);
	else
		unk_0x8744D2E3FC95740E(&(Global_33208[num /*23*/].f_11), 2);

	if (Global_33205 == true)
		Global_33206 = 1;

	Global_33205 = true;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33208[num /*23*/].f_11), 18);
	return;
}

void func_47(int iParam0, char* sParam1) // Position - 0x1C85
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_33208[num /*23*/].f_20), sParam1, 8);

	if (unk_0xC450B06E5AAA0985(Global_33208[num /*23*/].f_19))
		unk_0x594D5D0D7071B0DE(Global_33208[num /*23*/].f_19, sParam1);

	return;
}

char* func_48(int iParam0) // Position - 0x1CDF
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /*Barber Shop*/;
	
		case 1:
			return "SB_BAR" /*Barber Shop*/;
	
		case 2:
			return "SB_BAR" /*Barber Shop*/;
	
		case 3:
			return "SB_BAR" /*Barber Shop*/;
	
		case 4:
			return "SB_BAR" /*Barber Shop*/;
	
		case 5:
			return "SB_BAR" /*Barber Shop*/;
	
		case 6:
			return "SB_BAR" /*Barber Shop*/;
	
		case 7:
			return func_49(iParam0, 0, false);
	
		case 8:
			return func_49(iParam0, 0, false);
	
		case 9:
			return func_49(iParam0, 0, false);
	
		case 10:
			return func_49(iParam0, 0, false);
	
		case 11:
			return func_49(iParam0, 0, false);
	
		case 12:
			return func_49(iParam0, 0, false);
	
		case 13:
			return func_49(iParam0, 0, false);
	
		case 14:
			return func_49(iParam0, 0, false);
	
		case 15:
			return func_49(iParam0, 0, false);
	
		case 16:
			return func_49(iParam0, 0, false);
	
		case 17:
			return func_49(iParam0, 0, false);
	
		case 18:
			return func_49(iParam0, 0, false);
	
		case 19:
			return func_49(iParam0, 0, false);
	
		case 20:
			return func_49(iParam0, 0, false);
	
		case 21:
			return func_49(iParam0, 0, false);
	
		case 22:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 23:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 24:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 25:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 26:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 27:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 28:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 29:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 30:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 31:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 32:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 33:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 34:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 35:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 36:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 37:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 38:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 39:
			return func_49(iParam0, 0, false);
	
		case 40:
			return func_49(iParam0, 0, false);
	
		case 41:
			return func_49(iParam0, 0, false);
	
		case 42:
			return func_49(iParam0, 0, false);
	
		case 43:
			return func_49(iParam0, 0, false);
	
		case 44:
			return func_49(iParam0, 0, false);
	
		case 45:
			return func_49(iParam0, 0, false);
	
		case 46:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 47:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 48:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 49:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 52:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 50:
			return "SB_BAR" /*Barber Shop*/;
	
		case 51:
			return "S_CL_BL" /*Casino Store*/;
	
		case 53:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 54:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 55:
			return func_49(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_49(iParam0, 0, false);
	
		case 58:
			return func_49(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 60:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2115
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /*Empty Shop*/;
	
		case 0:
			return "S_H_01" /*Bob Mulét Hair & Beauty*/;
	
		case 1:
			return "S_H_02" /*Herr Kutz Barber*/;
	
		case 2:
			return "S_H_03" /*Beachcombover Barbers*/;
	
		case 3:
			return "S_H_04" /*O'Sheas Barbers*/;
	
		case 4:
			return "S_H_05" /*Herr Kutz Barber*/;
	
		case 5:
			return "S_H_06" /*Hair On Hawick Barbers*/;
	
		case 6:
			return "S_H_07" /*Herr Kutz Barber*/;
	
		case 7:
			return "S_CL_01" /*Discount Store*/;
	
		case 8:
			return "S_CL_02" /*Discount Store*/;
	
		case 9:
			return "S_CL_03" /*Binco Clothing*/;
	
		case 10:
			return "S_CL_04" /*Discount Store*/;
	
		case 11:
			return "S_CL_05" /*Discount Store*/;
	
		case 12:
			return "S_CL_06" /*Binco Clothing*/;
	
		case 13:
			return "S_CL_07" /*Discount Store*/;
	
		case 14:
			return "S_CM_01" /*Suburban*/;
	
		case 15:
			return "S_CM_03" /*Suburban*/;
	
		case 16:
			return "S_CM_04" /*Suburban*/;
	
		case 17:
			return "S_CM_05" /*Suburban*/;
	
		case 18:
			return "S_CH_01" /*Ponsonbys*/;
	
		case 19:
			return "S_CH_02" /*Ponsonbys*/;
	
		case 20:
			return "S_CH_03" /*Ponsonbys*/;
	
		case 21:
			return "S_CA_01" /*Vespucci Movie Masks*/;
	
		case 22:
			return "S_T_01" /*Blazing Tattoo*/;
	
		case 23:
			return "S_T_02" /*Alamo Tattoo Studio*/;
	
		case 24:
			return "S_T_03" /*Paleto Tattoo Studio*/;
	
		case 25:
			return "S_T_04" /*The Pit*/;
	
		case 26:
			return "S_T_05" /*Los Santos Tattoos*/;
	
		case 27:
			return "S_T_06" /*Ink Inc Tattoos*/;
	
		case 28:
			return "S_G_01" /*Ammu-Nation*/;
	
		case 29:
			return "S_G_02" /*Ammu-Nation*/;
	
		case 30:
			return "S_G_03" /*Ammu-Nation*/;
	
		case 31:
			return "S_G_04" /*Ammu-Nation*/;
	
		case 32:
			return "S_G_05" /*Ammu-Nation*/;
	
		case 33:
			return "S_G_06" /*Ammu-Nation*/;
	
		case 34:
			return "S_G_07" /*Ammu-Nation*/;
	
		case 35:
			return "S_G_08" /*Ammu-Nation*/;
	
		case 36:
			return "S_G_09" /*Ammu-Nation*/;
	
		case 37:
			return "S_G_10" /*Ammu-Nation*/;
	
		case 38:
			return "S_G_11" /*Ammu-Nation*/;
	
		case 39:
			return "S_MO_01" /*Los Santos Customs*/;
	
		case 40:
			return "S_MO_05" /*Los Santos Customs*/;
	
		case 41:
			return "S_MO_06" /*Los Santos Customs*/;
	
		case 42:
			return "S_MO_07" /*Beeker's Garage*/;
	
		case 43:
			return "S_MO_08" /*Los Santos Customs*/;
	
		case 44:
			return "S_MO_09" /*Benny's Original Motor Works*/;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /*Bunker Vehicle Workshop*/;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /*Weapon & Vehicle Workshop*/;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /*Hangar Aircraft Workshop*/;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			}
		
			return "S_MO_11" /*Custom Auto Shop*/;
	
		case 46:
			return "S_G_12" /*MOC Armory*/;
	
		case 47:
			return "S_G_13" /*Avenger Armory*/;
	
		case 48:
			return "S_G_14" /*Terrorbyte Armory*/;
	
		case 49:
			return "S_G_15" /*Arena Armory*/;
	
		case 52:
			return "S_G_16" /*Arcade Armory*/;
	
		case 53:
			return "S_G_17" /*Kosatka Armory*/;
	
		case 50:
			return "S_H_08" /*Penthouse Barber*/;
	
		case 51:
			return "S_CL_09" /*Casino Store*/;
	
		case 54:
			return "S_T_07" /*LS Car Meet Tattoos*/;
	
		case 55:
			return "S_CL_10" /*Merch Shop*/;
	
		case 56:
			return "S_G_18" /*Fixer Armory*/;
	
		case 57:
			return "S_CL_11" /*Record A Studios*/;
	
		case 58:
			return "S_G_19";
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	}

	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0) // Position - 0x26C1
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		case 60:
			return 48;
	
		default:
			break;
	}

	return 263;
}

BOOL func_51(int iParam0) // Position - 0x2A3B
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return true;
	
		case 44:
			break;
	}

	return false;
}

void func_52() // Position - 0x2B63
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

