#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    if (n == 0)
        return;
    cout << "Sagar" << endl;
    printName(n - 1);
}
// Time Complexity: O(n) Space Complexity: O(n)

void printLinear(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printLinear(i + 1, n);
}
// Time Complexity: O(n) Space Complexity: O(n)

void printOpp(int i, int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << endl;
    printOpp(i, n - 1);
}
// Time Complexity: O(n) Space Complexity: O(n)

void printLinearBackTrack(int i)
{
    if (i < 1)
    {
        return;
    }
    printLinearBackTrack(i - 1);
    cout << i << endl;
}
// Time Complexity: O(n) Space Complexity: O(n)

int main()
{
    int n;
    cout << "How Many Times You Want to print : ";
    cin >> n;
    //printLinearBackTrack(n);
    // printOpp(1, n);
    // printLinear(1, n);
    //  rintName(n);
    return 0;
}