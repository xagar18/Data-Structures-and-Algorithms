#include <bits\stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    multiset<int> ms1;
    multiset<int> ms2;

    if (s.length() != t.length())
    {
        return false;
    }

    for (int i = 0; i < s.length(); i++)
    {
        ms1.insert(s[i]);
        ms2.insert(t[i]);
    }
    if (ms1 == ms2)
    {
        return true;
    }

    return false;
}

int main()
{
    string s = "anagram"; // 1,2,3,4 after sorting
    string t = "nagaram"; // 1,2,3,4
    cout << isAnagram(s, t);

    return 0;
}
