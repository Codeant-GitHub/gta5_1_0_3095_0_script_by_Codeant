void main() // Position - 0x0
{
	unk_0x51CC1333A10C4E09();
	func_1("main_install", DEFAULT);
	return;
}

void func_1(char* sParam0, eStackSize essParam1) // Position - 0x15
{
	unk_0x97A5024CE91641F1(sParam0);

	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		SYSTEM::WAIT(0);
		unk_0x97A5024CE91641F1(sParam0);
	}

	SYSTEM::START_NEW_SCRIPT(sParam0, essParam1);
	return;
}

