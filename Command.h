#pragma once
#include <stdio.h>
#include <functional>
#include "Utils.cpp"

using namespace std;

class Command
{
public:
	typedef function<void(vector <string>)> Action;
	Command(const char* name, const char* desc, Action action);
	~Command();
	void Execute(vector <string>);
	const char* name;
	const char* desc;
	Action exec;
};