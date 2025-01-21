#include <bits\stdc++.h>
using namespace std;

void selectionSort(int arr[], int l)
{
    for (int i = 0; i <= l - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < l; j++) // we are taking i+1 because we are comparing the next element with the current element
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubbleSort(int arr[], int l)
{
    for (int i = 0; i <= l - 1; l--)
    {
        for (int j = 0; j < l - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {4, 55, 43, 6, 1, 7, 3, 5, 1, 9, 1};
    int larray = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, larray);
    for (int i = 0; i < larray; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}