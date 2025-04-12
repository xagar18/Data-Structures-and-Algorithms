#include <bits\stdc++.h>
using namespace std;

int countPrimes(int n)
{

    // if (n <= 2)
    //     return 0;
    // int count = 1;
    // for (int i = 3; i < n; i += 2)
    // {
    //     int b = 1;
    //     for (int j = 3; j * j <= i; j += 2) // odd number
    //     {
    //         if (i % j == 0)
    //         {
    //             b = 0;
    //             break;
    //         }
    //     }
    //     if (b == 1)
    //     {
    //         cout << i << endl;
    //         count++;
    //     }
    // }
    // return count;

    if (n <= 2)
        return 0;
    vector<bool> ai(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (ai[i] == true)
        {

            for (int j = i * i; j < n; j = j + i)
            {
                ai[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < ai.size() - 1; i++)

        if (ai[i])
        {
            count++;
        }

    return count;
}

int main()
{
    cout << countPrimes(10);
    return 0;
}