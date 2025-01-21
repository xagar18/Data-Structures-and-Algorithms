#include <bits\stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter Size Of An Array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The " << i + 1 << " Element Of An Array : ";
        cin >> arr[i];
    }

    // pre compute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
        // for each element in the array, increment the count of that element in the hash array by 1 - (arr[i] is the element)
    }

    int q;
    cout << "Enter How Many Values You want to check : ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the Number  : ";
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}