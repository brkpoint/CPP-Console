#include "Console.h"

typedef function<void()> Action;

int main()
{
	Console* con = new Console("\n<console>:~$ ");
	con->print("\n Welcome !");

	con->commandList = {
		Command("command", "desc", []() {
			cout << "\nHello!!!!";
		}),
	};

	con->print("\n");
	con->readCommand();

	return 0;
}