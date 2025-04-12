#include <bits\stdc++.h>
using namespace std;

void printlin(int n)
{

    if (n < 1)
    {
        return;
    }
    printlin(n - 1);
    cout << n << endl;
}
// time com O(n)

void rangeprint(int i, int n)
{
    if (n < i)
    {
        return;
    }

    rangeprint(i + 1, n);
    cout << i << endl;
}

int main()
{

    int n = 10;
    // printlin(n);
    rangeprint(10, 20);

    return 0;
}