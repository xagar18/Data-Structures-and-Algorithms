#include <bits\stdc++.h>
using namespace std;

void armstrong(int n)
{
    int temp = n;
    int lastdigi = 0;
    int armnum = 0;
    while (n > 0)
    {
        lastdigi = n % 10;
        n = n / 10;
        armnum += (lastdigi * lastdigi * lastdigi);
    }
    if (armnum == temp)
    {
        cout << "Given Number Is Armstrong";
    }
    else
    {
        cout << "Given Number is not armstrong number";
    }
}

int main()
{

    int n = 37;
    armstrong(n);

    return 0;
}