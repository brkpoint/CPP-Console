#include "Console.h"

int main()
{
	Console* con = new Console("\n<console>:~$ ");
	con->print("\n Welcome !");

	con->commandList = {
		Command("command", "desc", [](vector <string> args) {
			cout << "\nHello!!!!" << endl;
			for (int i = 0; i < args.size(); i++)
				cout << args[i] << endl;
		}),
	};

	con->print("\n");
	con->readCommand();

	return 0;
}