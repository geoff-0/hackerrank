// www.hackerrank.com/challenges/reduced-string/problem

#include <iostream>
#include <string>

using namespace std;

bool isReduced(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            return false;
        }
    }

    return true;
}

string reduce(string s)
{
    char lastCharacter = s[0];
    int n = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == lastCharacter)
        {
          s.erase(i - 1, 2);
          i -= 2;
        }

      lastCharacter = s[i];
    }

    if (!s[0])
    {
        return "Empty String";
    }

    if (isReduced(s))
    {
        return s;
    }
    else if (!isReduced(s))
    {
        reduce(s);
    }

    return s;
}

string superReducedString(string s)
{
    return reduce(s);
}
