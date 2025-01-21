#include <bits\stdc++.h>
using namespace std;

// In selection sort we try to find minimum element in the array and swap it with the first element of the array and then we find the minimum element in the remaining array and swap it with the second element of the array and so on. This process is repeated until the array is sorted. It is called selection sort because we select the minimum element and swap it with the first element of the array. It is not a stable sort. It is an in-place sort. It is not an adaptive sort.

void selectionSort(int arr[], int l)
{
    for (int i = 0; i <= l - 2; i++) // l-2 because last element will be automatically sorted (Time Complexity for this loop is O(n))
    {
        int min = i;
        for (int j = i + 1; j <= l - 1; j++) // j=i+1 because we have to compare with next element (Time Complexity for this loop is O(n))
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << ",";
    }
}
// Time Complexity: O(n^2) (Worst Case) and O(n^2) (Best Case)

int main()
{

    int arr[] = {3, 2, 4, 19, 15, 1};
    int l = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, l);

    return 0;
}
