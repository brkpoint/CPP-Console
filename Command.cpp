#include "Command.h"

Command::Command(const char* name, const char* desc, Action action)
{
	Command::name = name;
	Command::desc = desc;
	Command::exec = action;
}

void Command::Execute()
{
	exec();
}

Command::~Command()
{
}
