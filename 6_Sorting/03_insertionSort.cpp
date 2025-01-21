#include <bits\stdc++.h>
using namespace std;

void insertionSort(int a[], int l) // Time Complexity: O(n^2) (Worst Case) and O(n) (Best Case)
{
    for (int i = 1; i < l; i++) // Time Complexity for this loop is O(n).
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) // Time Complexity for this loop is O(n). and j>0 because we have to compare with previous element.
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << a[i] << ",";
    }
}

int main()
{
    int a[] = {45, 2, 1, 27, 4, 3, 1, 23};
    int l = sizeof(a) / sizeof(a[0]);
    insertionSort(a, l);

    return 0;
}