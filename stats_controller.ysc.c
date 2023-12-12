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
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	eCharacter echLocal_57 = CHAR_MICHAEL;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	eCharacter echLocal_61 = CHAR_MICHAEL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	Player plLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	BOOL bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
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
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		func_106();
	
		switch (iLocal_53)
		{
			case 0:
				func_101();
				break;
		
			case 1:
				func_92();
				func_2();
				Global_98656 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCC
{
	iLocal_53 = 0;
	return;
}

void func_2() // Position - 0xD7
{
	eCharacter character;
	BOOL flag;
	int i;
	Player player;
	Player player2;
	Player player3;
	var unk;
	int num;
	int num2;
	var unk2;
	var unk3;
	int num3;
	int j;
	BOOL flag2;
	Player player4;
	Player player5;
	BOOL flag3;

	if (bLocal_59)
		bLocal_59 = false;
	else
		iLocal_54 = iLocal_54 + 1;

	bLocal_58 = false;

	if (unk_0x76CD105BCAC6EB9F())
		character = CHAR_MULTIPLAYER;
	else
		character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character != echLocal_57)
	{
		echLocal_57 = character;
		bLocal_58 = true;
		bLocal_65 = false;
		bLocal_66 = false;
		bLocal_73 = false;
		bLocal_79 = false;
	}

	if (echLocal_57 == _CHAR_NULL)
		return;

	flag = false;

	if (iLocal_54 == 6 && func_86(64) || iLocal_54 == 5 && unk_0x486FF5D06E9659F1(joaat("pilot_school")) > 0)
	{
		flag = true;
		bLocal_59 = true;
	}

	func_80();

	if (Global_98654 || Global_98655 && !func_77(0))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_76(echLocal_57, i);
			}
		
			Global_98654 = false;
		}
	}

	if (!flag)
	{
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !unk_0x76CD105BCAC6EB9F() && !func_75(echLocal_57) || unk_0x3555462DB47B7AB1() || func_74() || unk_0xFD216000DC314A92() || unk_0x15CCE8886267624F() || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || Global_79246 || Global_98656 || bLocal_60)
		{
			bLocal_81 = true;
			iLocal_82 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_83 = unk_0x7E3F74F641EE6B27();
		
			return;
		}
	
		if (bLocal_81)
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_82 > &_INVALID_PLAYER_INDEX || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_83, &_INVALID_PLAYER_INDEX)))
				bLocal_81 = false;
			else
				return;
	}

	if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_55 > 2000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_56, 2000)) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_56 = unk_0x7E3F74F641EE6B27();
		}
	
		num3 = 1;
	
		if (bLocal_58)
			num3 = 8;
	
		for (j = 0; j < num3; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_58)
				num2 = j;
			else
				num2 = iLocal_54;
		
			func_73(echLocal_57, num2, &unk, &num);
		
			if (unk_0x76CD105BCAC6EB9F())
				player = func_72(num, -1);
			else if (num2 == 0)
				player = Global_114370.f_2366.f_539.f_2387[echLocal_57];
			else
				unk_0xDF7F16323520B858(unk, &player, -1);
		
			player3 = player;
			player = func_71(player, 0, 100);
		
			if (func_58(echLocal_57, num2, player, &player2))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(num, player2, -1, 1);
				}
				else if (num2 == 0)
				{
					if (Global_114370.f_2366.f_539.f_2387[echLocal_57] == 0)
						flag2 = false;
				
					Global_114370.f_2366.f_539.f_2387[echLocal_57] = player2;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, player2, 1);
				}
			
				if (player2 > func_54(echLocal_57, num2, -1))
				{
					if (unk_0x76CD105BCAC6EB9F())
						if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_114370.f_9088 && !_IS_MISSION_REPEAT_ACTIVE(false) || !IS_BIT_SET(Global_114370.f_9088.f_2[27 /*3*/], 2))
						flag2 = false;
				
					player4 = player2;
					player5 = player4 - (player4 % func_52(echLocal_57, num2));
				
					if (player4 % func_52(echLocal_57, num2) >= 0)
						player5 = player5 + func_52(echLocal_57, num2);
				
					if (player4 >= player5)
						player4 = player5;
					else
						player4 = player5 - func_52(echLocal_57, num2);
				
					if (player2 > player4)
						flag2 = false;
				
					if (func_46())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_58)
						{
							if (unk_0x76CD105BCAC6EB9F())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0x4C705AAF75363287() && func_9())
									{
										_DISPLAY_HELP_TEXT("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
						
							bLocal_60 = true;
							iLocal_63 = player2 - player;
							iLocal_63 = iLocal_63 + (player % func_52(echLocal_57, num2));
							plLocal_64 = player2;
							echLocal_61 = echLocal_57;
							iLocal_62 = num2;
						}
					}
				
					if (player2 >= 100)
					{
						if (func_3(echLocal_57, num2, &unk2))
						{
							if (echLocal_57 == CHAR_MICHAEL)
							{
								unk_0xDF7F16323520B858(joaat("SP0_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_57 == CHAR_FRANKLIN)
							{
								unk_0xDF7F16323520B858(joaat("SP1_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_57 == CHAR_TREVOR)
							{
								unk_0xDF7F16323520B858(joaat("SP2_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else
							{
								echLocal_57 == CHAR_MULTIPLAYER;
							}
						}
					}
				}
			
				func_76(echLocal_57, num2);
			}
			else if (player2 < player3)
			{
				flag3 = true;
			
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(num, player2, -1, 1);
				}
				else if (num2 == 0)
				{
					Global_114370.f_2366.f_539.f_2387[echLocal_57] = player2;
					flag3 = false;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, player2, 1);
				}
			
				if (flag3)
					func_76(echLocal_57, num2);
			}
		}
	}
	else
	{
		bLocal_59 = true;
	}

	return;
}

BOOL func_3(eCharacter echParam0, int iParam1, var uParam2) // Position - 0x5CA
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x7B2
{
	int num;

	num = func_5(iParam0, plParam2);

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, iParam3);

	return;
}

int func_5(int iParam0, Player plParam1) // Position - 0x7D5
{
	return unk_0xD69CE161FE614531(2, iParam0, func_6(plParam1));
}

Player func_6(Player plParam0) // Position - 0x7EA
{
	Player player;
	Player player2;

	player = plParam0;

	if (player == -1)
	{
		player2 = func_7();
	
		if (player2 > -1)
		{
			Global_2750546 = 0;
			player = player2;
		}
		else
		{
			player = 0;
			Global_2750546 = 1;
		}
	}

	return player;
}

Player func_7() // Position - 0x81E
{
	return Global_1574925;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x82A
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_9() // Position - 0x841
{
	var unk;

	unk = unk_0x8034325BF6D6E41F();

	if (Global_1927904 == unk)
	{
		return Global_1927905;
	}
	else
	{
		Global_1927904 = unk;
		Global_1927905 = false;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
			return false;

	if (unk_0xC5D15A335232A15D() && unk_0xBE259DBA45F2996E() && !func_44(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_1927906 == 1)
		return false;

	if (Global_1927715 == true)
		return false;

	if (func_43())
		return false;

	if (unk_0xB2E86D4871B30979())
		return false;

	if (Global_1836655 == true)
		return false;

	if (unk_0xF6D8C7059C3C2495())
		return false;

	if (Global_1057442)
		return false;

	if (IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 16))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (func_41())
		return false;

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2698614, 300000, false) == 1)
				{
					_STOPWATCH_DESTROY(&Global_2698612);
					func_34(3, -1);
				}
				else if (func_37(&Global_2698612, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (unk_0x0721B5D4CF3ACD02())
		return false;

	if (unk_0x4D9174D8796EA622())
		return false;

	if (unk_0x5EA7A06A1491D450())
		if (func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_SNIPERRIFLE") || func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (unk_0x15CCE8886267624F())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (unk_0x7B035E8A1D320F1B(19))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 2))
		return false;

	if (Global_1836446)
		return false;

	if (Global_1836450)
		return false;

	if (Global_1836452)
		return false;

	if (Global_2672741.f_3698.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2738587.f_4069)
		return false;

	if (Global_2672741.f_3564)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), true, false))
		return false;

	if (func_18(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_2672741.f_3698.f_39 == true)
		return false;

	if (Global_2685249.f_2847.f_26 == true)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (unk_0x7B035E8A1D320F1B(16))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (unk_0x3273F980CC5E02CD())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/))
			return false;

	if (IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 6))
		return false;

	if (func_10(unk_0x259BE71D8A81D4FA()))
		return false;

	Global_1927905 = true;
	return true;
}

BOOL func_10(Player plParam0) // Position - 0xB91
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_368, 26);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xBB8
{
	return -1;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBC1
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_13() // Position - 0xBD4
{
	return Global_2672741.f_1689.f_701 != 0;
}

BOOL func_14() // Position - 0xBE8
{
	return Global_2672741.f_2842.f_582;
}

BOOL func_15() // Position - 0xBFA
{
	return func_16();
}

BOOL func_16() // Position - 0xC06
{
	return Global_1663284.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Position - 0xC16
{
	if (bParam0)
		return Global_23572.f_4 && Global_23572.f_104 == 4;

	return Global_23572.f_4;
}

BOOL func_18(int iParam0) // Position - 0xC3F
{
	return IS_BIT_SET(Global_1882422[iParam0 /*142*/].f_14, 0);
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC53
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_20() // Position - 0xCB3
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xCD0
{
	if (iParam0 == 1)
		if (Global_20813.f_1 > 3)
			if (IS_BIT_SET(Global_8683, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20813.f_1 > 3)
		return true;

	return false;
}

BOOL func_22() // Position - 0xD27
{
	return Global_1668317.f_112;
}

BOOL func_23() // Position - 0xD35
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xD4B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1668317.f_137[iParam1])
					return true;
			
				if (Global_1668317.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1668317.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1668317.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xDB1
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668317.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668317.f_1048, iParam0);
}

int func_26(var uParam0) // Position - 0xDE9
{
	int unk;

	unk_0x23B29877D0BE9547(uParam0, &unk, 1);
	return unk;
}

BOOL func_27() // Position - 0xDFD
{
	return Global_2684312.f_692;
}

BOOL func_28() // Position - 0xE0C
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Position - 0xE1D
{
	return Global_2684312.f_691;
}

BOOL func_30() // Position - 0xE2C
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE4E
{
	return Global_1574632.f_18;
}

BOOL func_32() // Position - 0xE5C
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Position - 0xE7E
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, Player plParam1) // Position - 0xE98
{
	int num;
	int num2;

	if (plParam1 == -1)
		plParam1 = func_7();

	if (unk_0x76CA59C648318506() == 0)
		return;

	switch (iParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, plParam1);
			num2 = func_35(plParam1);
			num = unk_0x38640D2193CB547F(num2);
			break;
	
		default:
			num2 = func_35(plParam1);
			num = unk_0x38640D2193CB547F(num2);
		
			if (!IS_BIT_SET(num, iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&num, iParam0);
				unk_0x1A169A00A9C3A74E(num, plParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, 0, plParam1, 1);
			func_4(124, 0, plParam1, 1);
			func_4(115, 0, plParam1, 1);
			func_4(119, 0, plParam1, 1);
			func_4(121, 0, plParam1, 1);
			func_4(122, 0, plParam1, 1);
			func_4(125, 0, plParam1, 1);
			func_56(1304, 0, plParam1, 1);
			func_56(7236, 0, plParam1, 1);
			break;
	}

	return;
}

int func_35(Player plParam0) // Position - 0xF79
{
	int num;

	if (plParam0 == -1)
		plParam0 = func_7();

	switch (plParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void _STOPWATCH_DESTROY(int iParam0) // Position - 0xFDC
{
	iParam0->f_1 = 0;
	return;
}

int func_37(int iParam0, int iParam1, BOOL bParam2) // Position - 0xFE9
{
	if (iParam1 == -1)
		return 1;

	_STOPWATCH_INITIALIZE(iParam0, bParam2, false);

	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *iParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(iParam0);
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *iParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(iParam0);
		return 1;
	}

	return 0;
}

void _STOPWATCH_INITIALIZE(int pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1053
{
	if (pStopwatch->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = unk_0x7E3F74F641EE6B27();
			else
				*pStopwatch = unk_0x0728E77B2BF91D54();
		else
			*pStopwatch = unk_0x1DD05E817C89C737();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_39(int iParam0, Player plParam1) // Position - 0x1098
{
	int num;
	int num2;

	if (plParam1 == -1)
		plParam1 = func_7();

	num = func_35(plParam1);
	num2 = unk_0x38640D2193CB547F(num);
	return IS_BIT_SET(num2, iParam0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x10C1
{
	var unk;

	if (Global_153246 == 2)
		return true;
	else if (Global_153246 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_41() // Position - 0x1179
{
	return Global_1575079;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x1185
{
	return Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_192 != 0;
}

BOOL func_43() // Position - 0x119C
{
	return Global_2707705;
}

BOOL func_44(int iParam0) // Position - 0x11A8
{
	return IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_321.f_3, 13);
}

int func_45(int iParam0, Player plParam1) // Position - 0x11C1
{
	int num;
	int num2;

	num = func_5(iParam0, plParam1);

	if (unk_0xF249567F2E83E093(num, &num2, -1))
		return num2;

	return 0;
}

BOOL func_46() // Position - 0x11E5
{
	if (!func_50(true))
		return false;

	if (func_47())
		return false;

	return Global_1940363;
}

BOOL func_47() // Position - 0x1209
{
	return func_48(unk_0x259BE71D8A81D4FA());
}

BOOL func_48(Player plParam0) // Position - 0x1219
{
	if (func_49(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[plParam0 /*609*/].f_10 == plParam0;

	return false;
}

BOOL func_49(int iParam0) // Position - 0x124E
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_50(BOOL bParam0) // Position - 0x1270
{
	return func_51(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x1282
{
	if (!func_49(iParam0))
		return false;

	if (!bParam1)
		if (func_48(iParam0))
			return false;

	return Global_1886967[iParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

int func_52(eCharacter echParam0, int iParam1) // Position - 0x12BB
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x14CB
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

Player func_54(eCharacter echParam0, int iParam1, Player plParam2) // Position - 0x14F3
{
	if (!unk_0x76CD105BCAC6EB9F())
		if (func_55(14))
			return 100;

	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(1225, plParam2);
			
				case 3:
					return func_72(1231, plParam2);
			
				case 2:
					return func_72(1227, plParam2);
			
				case 4:
					return func_72(1230, plParam2);
			
				case 5:
					return func_72(1229, plParam2);
			
				case 6:
					return func_72(1226, plParam2);
			
				case 7:
					return func_72(1228, plParam2);
			}
			break;
	}

	return 0;
}

BOOL func_55(int iParam0) // Position - 0x1739
{
	return Global_43922 == iParam0;
}

void func_56(int iParam0, Player plParam1, Player plParam2, int iParam3) // Position - 0x1747
{
	int num;

	if (iParam0 != 14626)
	{
		num = func_57(iParam0, plParam2);
	
		if (num != 0)
			unk_0x1164A75E490C27B6(num, plParam1, iParam3);
	}

	return;
}

int func_57(int iParam0, Player plParam1) // Position - 0x1775
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(plParam1));
}

BOOL func_58(eCharacter echParam0, int iParam1, Player plParam2, var uParam3) // Position - 0x178A
{
	*uParam3 = func_59(echParam0, iParam1, false, -1);

	if (*uParam3 > plParam2)
		return true;

	return false;
}

Player func_59(eCharacter echParam0, int iParam1, BOOL bParam2, Player plParam3) // Position - 0x17AC
{
	float value;
	float num;
	Player player;
	Player value2;
	int num2;
	int num3;
	Player value3;
	int i;
	int num4;
	int num5;
	int num6;
	Player player2;
	float num7;

	player = 0;

	switch (iParam1)
	{
		case 0:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_72(64, plParam3));
			}
			break;
	
		case 1:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_RUNNING"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_RUNNING"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_RUNNING"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_69(20, plParam3) / 175f;
				func_66(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(func_57(50, plParam3)));
				func_66(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_65(func_57(47, plParam3)));
				func_66(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (4f * Global_262145.f_24545 * (float)func_72(7237, -1));
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value * 0.25f;
			break;
	
		case 3:
			if (echParam0 == CHAR_MICHAEL)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_64(func_57(52, plParam3))) / 30f;
				func_66(&value);
			}
			break;
	
		case 2:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_72(1500, plParam3)) / 20f;
				func_66(&value);
			}
			break;
	
		case 4:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_72(113, plParam3) / 50;
				func_66(&value);
			}
			break;
	
		case 5:
			if (echParam0 == CHAR_MICHAEL)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_FRANKLIN)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_TREVOR)
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = SYSTEM::TO_FLOAT(func_65(func_57(43, plParam3))) / 10f;
		
			if (echParam0 == CHAR_MICHAEL)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_FRANKLIN)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_TREVOR)
				value = value + (SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (SYSTEM::TO_FLOAT(func_65(func_57(45, plParam3))) / 10f);
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_72(61, plParam3);
				func_66(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				if (IS_BIT_SET(Global_1575005, 15))
					value = 100f;
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				num2 = func_63(echParam0, 0);
			
				if (echParam0 == CHAR_TREVOR)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 1);
			
				if (echParam0 == CHAR_TREVOR)
					if (num2 == 3)
						value = value + 10f;
					else if (num2 == 2)
						value = value + 7f;
					else if (num2 == 1)
						value = value + 5f;
				else if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 2);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 3);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 6);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 4);
			
				if (num2 == 3)
					value = value + 5f;
				else if (num2 == 2)
					value = value + 3f;
				else if (num2 == 1)
					value = value + 2f;
			
				num2 = func_63(echParam0, 5);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 7);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 8);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			
				num2 = func_63(echParam0, 11);
			
				if (num2 == 3)
					value = value + 12f;
				else if (num2 == 2)
					value = value + 9f;
				else if (num2 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114370.f_2366.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_69(19, plParam3) / 45f;
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114370.f_2366.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value2 = func_72(34, plParam3);
				value = value + ((SYSTEM::TO_FLOAT(value2) / 2f) * 1.5f);
				func_66(&value);
			}
			break;
	
		case 6:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_HITS_MISSION"), &num3, -1);
				unk_0xDF7F16323520B858(joaat("SP0_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num3;
				value = SYSTEM::TO_FLOAT(num3 - Global_114370.f_2366.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114370.f_2366.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_HITS_MISSION"), &num3, -1);
				unk_0xDF7F16323520B858(joaat("SP1_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num3;
				value = SYSTEM::TO_FLOAT(num3 - Global_114370.f_2366.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114370.f_2366.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_HITS_MISSION"), &num3, -1);
				unk_0xDF7F16323520B858(joaat("SP2_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num3;
				value = SYSTEM::TO_FLOAT(num3 - Global_114370.f_2366.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114370.f_2366.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value3 = func_72(172, plParam3);
				value = value + (SYSTEM::TO_FLOAT(value3) / 80f);
			}
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_62(i, echParam0))
					{
						case 3:
							num4 = num4 + 1;
							break;
					
						case 2:
							num5 = num5 + 1;
							break;
					
						case 1:
							num6 = num6 + 1;
							break;
					}
				}
			
				value = value + (float)num4 * 3;
				value = value + (float)num5 * 2;
				value = value + (float)num6 * 1;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_61(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_66(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		player2 = func_54(echParam0, iParam1, plParam3);
		value = value + (float)player2;
		value = value + (float)func_60(echParam0, iParam1, plParam3);
	}

	if (bParam2)
	{
		num7 = value - (value % (float)func_52(echParam0, iParam1));
	
		if (value % (float)func_52(echParam0, iParam1) >= 0f)
			num7 = num7 + (float)func_52(echParam0, iParam1);
	
		if (value >= num7)
			value = num7;
		else
			value = num7 - (float)func_52(echParam0, iParam1);
	}

	player = SYSTEM::FLOOR(value);
	player = func_71(player, 0, 100);
	return player;
}

Player func_60(eCharacter echParam0, int iParam1, Player plParam2) // Position - 0x24CF
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][echParam0];
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 1:
					return func_72(72, plParam2);
			
				case 3:
					return func_72(74, plParam2);
			
				case 2:
					return func_72(73, plParam2);
			
				case 4:
					return func_72(75, plParam2);
			
				case 5:
					return func_72(76, plParam2);
			
				case 6:
					return func_72(77, plParam2);
			
				case 7:
					return func_72(78, plParam2);
			}
			break;
	}

	return 0;
}

int func_61(int iParam0) // Position - 0x25DC
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_62(int iParam0, eCharacter echParam1) // Position - 0x25FA
{
	return Global_114370.f_19150[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_63(eCharacter echParam0, int iParam1) // Position - 0x2616
{
	if (echParam0 < CHAR_MICHAEL || echParam0 > CHAR_TREVOR)
		return 0;

	return Global_114370.f_1991[echParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_64(int iParam0) // Position - 0x2644
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 86400);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 3600);
	num = num + (unk_0xE44C8536D6F264FC(iParam0) * 60);
	num = num + unk_0x77A7B5685F038D01(iParam0);
	return num;
}

int func_65(int iParam0) // Position - 0x2687
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 1440);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 60);
	num = num + unk_0xE44C8536D6F264FC(iParam0);
	return num;
}

var func_66(var uParam0) // Position - 0x26BA
{
	if (func_46())
	{
		if (func_67() < Global_262145.f_13370)
			if (*uParam0 + ((float)func_67() * Global_262145.f_13369) <= (float)Global_262145.f_13379)
				*uParam0 = *uParam0 + ((float)func_67() * Global_262145.f_13369);
	
		return *uParam0;
	}

	return *uParam0;
}

BOOL func_67() // Position - 0x2714
{
	if (func_50(true))
		return Global_1845263[func_68() /*877*/].f_205.f_6;

	return false;
}

Player func_68() // Position - 0x273A
{
	return Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10;
}

float func_69(int iParam0, Player plParam1) // Position - 0x274F
{
	var unk;
	float num;

	unk = func_70(iParam0, plParam1);

	if (unk_0x2F0966A034F5ADC6(unk, &num, -1))
		return num;

	return 0f;
}

var func_70(int iParam0, Player plParam1) // Position - 0x2773
{
	return unk_0xD69CE161FE614531(1, iParam0, func_6(plParam1));
}

Player func_71(Player plParam0, int iParam1, int iParam2) // Position - 0x2788
{
	if (plParam0 > iParam2)
		return iParam2;
	else if (plParam0 < iParam1)
		return iParam1;

	return plParam0;
}

Player func_72(int iParam0, Player plParam1) // Position - 0x27AD
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_57(iParam0, plParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_73(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x27DC
{
	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_74() // Position - 0x2A33
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_98850.f_44 == 1;

	return false;
}

BOOL func_75(eCharacter echParam0) // Position - 0x2A4F
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_76(eCharacter echParam0, int iParam1) // Position - 0x2A5B
{
	int value;
	float num;
	var unk;
	int num2;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_73(echParam0, iParam1, &unk, &num2);

	if (unk_0x76CD105BCAC6EB9F())
		value = func_72(num2, -1);
	else
		unk_0xDF7F16323520B858(unk, &value, -1);

	switch (iParam1)
	{
		case 2:
			num = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(value) / 100f));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), num, 1);
			break;
	
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_98655 = true;
			}
			else
			{
				num = 1f - (SYSTEM::TO_FLOAT(value) / 100f);
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), num);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), num);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), num);
			}
			break;
	}

	return;
}

BOOL func_77(int iParam0) // Position - 0x2B47
{
	if (Global_43922 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2B69
{
	return func_79(iParam0, Global_43922);
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x2B7A
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

void func_80() // Position - 0x2D5B
{
	var unk;
	int num;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (unk_0xFC8BFE4B41177C22(unk) && unk_0xD9F5E1FEFD1329E4(unk, 0) && unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) == unk_0x4A8C381C258A124D() && unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk)))
			num = 1;
	}

	func_85(&unk, &num);
	func_84(&unk, &num);
	func_81();
	return;
}

void func_81() // Position - 0x2DFA
{
	int num;
	int value;
	int num2;

	if (!bLocal_79)
	{
		if (echLocal_57 == CHAR_MULTIPLAYER)
		{
			if (Global_2359296[func_83() /*5569*/].f_681.f_7)
			{
				iLocal_76 = func_64(func_57(148, -1));
				Global_2359296[func_83() /*5569*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_83() /*5569*/].f_681.f_6;
			}
		
			if (Global_2359296[func_83() /*5569*/].f_681.f_4 == 0)
				Global_2359296[func_83() /*5569*/].f_681.f_4 = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_2359296[func_83() /*5569*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_83() /*5569*/].f_681.f_5;
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_2292[echLocal_57])
			{
				switch (echLocal_57)
				{
					case CHAR_MICHAEL:
						iLocal_76 = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_FRANKLIN:
						iLocal_76 = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_TREVOR:
						iLocal_76 = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_114370.f_2366.f_539.f_2292[echLocal_57] = false;
			}
			else
			{
				iLocal_76 = Global_114370.f_2366.f_539.f_2288[echLocal_57];
			}
		
			if (Global_114370.f_2366.f_539.f_2280[echLocal_57] == 0)
				Global_114370.f_2366.f_539.f_2280[echLocal_57] = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_114370.f_2366.f_539.f_2280[echLocal_57];
			iLocal_77 = Global_114370.f_2366.f_539.f_2284[echLocal_57];
		}
	
		bLocal_79 = true;
		bLocal_80 = true;
	}
	else if (unk_0x39D1D336459711BE() - iLocal_78 > 86400)
	{
		bLocal_79 = false;
		bLocal_80 = false;
		iLocal_78 = unk_0x39D1D336459711BE();
		iLocal_77 = 0;
	
		if (echLocal_57 == CHAR_MULTIPLAYER)
			Global_2359296[func_83() /*5569*/].f_681.f_7 = 1;
		else
			Global_114370.f_2366.f_539.f_2292[echLocal_57] = true;
	}

	if (bLocal_80)
	{
		switch (echLocal_57)
		{
			case CHAR_MICHAEL:
				num = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_FRANKLIN:
				num = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_TREVOR:
				num = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_64(func_57(148, -1));
				break;
		}
	
		value = num - iLocal_76;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_77;
	
		if (num2 > 0)
		{
			func_82(echLocal_57, 4, num2);
			iLocal_77 = iLocal_77 + num2;
		}
	
		if (num > iLocal_76 + ((unk_0x91C8345B22D52DEC() / 1000) * 60))
			bLocal_80 = false;
	}

	if (echLocal_57 == CHAR_MULTIPLAYER)
	{
		Global_2359296[func_83() /*5569*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_83() /*5569*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_114370.f_2366.f_539.f_2280[echLocal_57] = iLocal_78;
		Global_114370.f_2366.f_539.f_2284[echLocal_57] = iLocal_77;
	}

	return;
}

void func_82(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x30BC
{
	int num;
	int num2;

	switch (echParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14626;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14626)
			{
				num = func_72(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_56(num2, num, -1, 1);
			}
			break;
	}

	return;
}

int func_83() // Position - 0x31AA
{
	int num;

	num = 0;
	return num;
}

void func_84(var uParam0, var uParam1) // Position - 0x31B7
{
	BOOL flag;

	if (bLocal_73)
	{
		flag = true;
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && !unk_0x3F18810075C77D41(*uParam0))
		{
			flag = false;
		
			if (unk_0xDF93B3CFAC96698F(*uParam0) >= 53f)
			{
				func_82(echLocal_57, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_73 = false;
			uLocal_74 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_75 = unk_0x7E3F74F641EE6B27();
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && unk_0xDF93B3CFAC96698F(*uParam0) < 20f && !unk_0x3F18810075C77D41(*uParam0))
	{
		if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_74 > 10000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_75, 10000)))
			bLocal_73 = true;
	}

	return;
}

void func_85(var uParam0, var uParam1) // Position - 0x3292
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_65)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_67 > 1500 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_68, 1500)))
				{
					uLocal_69 = unk_0x1DD05E817C89C737();
				
					if (unk_0x76CD105BCAC6EB9F())
						uLocal_70 = unk_0x7E3F74F641EE6B27();
				
					bLocal_66 = true;
				}
			
				bLocal_65 = false;
			}
		}
	
		if (bLocal_66)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (unk_0xD2A0543EC400E1A5(*uParam0))
				{
					if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 > 20 || !unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 == 0 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_70, 20)) || unk_0x76CD105BCAC6EB9F() && unk_0xCFF17EF1F3F6FF43(unk_0x7E3F74F641EE6B27(), uLocal_70))
					{
					}
					else
					{
						func_82(echLocal_57, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, unk_0x1DD05E817C89C737() - uLocal_69, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_65 && !bLocal_66)
		{
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_71 > 1000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_72, 1000)))
			{
				if (unk_0x3F18810075C77D41(*uParam0))
				{
					if (!bLocal_65)
					{
						uLocal_67 = unk_0x1DD05E817C89C737();
					
						if (unk_0x76CD105BCAC6EB9F())
							uLocal_68 = unk_0x7E3F74F641EE6B27();
					
						bLocal_65 = true;
					}
				}
			}
		}
	}
	else if (bLocal_65 || bLocal_66)
	{
		flag = true;
	}

	if (flag)
	{
		uLocal_71 = unk_0x1DD05E817C89C737();
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_72 = unk_0x7E3F74F641EE6B27();
	
		bLocal_65 = false;
		bLocal_66 = false;
	}

	return;
}

BOOL func_86(BOOL bParam0) // Position - 0x3450
{
	return Global_113455 && bParam0 != false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3461
{
	func_88();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_88() // Position - 0x347A
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_75(character) && !func_55(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_75(Global_114370.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x3577
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35B4
{
	if (func_75(character))
		return func_91(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_91(eCharacter echParam0) // Position - 0x35D9
{
	return Global_2139[echParam0 /*29*/];
}

void func_92() // Position - 0x35E8
{
	char* str;
	int num;

	if (bLocal_60)
	{
		if (echLocal_61 != echLocal_57)
		{
			bLocal_60 = false;
			return;
		}
	
		str = "CHAR_DEFAULT";
	
		switch (echLocal_61)
		{
			case 0:
				str = "CHAR_MICHAEL";
				break;
		
			case 1:
				str = "CHAR_FRANKLIN";
				break;
		
			case 2:
				str = "CHAR_TREVOR";
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_95(unk_0x259BE71D8A81D4FA());
			
				if (num == 0)
					return;
				else
					str = unk_0x008C0EB38E4459EE(num);
				break;
		}
	
		unk_0xCCDB0041859B85A6("PS_UPDATE" /*~1~/100*/);
		unk_0x511D14ED2DA887E1(plLocal_64);
		unk_0x0AAAE599E05E67D2(func_94(iLocal_62), func_93(iLocal_62), iLocal_63, plLocal_64 - iLocal_63, 0, str, str);
		bLocal_81 = true;
		iLocal_82 = unk_0x1DD05E817C89C737() + 5000;
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_83 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 5000);
	
		bLocal_60 = false;
	}

	return;
}

int func_93(int iParam0) // Position - 0x36AC
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_94(int iParam0) // Position - 0x372B
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /*Special capacity +*/;
	
		case 1:
			return "PSF_STAMINA" /*Stamina +*/;
	
		case 3:
			return "PSF_LUNG" /*Lung Capacity +*/;
	
		case 2:
			return "PSF_STRENGTH" /*Strength +*/;
	
		case 4:
			return "PSF_DRIVING" /*Driving +*/;
	
		case 5:
			return "PSF_FLYING" /*Flying +*/;
	
		case 6:
			return "PSF_SHOOTING" /*Shooting +*/;
	
		case 7:
			return "PSF_STEALTH" /*Stealth +*/;
	}

	return "ERROR";
}

int func_95(Player plParam0) // Position - 0x37B5
{
	int num;

	num = func_98(plParam0);

	if (num == -1)
	{
		func_96(plParam0, true);
		return 0;
	}

	Global_1680805[num /*5*/].f_4 = 1;
	return Global_1680805[num /*5*/].f_2;
}

void func_96(Player plParam0, BOOL bParam1) // Position - 0x37EB
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_98(plParam0) != -1)
		return;

	if (Global_1680968)
		if (plParam0 == Global_1680968.f_1)
			return;

	if (func_97(plParam0))
		return;

	if (Global_1681006 >= 32)
		return;

	Global_1680973[Global_1681006] = plParam0;
	Global_1681006 = Global_1681006 + 1;
	bParam1;
	return;
}

BOOL func_97(Player plParam0) // Position - 0x3857
{
	int i;

	i = 0;

	for (i = 0; i < Global_1681006; i = i + 1)
	{
		if (Global_1680973[i] == plParam0)
			return true;
	}

	return false;
}

int func_98(Player plParam0) // Position - 0x3889
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1680966 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1680966; i = i + 1)
	{
		if (Global_1680805[i /*5*/].f_1 == plParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1680805[i /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1680805[i /*5*/].f_2))
				return i;
		
			func_99(i);
			return -1;
		}
	}

	return -1;
}

void func_99(int iParam0) // Position - 0x3908
{
	var unk;
	var unk17;
	int num;
	int i;

	if (iParam0 >= Global_1680966)
		return;

	if (unk_0xCF3FA9D6B87D2277(Global_1680805[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x008C0EB38E4459EE(Global_1680805[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&unk17, &unk17, &unk, &unk);
		}
	
		unk_0x697995B2B26B6CD4(Global_1680805[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1680966; i = i + 1)
	{
		Global_1680805[num /*5*/] = { Global_1680805[i /*5*/] };
		num = num + 1;
	}

	func_100(&Global_1680805[num /*5*/]);
	Global_1680966 = Global_1680966 - 1;
	return;
}

void func_100(BOOL bParam0) // Position - 0x39BD
{
	*bParam0 = 0;
	bParam0->f_1 = _INVALID_PLAYER_INDEX();
	bParam0->f_2 = 0;
	bParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		bParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

void func_101() // Position - 0x39EA
{
	float value;
	int num;

	if (unk_0xC5C8FC4D42BFD749() != 1)
		return;

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_105(unk_0x259BE71D8A81D4FA()))
			return;
	
		if (func_104() != 0)
			return;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (func_104() == 0)
			iLocal_52 = 1;
	else
		iLocal_52 = 0;

	if (!func_103())
		func_102();

	iLocal_54 = 0;
	iLocal_55 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_56 = unk_0x7E3F74F641EE6B27();

	uLocal_71 = unk_0x1DD05E817C89C737();

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_72 = unk_0x7E3F74F641EE6B27();

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!IS_BIT_SET(Global_2359296[func_83() /*5569*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(func_72(193, -1)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_71(num, 0, 100);
			func_82(3, 2, num);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_83() /*5569*/].f_681.f_1274), 2);
		}
	}

	bLocal_58 = true;
	iLocal_53 = 1;
	return;
}

void func_102() // Position - 0x3AD0
{
	int i;
	var unk;
	int num;
	int j;
	int k;
	var unk2;
	var unk3;

	if (unk_0x76CD105BCAC6EB9F())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_73(3, i, &unk, &num);
				func_56(num, func_54(3, i, -1), -1, 1);
			}
		}
	
		func_4(0, 1, -1, 1);
		Global_98654 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_73(j, k, &unk2, &unk3);
					unk_0x1164A75E490C27B6(unk2, func_54(j, k, -1), 1);
				}
			}
		}
	
		Global_114370.f_2366.f_539.f_2387[0] = func_54(0, 0, -1);
		Global_114370.f_2366.f_539.f_2387[1] = func_54(1, 0, -1);
		Global_114370.f_2366.f_539.f_2387[2] = func_54(2, 0, -1);
		Global_114370.f_2366.f_539.f_2354 = 1;
		Global_98654 = true;
	}

	return;
}

BOOL func_103() // Position - 0x3BC3
{
	if (unk_0x76CD105BCAC6EB9F())
		return true;

	return Global_114370.f_2366.f_539.f_2354;
}

int func_104() // Position - 0x3BE6
{
	return Global_32828;
}

BOOL func_105(int iParam0) // Position - 0x3BF1
{
	if (!func_49(iParam0))
		return false;

	return IS_BIT_SET(Global_2672741.f_1, iParam0);
}

void func_106() // Position - 0x3C10
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
				iLocal_52 = 2;
		
			if (!func_103())
				iLocal_52 = 2;
		}
		else if (iLocal_52 == 1)
		{
			if (!unk_0x76CD105BCAC6EB9F() || !func_105(unk_0x259BE71D8A81D4FA()) || func_104() != 0)
				iLocal_52 = 2;
		}
	
		if (iLocal_52 == 2)
			iLocal_53 = 2;
	}

	return;
}

