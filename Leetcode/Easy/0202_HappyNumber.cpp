#include <bits\stdc++.h>
using namespace std;

bool isHappy(int n)
{
    int sum = 0;
    int temp = n;
    set<int> neww;
    for (;;)
    {
        int lastd = 0;

        while (n > 0)
        {
            lastd = n % 10;
            n = n / 10;
            sum += lastd * lastd;
        }
        cout << sum << endl;
        if (sum == 1)
        {
            return true;
        }

        int tempsize = neww.size();
        neww.insert(sum);
        int newsize = neww.size();

        if (newsize == tempsize)
        {
            return false;
        }

        n = sum;
        sum = 0;
    }

    return false;
}

int main()
{
    int n = 7;
    cout << isHappy(n);

    return 0;
}