#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size();
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 7, 9};
    cout << binarySearch(nums, 5);

    return 0;
}