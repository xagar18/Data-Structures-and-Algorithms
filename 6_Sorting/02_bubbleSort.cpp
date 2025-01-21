#include <iostream>
using namespace std;

// In Bubble Sort, we compare the adjacent elements and swap them if they are in wrong order. till the array is sorted. rightmost element will be sorted automatically.

void bubbleSort(int a[], int l) // Time Complexity: O(n^2) (Worst Case) and O(n) (Best Case)
{
    for (int i = l - 1; i >= 0; i--) // l-1 because last element will be automatically sorted (Time Complexity for this loop is O(n)).
    {
        int swapp = 0;
        for (int j = 0; j <= l - 1; j++) // j=0 because we have to compare with next element (Time Complexity for this loop is O(n)) beacuse we are comparing with next element and not with all elements.
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapp = 1;
            }
        }
        if (swapp == 0) // If no swapping is done then break the loop. This is done to reduce the time complexity. (Time Complexity for this loop is O(n)).
        {
            break;
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << a[i] << ",";
    }
}

int main()
{
    int a[] = {3, 2, 1, 27, 4, 3, 1, 23};
    int l = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, l);

    return 0;
}