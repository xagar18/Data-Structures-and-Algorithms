#include <bits\stdc++.h>
using namespace std;

void twosum(int a[], int targett, int alenth)
{
    int b[] = {};
    for (int i = 0; i < alenth; i++)
    {

        for (int j = i + 1; j < alenth; j++)
        {
            if (a[i] + a[j] == targett)
            {
                cout << i << j;
                return;
            }
            
        }
    }
}

int main()
{

    int a[] = {1, 2, 3, 4, 9};
    int alenth = (sizeof(a) / sizeof(a[0]));
    // cout << alenth;
    int targett = 3;
    twosum(a, targett, alenth);

    return 0;
}