#include <bits\stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int count = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (count == 0 && s[i] == ' ')
        {
            continue;
        }
        if (s[i] == ' ')
        {
            return count;
        }
        count++;
    }

    return count;
}

int main()
{
    string s = "Hello World";

    cout << lengthOfLastWord(s);

    return 0;
}