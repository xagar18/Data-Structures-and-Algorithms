#include <bits\stdc++.h>
using namespace std;

int scoreOfString(string s)
{
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " : " << s[i + 1] << endl;
        if (s[i] && s[i + 1])
        {
            temp = (int)s[i] - (int)s[i + 1];
            if (temp <= 0)
            {
                temp = -temp;
            }
            sum += temp;
        }
    }
    return sum;
}

int main()
{
    string s = "hello";
    cout << scoreOfString(s);

    return 0;
}