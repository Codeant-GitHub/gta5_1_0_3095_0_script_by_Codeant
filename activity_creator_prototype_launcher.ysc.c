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
	int iLocal_26 = 0;
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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
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
	float fLocal_64 = 0f;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_64 = (0.05f + 0.275f) - 0.01f;
	func_2();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x98
{
	return;
}

void func_2() // Position - 0xA0
{
	unk_0xDB2434E51017FFCC(32, 0, -1);
	_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
	return;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0xB8
{
	int i;

	for (i = unk_0xDFF16B5B12604EFF(); i != 2; i = unk_0xDFF16B5B12604EFF())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_7();
			else
				return 0;
	
		if (!func_6(false))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
					if (!bNoTerminate)
						func_7();
					else
						return 0;
			
				if (func_5())
					if (!bNoTerminate)
						func_7();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_7();
					else
						return 0;
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bNoTerminate)
					func_7();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			if (!bNoTerminate)
				func_7();
			else
				return 0;
	else if (!unk_0xBF52D447C795492B())
		if (!bNoTerminate)
			func_7();
		else
			return 0;

	return 1;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1CE
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_5() // Position - 0x1E5
{
	return Global_2684312.f_693;
}

BOOL func_6(BOOL bParam0) // Position - 0x1F4
{
	bParam0;
	return Global_1575052;
}

void func_7() // Position - 0x205
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

