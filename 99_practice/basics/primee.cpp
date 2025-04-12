#include <bits\stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    bool p = true;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            p = false;
            if (n / i == 0)
            {
            }
        }
    }
    (p == true) ? cout << "prime no" : cout << "Not a prime no";

    return 0;
}