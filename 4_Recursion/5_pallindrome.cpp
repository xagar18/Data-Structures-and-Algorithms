#include <bits/stdc++.h>
using namespace std;

bool pallindrom(int i, string a)
{
    if (i > a.size() / 2)
    {
        return true;
    }
    if (a[i] != a[a.size() - i - 1])
        return false;
    return pallindrom(i + 1, a);
}
// Time Complexity: O(n/2) = O(n) where n is the size of the string
int main()
{
    string a = "madam";
    cout << pallindrom(0, a);

    return 0;
}