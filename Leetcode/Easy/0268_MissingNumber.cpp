#include <bits\stdc++.h>
using namespace std;

// int missingNumber(int a[], int n)
// {
//     int sum = 0;
//     int sum1 = 0;
//     for (int j = 0; j <= n; j++)
//     {
//         sum1 += j;
//         if (j != n)
//         {
//             sum += a[j];
//         }
//     }
//     return sum1 - sum;
// }

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int sum1 = 0;
    for (int j = 0; j <= n; j++)
    {
        sum1 += j;
        if (j != n)
        {
            sum += nums[j];
        }
    }
    return sum1 - sum;
}

int main()
{
    // int a[] = {4, 3, 2, 5, 1};
    // int n = 5;
    // cout << missingNumber(a, n);

    vector<int> nums = {4, 3, 2, 5, 1};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}