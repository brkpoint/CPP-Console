#pragma once
#include <stdio.h>
#include <functional>

using namespace std;

class Command
{
public:
	typedef function<void()> Action;
	Command(const char* name, const char* desc, Action action);
	~Command();
	void Execute();
	const char* name;
	const char* desc;
	Action exec;
};