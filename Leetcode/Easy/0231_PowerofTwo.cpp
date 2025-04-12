#include <bits\stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    int count = 0;
    if (n <= 0)
    {
        return false;
    }
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            count++;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = -16;
    cout << isPowerOfTwo(n);
}