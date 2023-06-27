#include <algorithm> 
#include <vector>
#include <cctype>
#include <locale>

using namespace std;

static inline void ltrim(string& s)
{
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) 
    {
        return !isspace(ch);
    }));
}

static inline void rtrim(string& s)
{
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) 
    {
        return !isspace(ch);
    }).base(), s.end());
}

static inline void trim(string& s)
{
    rtrim(s);
    ltrim(s);
}

static inline string ltrim_copy(string s)
{
    ltrim(s);
    return s;
}

static inline string rtrim_copy(string s)
{
    rtrim(s);
    return s;
}

static inline string trim_copy(string s)
{
    trim(s);
    return s;
}

static vector <string> split(string str, char separator)
{
    vector <string> strings;
    int startIndex = 0, endIndex = 0;
    for (int i = 0; i <= str.size(); i++) 
    {
        if (str[i] == separator || i == str.size()) 
        {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            strings.push_back(temp);
            startIndex = endIndex + 1;
        }
    }

    return strings;
}