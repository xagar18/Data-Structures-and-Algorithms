#include <bits\stdc++.h>
using namespace std;

// void printdivisor1(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

void printdivisor2(int n)
{
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // time complexity is O(sqrt(n))
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end()); // time complexity is O(nlogn) , n is the number of divisor
    for (auto x : ls) // time complexity is O(n), n is the number of divisor
        cout << x << " ";
}
// Total time complexity is O(sqrt(n)) + O(nlogn) + O(n) = O(nlogn)

int main()
{

    int n = 10;
    printdivisor2(n);

    return 0;
}