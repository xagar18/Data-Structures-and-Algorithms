#include <bits\stdc++.h>
using namespace std;
// Unsolved
bool wordBreak(string s, vector<string> &wordDict)
{

    int j = 0;
    int size = 0;
    string temp = "";
    bool res = 0;

    for (int i = 0; i < wordDict.size(); i++)
    {
        size += wordDict[i].size();

        for (; j < size && j < s.size(); j++)
        {
            temp += s[j];
        }

        if (wordDict[i] == temp)
        {
            res = 1;
        }
        else
        {
            res = 0;
            break;
        }

        temp = "";
    }
    return res;
}

int main()
{

    vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};
    string s = "catsandog";
    cout << wordBreak(s, wordDict);
    return 0;
}