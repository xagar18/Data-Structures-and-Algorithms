#include <bits\stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{

    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
}

int main()
{

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);

    return 0;
}