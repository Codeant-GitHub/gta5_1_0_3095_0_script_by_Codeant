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

	if (unk_0x15CCE8886267624F())
		unk_0x10B228D2FDB7AF16(500);

	if (unk_0x96CFB880BAC634CE(3))
	{
		func_3();
		func_2();
	}

	unk_0x925970A93719CADE(1);

	while (true)
	{
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
		unk_0xBFE94E91C83D8794(0.75f, 0.9f);
		unk_0xE05EB1EAE7CCDC59(0f, 1f);
		func_1(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
		unk_0xBFE94E91C83D8794(0.4f, 0.45f);
		unk_0xE05EB1EAE7CCDC59(0f, 1f);
		func_1(0.05f, 0.7f, "PLCHLD_PASS", 0);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0xD8
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
	return;
}

void func_2() // Position - 0xF0
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_3() // Position - 0xFC
{
	int num;

	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_114370.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (!func_18())
		{
			num = func_17();
		
			if (num != -1)
			{
				if (!func_12(num))
					return;
			
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92124[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_4();
		}
	}

	return;
}

void func_4() // Position - 0x16B
{
	Global_101427 = 1;

	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79481))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79485, "", 16);
		}
	
		Global_101427 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79481))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79481, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79485, "", 16);
		}
	
		Global_101427 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101392.f_20), 25);
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x252
{
	func_6();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_6() // Position - 0x26B
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_8(character) && !func_7(14) || Global_113320)
			{
				if (Global_114370.f_2366.f_539.f_4321 != character && func_8(Global_114370.f_2366.f_539.f_4321))
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

BOOL func_7(int iParam0) // Position - 0x368
{
	return Global_43922 == iParam0;
}

BOOL func_8(eCharacter echParam0) // Position - 0x376
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x382
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x3BF
{
	if (func_8(character))
		return func_11(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_11(eCharacter echParam0) // Position - 0x3E4
{
	return Global_2139[echParam0 /*29*/];
}

BOOL func_12(int iParam0) // Position - 0x3F3
{
	int num;
	eCharacter character;

	func_4();

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		unk_0x97915D82C999021F(5000);

	num = Global_92124[iParam0 /*5*/];
	character = Global_79519.f_109[num /*4*/];
	func_16(character, true);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_13(&(Global_114370.f_2366.f_539), character);

	if (Global_95547 == Global_101429)
		Global_114370.f_9088.f_330[character /*6*/].f_1 = Global_114370.f_9088.f_330[character /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_92160[character /*34*/].f_15, 1))
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			unk_0x40AC02FA167D4D0A(0);

	Global_114370.f_9088.f_330[character /*6*/].f_2 = Global_114370.f_9088.f_330[character /*6*/].f_2 + 1;
	Global_95547 = Global_101429;

	if (iParam0 == -1)
	{
		Global_114370.f_9088;
		return false;
	}

	if (IS_BIT_SET(Global_92124[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_92124[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_13(var uParam0, eCharacter echParam1) // Position - 0x503
{
	int i;
	eCharacter character;
	var unk;
	float num;

	if (echParam1 == CHAR_BROKEN_DOWN_GIRL)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		character = Global_114370.f_18536[i];
	
		if (character == CHAR_MIKE_FRANK_CONF || character == CHAR_MIKE_TREV_CONF || character == CHAR_STEVE_MIKE_CONF || character == CHAR_STEVE_TREV_CONF || character == CHAR_OSCAR || character == CHAR_MP_MEX_BOSS || character == CHAR_MP_PROF_BOSS && !IS_BIT_SET(Global_114370.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num = 0f;
		
			if (!func_15(Global_114370.f_18536[i], &unk, &num))
			{
				Global_114370.f_18536[i] = 318;
				func_14(&uParam0->f_2296[i]);
				uParam0->f_2300[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_98762[i /*29*/] = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_9 = 0f;
				Global_98762[i /*29*/].f_12 = 0f;
				Global_98762[i /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_10 = 0f;
				Global_98762[i /*29*/].f_13 = 0f;
				Global_98762[i /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_11 = 0f;
				Global_98762[i /*29*/].f_14 = 0f;
				Global_98762[i /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_26 = 0f;
				Global_98762[i /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_27 = 0f;
				Global_98762[i /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98762[i /*29*/].f_28 = 0f;
			}
		}
	}

	return;
}

void func_14(var uParam0) // Position - 0x6C9
{
	*uParam0 = -15;
	return;
}

BOOL func_15(eCharacter echParam0, var uParam1, var uParam2) // Position - 0x6D7
{
	switch (echParam0)
	{
		case CHAR_STEVE_TREV_CONF:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case CHAR_MIKE_FRANK_CONF:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case CHAR_MIKE_TREV_CONF:
			return func_15(CHAR_MIKE_FRANK_CONF, uParam1, uParam2);
	
		case CHAR_STEVE_MIKE_CONF:
			return func_15(CHAR_MIKE_FRANK_CONF, uParam1, uParam2);
	
		case CHAR_LESTER_DEATHWISH:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case CHAR_JIMMY:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case CHAR_TRACEY:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case CHAR_LESTER:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case CHAR_ABIGAIL:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case CHAR_AMANDA:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case CHAR_SIMEON:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case CHAR_LAMAR:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case CHAR_RON:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case CHAR_CHENG:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_GANGAPP:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case CHAR_PA_FEMALE:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case CHAR_STEVE:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case CHAR_WADE:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case CHAR_ANDREAS:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case CHAR_TENNIS_COACH:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case CHAR_LAZLOW:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case CHAR_SOLOMON:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case CHAR_ESTATE_AGENT:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case CHAR_DEVIN:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_DAVE:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_MARTIN:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_FLOYD:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_GAYMILITARY:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_OSCAR:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_CHENGSR:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_DR_FRIEDLANDER:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_STRETCH:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_JOSH:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case CHAR_MANUEL:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case CHAR_MARNIE:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case CHAR_ORTEGA:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case CHAR_ONEIL:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case CHAR_PATRICIA:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case CHAR_PEGASUS_DELIVERY:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case CHAR_LIFEINVADER:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case CHAR_TANISHA:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case CHAR_DENISE:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case CHAR_MOLLY:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case CHAR_RICKIE:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_CHEF:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case CHAR_BARRY:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case CHAR_BLIMP:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case CHAR_BEVERLY:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case CHAR_CRIS:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case CHAR_DOM:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case CHAR_ASHLEY:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case CHAR_HAO:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_JIMMY_BOSTON:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case CHAR_JOE:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case CHAR_JOSEF:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case CHAR_MARY_ANN:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case CHAR_MAUDE:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case CHAR_MRS_THORNHILL:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case CHAR_DREYFUSS:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_OMEGA:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case CHAR_NIGEL:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case CHAR_HUNTER:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case CHAR_SASQUATCH:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case CHAR_MP_BIKER_BOSS:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_MP_FAM_BOSS:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_MP_MEX_BOSS:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case CHAR_MP_PROF_BOSS:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

void func_16(eCharacter echParam0, BOOL bParam1) // Position - 0x1046
{
	if (bParam1)
		if (echParam0 != CHAR_DETONATEBOMB && echParam0 != CHAR_LS_CUSTOMS && echParam0 != CHAR_DOMESTIC_GIRL)
			Global_95357[echParam0 /*2*/] = true;
	else
		Global_95357[echParam0 /*2*/] = false;

	return;
}

int func_17() // Position - 0x1084
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

BOOL func_18() // Position - 0x10B6
{
	if (Global_101392 == 13 || Global_101392 == 10 || Global_101392 == 11 || Global_101392 == 12)
		return false;

	return true;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x10F4
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79497, 0);
}

