#include <bits\stdc++.h>
using namespace std;

int main()
{

    int n = 13;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (n / i != i)
            {
                cout << n / i << endl;
            }
        }
    }

    return 0;
}