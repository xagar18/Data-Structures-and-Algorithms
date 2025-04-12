#include <bits/stdc++.h>
using namespace std;

void revarr(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
            cout << a[i] << endl;
    }
   
}

int main()
{

    int a[] = {1, 2, 3, 4, 5};
    revarr(a, sizeof(a) / sizeof(a[0]));

    return 0;
}

  LUNCH