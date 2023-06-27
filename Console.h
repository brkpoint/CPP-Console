#pragma once
#include <iostream>
#include <stdio.h>
#include "Utils.cpp"
#include "Command.h"
#include <list>

using namespace std;

class Console
{
public:
	Console(const char* prefix);

	void print(const char* msg);
	void print(string msg);
	void readCommand();

	bool running = true;

	list<Command> commandList {};
private:
	const char* prefix;
};