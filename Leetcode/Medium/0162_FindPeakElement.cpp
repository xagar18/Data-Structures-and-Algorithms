#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 1};
    cout << findPeakElement(nums);

    return 0;
}
