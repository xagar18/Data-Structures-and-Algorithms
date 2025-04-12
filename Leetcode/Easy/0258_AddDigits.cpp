#include <bits\stdc++.h>
using namespace std;

int addDigits(int num)
{

    for (;;)
    {
        int sum = 0;
        while (num)
        {
            int lastd = num % 10;
            num = num / 10;
            sum = sum + lastd;
        }
        cout << sum << endl;
        if (sum < 10)
        {
            return sum;
        }
        num = sum;
    }
}

int main()
{
    cout << addDigits(38);

    return 0;
}