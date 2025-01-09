#include <bits/stdc++.h>
using namespace std;

void arrayRev2Point(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - 1 - i]);
    arrayRev2Point(i + 1, a, n);
}
// time complexity is O(n/2) = O(n) and space complexity is O(1)
int main()
{
    int n;
    cout << "How Many element Youy want in array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    arrayRev2Point(0, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}