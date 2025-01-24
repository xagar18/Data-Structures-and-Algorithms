#include <bits\stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        if (left > right)
        {
            return left;
        }
    }

    return -1;
}

int main()
{

    vector<int> nums = {0, 1, 3, 5, 6, 7};
    int target = 10;

    cout << searchInsert(nums, target);

    return 0;
}