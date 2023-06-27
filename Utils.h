#pragma once
#include <algorithm> 
#include <cctype>
#include <locale>

using namespace std;

static class Utils
{
public:
	static inline string trim_copy(string s);
	static inline string rtrim_copy(string s);
	static inline string ltrim_copy(string s);
	static inline void trim(string& s);
	static inline void rtrim(string& s);
	static inline void ltrim(string& s);
};