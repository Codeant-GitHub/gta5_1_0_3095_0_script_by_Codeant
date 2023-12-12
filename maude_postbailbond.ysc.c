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
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	BOOL bLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
#endregion

void main() // Position - 0x0
{
	Vector3 vector;
	Vector3 vector2;

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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_83 = -1;
	iLocal_84 = -1;

	if (unk_0x96CFB880BAC634CE(19))
		func_56();

	if (!func_52())
		func_56();

	if (!func_51(uLocal_80))
	{
		func_56();
	}
	else
	{
		func_50();
		uLocal_81 = unk_0x1DD05E817C89C737();
		iLocal_83 = func_49();
		iLocal_82 = 0;
		func_48(true, &uLocal_86);
	}

	while (true)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_51(uLocal_80))
				func_56();
		
			vector = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			vector2 = { unk_0xD1A6A821F5AC81DB(uLocal_80, 1) };
		
			if (SYSTEM::VDIST2(vector, vector2) >= 100f * 100f)
				func_56();
		
			switch (iLocal_85)
			{
				case 0:
					func_43(vector2, vector, 18000, 1101004800);
				
					if (func_25(&uLocal_80, false))
					{
						func_24();
						func_16(false);
						func_12(vector2, vector);
						unk_0x80813AC549A1E8AE(func_11());
						iLocal_85 = 1;
					}
					break;
			
				case 1:
					if (func_5(&uLocal_80, &uLocal_77, &iLocal_84))
						iLocal_85 = 2;
					break;
			
				case 2:
					if (!func_4(uLocal_80, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !unk_0xCA038E64C65D1F9D(uLocal_80))
						if (!unk_0x13CCB1AD131C1082(uLocal_80, func_11(), func_3(), 3))
							func_1();
					else
						func_56();
					break;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x1B3
{
	if (func_51(uLocal_80))
	{
		func_2(&uLocal_80);
		unk_0xD844F5E50DAB6FF7(uLocal_80, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
		unk_0x44FB298D6382876D(uLocal_80, 1);
	}

	return;
}

void func_2(var uParam0) // Position - 0x1E3
{
	if (func_51(*uParam0))
	{
		unk_0x1CA08719184AFC6F(*uParam0, 2, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 64, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 128, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 8, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 1, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 32, 0);
		unk_0xBE8796DB2B90A437(*uParam0, 5, 0);
		unk_0xBE8796DB2B90A437(*uParam0, 17, 1);
		unk_0x0428AFDCAA63B06E(*uParam0, 118, 1);
	}

	return;
}

char* func_3() // Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

BOOL func_4(var uParam0, int iParam1) // Position - 0x256
{
	if (func_51(uParam0))
		if (unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 0)
			return true;

	return false;
}

BOOL func_5(var uParam0, var uParam1, var uParam2) // Position - 0x289
{
	int num;

	if (func_51(*uParam0))
	{
		if (unk_0x13CCB1AD131C1082(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x8BF5256C439DF778(*uParam0) || unk_0x0B3FC0E7676E79BF(*uParam0))
			{
				unk_0x80813AC549A1E8AE(func_11());
			
				if (unk_0xE100DD4F82A51BDE(func_11()))
				{
					*uParam2 = unk_0x2EC137C692A52458(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xBF3497E24DEAD835(*uParam2, 0);
					unk_0xA7C372501A8A3B23(*uParam2, 0);
				
					if (func_4(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						unk_0xC0086E5CBF13BBF7(*uParam0, -1000f, 1);
				
					unk_0x3DA436E63AB0F541(*uParam0, *uParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xD8ED11B32DF72E0B(*uParam0, 0, 0);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(*uParam1))
					{
						if (unk_0x13CCB1AD131C1082(*uParam1, func_10(), func_7(), 3))
							unk_0xC0086E5CBF13BBF7(*uParam1, -16f, 0);
					
						num = 0;
						num = num + 16;
						num = num + 64;
						num = num + 512;
						num = num + 4096;
						unk_0x381D671BCFC294D9(*uParam1, *uParam2, func_6(), func_11(), 16f, -4f, num, 1148846080);
					}
				
					return true;
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

char* func_6() // Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7() // Position - 0x3E0
{
	return "base_chair";
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(int iParam0) // Position - 0x3EB
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
			return true;

	return false;
}

char* func_9() // Position - 0x40C
{
	return "base";
}

char* func_10() // Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11() // Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x42D
{
	if (func_51(uLocal_80))
		if (!unk_0x912159A05BE6B52E(uLocal_80))
			if (SYSTEM::VDIST2(vParam3, vParam0) < 35f * 35f)
				func_13(&uLocal_80, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);

	return;
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x473
{
	BOOL flag;

	if (func_51(*uParam0))
	{
		flag = unk_0xE8B33D130955481B(*uParam0);
	
		if (flag)
			unk_0xFD61BB3B8F1CDB6D(*uParam0, 0);
	
		func_14(*uParam0, sParam1, sParam2, iParam3);
	
		if (flag)
			unk_0xFD61BB3B8F1CDB6D(*uParam0, 1);
	}

	return;
}

void func_14(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x4B5
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_15(iParam3), 0);
	return;
}

char* func_15(int iParam0) // Position - 0x4CE
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_16(BOOL bParam0) // Position - 0x6BE
{
	var unk;
	char* str;

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		unk = { func_22() };
		str = func_21();
	
		if (unk_0x1B79E937E91F40C3(&unk, str))
			if (bParam0)
				func_19();
			else
				func_17();
	}

	return;
}

void func_17() // Position - 0x6F6
{
	Global_21032 = 0;
	func_18();
	return;
}

void func_18() // Position - 0x706
{
	unk_0xC78B293A5F4EACF9();
	Global_23177 = 0;

	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22166 = 6;
	}

	return;
}

void func_19() // Position - 0x727
{
	Global_21032 = 0;
	func_20();
	return;
}

void func_20() // Position - 0x737
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23177 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22166 = 6;
		return;
	}

	return;
}

char* func_21() // Position - 0x75B
{
	if (IS_BIT_SET(Global_114370.f_24989, 3))
		return "BB4_loiter";
	else if (IS_BIT_SET(Global_114370.f_24989, 2))
		return "BB3_loiter";
	else if (IS_BIT_SET(Global_114370.f_24989, 1))
		return "BB2_loiter";
	else if (IS_BIT_SET(Global_114370.f_24989, 0))
		return "BB1_loiter";

	return "MAUDE_loiter";
}

struct<6> func_22() // Position - 0x7BC
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22166 == 4)
		return Global_21785;

	return unk;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x7E0
{
	if (Global_22166 != 0 || unk_0x1F9EB85925C3ECD7())
		return true;

	return false;
}

void func_24() // Position - 0x802
{
	if (unk_0xFC8BFE4B41177C22(uLocal_79))
		unk_0x5D7CD709B34C90F0(uLocal_79, 0);

	if (unk_0xFC8BFE4B41177C22(uLocal_78))
		unk_0x5D7CD709B34C90F0(uLocal_78, 0);

	return;
}

BOOL func_25(var uParam0, BOOL bParam1) // Position - 0x82A
{
	if (func_51(*uParam0))
	{
		if (unk_0xF76AF9D45D6BDA45(*uParam0) || unk_0xFFF4FB66DA549D0F(*uParam0) || unk_0x6E470765558FCD9E(*uParam0))
			return true;
	
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), *uParam0))
				return true;
		
			if (unk_0xFC8BFE4B41177C22(uLocal_77))
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uLocal_77))
					return true;
		
			if (unk_0xFC8BFE4B41177C22(uLocal_78))
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uLocal_78))
					return true;
		
			if (unk_0xFC8BFE4B41177C22(uLocal_79))
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uLocal_79))
					return true;
		}
	
		if (unk_0x613F3705BEA060B4(*uParam0, 61))
			return true;
	
		if (unk_0x8BF5256C439DF778(*uParam0))
			if (unk_0xFAA48325A90263BE(*uParam0, unk_0x4A8C381C258A124D(), 3f, 3f, 3f, 0, 1, 0))
				return true;
	
		if (unk_0x613F3705BEA060B4(*uParam0, 51))
			return true;
	
		if (func_33(*uParam0, 1126825984))
			return true;
	
		if (func_26(*uParam0, true, false, false, false))
			return true;
	
		if (unk_0x8764A5B95AE1F967(-1, unk_0xD1A6A821F5AC81DB(*uParam0, 1), 15f))
			return true;
	
		if (unk_0x613F3705BEA060B4(*uParam0, 73))
			return true;
	
		if (bParam1)
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_26(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x97C
{
	float num;
	float num2;
	int num3;

	num = 8f;
	num2 = 15f;

	if (bParam1 == false)
	{
		num = 1.86f;
		num2 = 1.86f;
	}

	if (bParam2)
		num = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(iParam0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &num3, 1);
	
		if (num3 == joaat("WEAPON_PETROLCAN"))
		{
			num = 3f;
			num2 = 3f;
		}
	
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, num, num2))
				return true;
		
			if (func_27(iParam0, num2, bParam3, bParam4))
				return true;
		}
		else
		{
			if (unk_0x3C2402675D8FFADA(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
					if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), num, 1))
						return true;
			}
			else
			{
				if (bParam1)
				{
					num = 1.86f;
					num2 = 1.86f;
				}
			
				if (func_32(iParam0, bParam1, num, num2))
					return true;
			}
		
			if (func_27(iParam0, num2, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_27(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA77
{
	float num;
	float num2;

	num = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	num2 = { num };
	num = num - fParam1;
	num.f_1 = num.f_1 - fParam1;
	num.f_2 = num.f_2 - fParam1;
	num2 = num2 + fParam1;
	num2.f_1 = num2.f_1 + fParam1;
	num2.f_2 = num2.f_2 + fParam1;

	if (bParam2)
	{
		if (unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("WEAPON_GRENADE"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("WEAPON_MOLOTOV"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("WEAPON_SMOKEGRENADE"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
				if (func_28(iParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_28(iParam0, fParam1))
				return true;
			else
				return false;
	
		if (unk_0xE94C7FA27FEB00DD(num, num2, 1))
			return true;
	}

	return false;
}

BOOL func_28(int iParam0, float fParam1) // Position - 0xB83
{
	var unk;
	var unk2;

	if (unk_0xF67924A428A734EC(iParam0, joaat("WEAPON_GRENADE"), fParam1, &unk2, &unk, 0) || unk_0xF67924A428A734EC(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &unk2, &unk, 0) || unk_0xF67924A428A734EC(iParam0, joaat("WEAPON_BZGAS"), fParam1, &unk2, &unk, 0) || unk_0xF67924A428A734EC(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &unk2, &unk, 0) || unk_0xF67924A428A734EC(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &unk2, &unk, 0))
		if (func_29(iParam0, unk2, 90f, 0))
			return true;

	return false;
}

BOOL func_29(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xC18
{
	var unk;
	var unk4;
	float num;

	unk = { func_31(uParam1 - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		unk4 = { unk_0x90D0E0397D3F7690(iParam0) };
	else
		unk4 = { func_31(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(unk4, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

float func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xCA6
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_31(float fParam0, var uParam1, var uParam2) // Position - 0xCC7
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

BOOL func_32(int iParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xD06
{
	if (bParam1)
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
				return true;

	if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fParam2, 1))
		return true;

	return false;
}

BOOL func_33(var uParam0, int iParam1) // Position - 0xD4E
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		if (func_42(uParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), uParam0))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				num = 40f;
			else
				num = 3f;
		
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam0, num, num, num, 0, 1, 0))
				if (func_34(uParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_34(var uParam0, int iParam1) // Position - 0xDC4
{
	return func_35(uParam0, unk_0x4A8C381C258A124D(), iParam1, 1, 250, 7);
}

BOOL func_35(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xDDC
{
	BOOL flag;
	var unk;
	int num;

	num = func_41(uParam0, uParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam1))
	{
		if (num != -1)
			func_40(&iLocal_35[num /*4*/]);
	
		return false;
	}

	if (!func_39(uParam0, uParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_38();
	
		if (num == -1)
			return false;
	
		iLocal_35[num /*4*/].f_1 = uParam0;
		iLocal_35[num /*4*/].f_2 = uParam1;
	}

	unk = { unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 0f, 0f) };
	flag = func_36(&iLocal_35[num /*4*/], unk, uParam1, &(iLocal_35[num /*4*/].f_3), uParam0, iParam5);
	return flag || unk_0x1DD05E817C89C737() - iLocal_35[num /*4*/].f_3 < iParam4;
}

BOOL func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xE9D
{
	var unk;
	var unk2;
	var unk5;
	int num;
	int num2;

	num = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		unk2 = { func_37(uParam4, iParam7) };
		*uParam0 = unk_0x120E577522852984(uParam1, unk2 + ((unk2 - uParam1) * { 0.1f, 0.1f, 0.1f }), 511, uParam6, 7);
		return 0;
	}

	num2 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &unk, &unk2, &unk5, &num);

	if (num2 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (num2 == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (unk_0x0101C509A6E67F99(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0xBD545F8729E9F413(num) == uParam4)
		{
			if (bLocal_76)
				unk_0x7B26600F66208BC6(uParam1, unk_0xD1A6A821F5AC81DB(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = unk_0x1DD05E817C89C737();
			return 1;
		}
	
		return 0;
	}

	if (unk_0x55B80B6E7AB61270(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0x7F420695E3F776FB(uParam4, 0))
		{
			if (unk_0xE93EDE86BBB66532(num) == unk_0x6EF03BE64E058E2F(uParam4, 0))
			{
				if (bLocal_76)
					unk_0x7B26600F66208BC6(uParam1, unk_0xD1A6A821F5AC81DB(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_37(var uParam0, int iParam1) // Position - 0xFC9
{
	int num;

	if (iParam1 == 7)
	{
		num = unk_0xC5935DFB3F39785A(0, 7);
		iParam1 = num;
	}

	if (iParam1 == 0)
		return unk_0xD1A6A821F5AC81DB(uParam0, 1);
	else if (iParam1 == 1)
		return unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return unk_0x83FDC027F0BEA202(uParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return unk_0x83FDC027F0BEA202(uParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return unk_0x83FDC027F0BEA202(uParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return unk_0x83FDC027F0BEA202(uParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return unk_0x83FDC027F0BEA202(uParam0, 36864, 0f, 0f, 0f);

	return unk_0xD1A6A821F5AC81DB(uParam0, 1);
}

int func_38() // Position - 0x108E
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/] == 0 && iLocal_35[i /*4*/].f_1 == 0 && iLocal_35[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_39(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x10D8
{
	var unk;
	var unk4;
	float num;

	unk = { func_31(unk_0xD1A6A821F5AC81DB(uParam1, 1) - unk_0xD1A6A821F5AC81DB(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		unk4 = { unk_0x90D0E0397D3F7690(uParam0) };
	else
		unk4 = { func_31(unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(unk4, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

void func_40(var uParam0) // Position - 0x1169
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_41(var uParam0, var uParam1) // Position - 0x1184
{
	int i;

	for (i = 0; i < iLocal_35; i = i + 1)
	{
		if (iLocal_35[i /*4*/].f_1 == uParam0 && iLocal_35[i /*4*/].f_2 == uParam1)
			return i;
	}

	return -1;
}

int func_42(var uParam0) // Position - 0x11C3
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		return 1;

	return 0;
}

int func_43(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x11EB
{
	var unk;
	char* str;
	char* str2;

	if (iLocal_82 < iLocal_83)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < iParam7 * iParam7)
			{
				if (unk_0x1DD05E817C89C737() - uLocal_81 > iParam6 + unk_0xC5935DFB3F39785A(0, 2000))
				{
					unk = 16;
					_CONVERSATION_INITIALIZE_ACTOR(&unk, 3, uLocal_80, "MAUDE", 0, 1);
					str = func_46();
					str2 = func_21();
					_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, str, str2, 7, 0, 0);
					uLocal_81 = unk_0x1DD05E817C89C737();
					iLocal_82 = iLocal_82 + 1;
					return 1;
				}
			}
		}
		else
		{
			uLocal_81 = unk_0x1DD05E817C89C737();
		}
	}

	return 0;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1275
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	unk_0x0B0C9A0F9AAEB7F0(&Global_21032, 0);
	Global_22169 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22156, sParam2, 24);
	return;
}

void func_45(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12B0
{
	Global_21620 = { *uParam0 };
	Global_7999 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;

	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}

	return;
}

char* func_46() // Position - 0x1306
{
	if (IS_BIT_SET(Global_114370.f_24989, 3))
		return "BB4AUD";
	else if (IS_BIT_SET(Global_114370.f_24989, 2))
		return "BB3AUD";
	else if (IS_BIT_SET(Global_114370.f_24989, 1))
		return "BB2AUD";
	else if (IS_BIT_SET(Global_114370.f_24989, 0))
		return "BB1AUD";

	return "MAUDEAU";
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1367
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79248)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			else
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
	
		if (!unk_0x4FAFF4BCB7633475(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				unk_0x26C12212366CBF6E(uParam2, 0);
			else
				unk_0x26C12212366CBF6E(uParam2, 1);
	}

	return;
}

void func_48(BOOL bParam0, var uParam1) // Position - 0x1402
{
	var unk;
	var unk4;

	unk = { 2711.1978f, 4134.4253f, 32.90168f };
	unk4 = { 2739.9814f, 4155.2207f, 50.28859f };

	if (bParam0)
	{
		*uParam1 = unk_0xA7B0B03284E7503C(unk, unk4, 0, 1, 1, 1, 1);
		unk_0x89C4F1335B4A6633(unk, unk4);
		unk_0xA63572E348CC4CFB(unk, unk4, 0, 1);
		unk_0xC4BCE90F7242F354(unk, unk4, 0);
		unk_0xD1B0AF388B711EBC(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 0, 1);
		unk_0x2094BC4B6731BA68(2728.3328f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xD7B6A43ACC36D868(*uParam1, 0);
		unk_0x93586F94C370857F();
		unk_0xA63572E348CC4CFB(unk, unk4, 1, 1);
		unk_0x33B6B083EA6305A5(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
	}

	return;
}

int func_49() // Position - 0x14F0
{
	if (IS_BIT_SET(Global_114370.f_24989, 3))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24989, 2))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24989, 1))
		return 4;
	else if (IS_BIT_SET(Global_114370.f_24989, 0))
		return 3;

	return 4;
}

void func_50() // Position - 0x1542
{
	var unk;

	if (func_51(uLocal_80))
	{
		if (!unk_0x110821AE6C63DD4F(uLocal_80))
			unk_0xEE0BCDB1B5E36BCB(uLocal_80, 1, 0);
	
		unk_0xAAA71DD7E9059338(uLocal_80, 1);
		unk_0x886FA295C1257AAA(uLocal_80, 0);
		unk_0x3F58BFCF656F0DF1(uLocal_80, 0);
		unk_0x3CEA1FD137ACE2D9(uLocal_80, joaat("PLAYER"));
		unk_0x176A19E4589CC2C6(uLocal_80, 0);
		unk_0x828D385CED572E95(uLocal_80, 0);
		unk_0x0428AFDCAA63B06E(uLocal_80, 118, 0);
		unk = { 2728.33f, 4145.6f, 43.89f };
	
		if (unk_0xE10356B235A70E70(unk, 10f, joaat("prop_table_03b"), 0))
		{
			uLocal_78 = unk_0x8366ABB82B1ABC59(unk, 10f, joaat("prop_table_03b"), 1, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_78))
			{
				unk_0xB2BD5837A8D3CEDA(uLocal_78, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_78, -92.17f);
				unk_0x5D7CD709B34C90F0(uLocal_78, 1);
			}
		}
	
		if (unk_0xE10356B235A70E70(unk, 10f, joaat("prop_laptop_01a"), 0))
		{
			uLocal_79 = unk_0x8366ABB82B1ABC59(unk, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_79))
			{
				if (!unk_0x110821AE6C63DD4F(uLocal_79))
					unk_0xEE0BCDB1B5E36BCB(uLocal_79, 1, 0);
			
				unk_0xB2BD5837A8D3CEDA(uLocal_79, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_79, 71f);
				unk_0x5D7CD709B34C90F0(uLocal_79, 1);
			}
		}
	
		if (unk_0xE10356B235A70E70(unk, 10f, joaat("prop_table_03_chr"), 0))
		{
			uLocal_77 = unk_0x8366ABB82B1ABC59(unk, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_77))
			{
				if (!unk_0x110821AE6C63DD4F(uLocal_77))
					unk_0xEE0BCDB1B5E36BCB(uLocal_77, 1, 0);
			
				unk_0xB2BD5837A8D3CEDA(uLocal_77, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(uLocal_77, -91.28f);
			}
		}
	}

	return;
}

BOOL func_51(var uParam0) // Position - 0x16EF
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (!unk_0x4FAFF4BCB7633475(uParam0))
			return true;

	return false;
}

BOOL func_52() // Position - 0x170F
{
	int num;
	int i;
	var unk;

	unk = 32;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		num = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &unk, -1);
	
		for (i = 0; i < num; i = i + 1)
		{
			if (func_51(unk[i]))
			{
				if (unk_0x4B423FAA24E8ABF0(unk[i]) == func_53(62))
				{
					uLocal_80 = unk[i];
					return true;
				}
			}
		}
	}

	return false;
}

int func_53(int iParam0) // Position - 0x1776
{
	if (!func_55(iParam0))
		return func_54(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_54(int iParam0) // Position - 0x179C
{
	return Global_2139[iParam0 /*29*/];
}

BOOL func_55(int iParam0) // Position - 0x17AB
{
	return iParam0 < 3;
}

void func_56() // Position - 0x17B7
{
	func_48(false, &uLocal_86);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_79))
		unk_0x5D7CD709B34C90F0(uLocal_79, 0);

	func_58(&uLocal_79, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_78))
		unk_0x5D7CD709B34C90F0(uLocal_78, 0);

	func_58(&uLocal_78, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_77))
	{
		unk_0x5D7CD709B34C90F0(uLocal_77, 0);
	
		if (unk_0x13CCB1AD131C1082(uLocal_77, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x1D949F0AD44C7F05(uLocal_77, "base_chair", "special_ped@maude@base", -1000f);
			unk_0xC0086E5CBF13BBF7(uLocal_77, -1000f, 1);
		}
		else if (unk_0x13CCB1AD131C1082(uLocal_77, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x1D949F0AD44C7F05(uLocal_77, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0xC0086E5CBF13BBF7(uLocal_77, -1000f, 1);
		}
	}

	func_58(&uLocal_77, false);

	if (func_51(uLocal_80))
	{
		unk_0x44FB298D6382876D(uLocal_80, 1);
		unk_0x0428AFDCAA63B06E(uLocal_80, 118, 1);
	}

	func_57(&uLocal_80, 1, 0, 1);
	unk_0x268BE77F77533D03(func_11());
	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x189C
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				unk_0xBEB96F1A510EE9AA(*uParam0);
		
			unk_0x44FB298D6382876D(*uParam0, iParam1);
		
			if (iParam2 == 1)
				unk_0xAAA71DD7E9059338(*uParam0, 0);
		}
	
		unk_0xF09E30AF1B8FB379(uParam0);
	}

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x18EC
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
			unk_0x837D67618BF89034(*uParam0, 1, 1);
	
		if (!bParam1)
			unk_0xB3B56385ECA230B4(uParam0);
		else
			unk_0xC942CD0D37369DC4(*uParam0);
	}

	return;
}

