#include <bits\stdc++.h>
using namespace std;

bool isValid(string s)
{
    int slength = s.length();
    int arr[] = {};
    for (int i = 0; i < slength; i++)
    {
        arr[i] = s[i];
        for (int j = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        {
            if (arr[j] == s[i])
            {
                // del arr[j];
            }
        }
    }
    if (arr)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    string s = "()";

    cout << isValid(s);

    return 0;
}