#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	BOOL bLocal_7 = 0;
	BOOL bLocal_8 = 0;
	BOOL bLocal_9 = 0;
#endregion

void main() // Position - 0x0
{
	uLocal_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0x925970A93719CADE(1);

	if (unk_0x96CFB880BAC634CE(3))
		func_1();

	unk_0xAE03F542B985A69E(0);
	unk_0x47931C69C0D75B43();

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), -177f);
		unk_0x64BB72494B9DF6DC(0);
	}

	unk_0xEC9DAA34BBB4658C(joaat("freight"));
	unk_0xEC9DAA34BBB4658C(joaat("freightcar"));
	unk_0xEC9DAA34BBB4658C(joaat("freightgrain"));
	unk_0xEC9DAA34BBB4658C(joaat("freightcont1"));
	unk_0xEC9DAA34BBB4658C(joaat("freightcont2"));
	unk_0xEC9DAA34BBB4658C(joaat("tankercar"));
	unk_0xEC9DAA34BBB4658C(joaat("metrotrain"));

	while (!unk_0x6252BC0DD8A320DB(joaat("freight")) || !unk_0x6252BC0DD8A320DB(joaat("freightcar")) || !unk_0x6252BC0DD8A320DB(joaat("freightgrain")) || !unk_0x6252BC0DD8A320DB(joaat("freightcont1")) || !unk_0x6252BC0DD8A320DB(joaat("freightcont2")) || !unk_0x6252BC0DD8A320DB(joaat("tankercar")) || !unk_0x6252BC0DD8A320DB(joaat("metrotrain")))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (bLocal_7)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_0))
					unk_0x903908AA21114D72(&uLocal_0);
			
				uLocal_0 = unk_0x767956351E028F74(uLocal_4, uLocal_1, iLocal_6, 0, 0);
				bLocal_7 = false;
			}
		
			if (bLocal_9)
			{
				uLocal_1 = { unk_0x02AF3EA0F67D2329() };
				bLocal_9 = false;
			}
		
			if (unk_0xD9F5E1FEFD1329E4(uLocal_0, 0) && !unk_0x1C2F771CDC87A3A5(uLocal_0, 0))
			{
				unk_0x492EE2B9C9BD33C6(uLocal_0, fLocal_5);
				unk_0xCD56231706809D19(uLocal_0, fLocal_5);
			}
		
			if (bLocal_8)
				func_1();
		}
	}

	return;
}

void func_1() // Position - 0x1A7
{
	unk_0xAE03F542B985A69E(1);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

