#include <bits/stdc++.h>
using namespace std;

void sumNpara(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    sum += n;
    sumNpara(n - 1, sum);
}
// Time Complexity: O(n) Space Complexity: O(n)

int sumNfunc(int n)
{
    if (n == 0)
        return 0;
    return n + sumNfunc(n - 1);
}
// Time Complexity: O(n) Space Complexity: O(n)

int factNfunc(int n)
{
    if (n == 0)
        return 1;
    return n * factNfunc(n - 1);
}
// Time Complexity: O(n) Space Complexity: O(n)

int main()
{
    int n;
    cout << "Enter Value Of N  : ";
    cin >> n;
    // sumNpara(n, 0);
    // cout << sumNfunc(n);
    cout << factNfunc(n);

    return 0;
}