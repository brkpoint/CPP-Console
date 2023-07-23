#include "Console.h"

Console::Console(const char* prefix)
{
	Console::prefix = prefix;
}

void Console::print(const char* msg)
{
	cout << msg;
}

void Console::print(string msg)
{
	cout << msg;
}

void Console::readCommand()
{
	print(prefix);

	char out[120];
	cin.getline(out, 120);
	
	vector <string> outS = split(out, ' ');
	for (Command cmd : commandList)
		if (cmd.name == outS[0])
		{
			vector <string> args = outS;
			args.erase(args.begin() + 0);
			cmd.exec(args);
		}

	readCommand();
}