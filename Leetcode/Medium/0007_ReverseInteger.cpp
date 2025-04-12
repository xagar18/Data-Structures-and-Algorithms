#include <bits\stdc++.h>
using namespace std;

int reverse(int x)
{
    long rev = 0;
    while (x)
    {
        int lastdigi = x % 10;
        rev = (rev * 10) + lastdigi;
        x = x / 10;
    }
    if (rev > INT_MAX || rev < INT_MIN)
        return 0;
    return rev;
}

int main()
{
    int x = 15;
    cout << reverse(x);
    return 0;
}