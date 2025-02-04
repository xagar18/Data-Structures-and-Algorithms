#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    if (nums.size() == 1)
    {
        if (nums[0] == target)
        {
            return 0;
        }
        return -1;
    }
    int high = nums.size() - 1;
    int low = 0;
    int pi = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        {
            pi = i;
            break;
        }
    }
    cout << pi << endl;

    if (target >= nums[0])
    {
        if (pi == 0)
        {
            high = nums.size() - 1;
        }
        else
        {
            high = pi - 1;
        }
    }
    else
    {
        low = pi;
    }

    cout << " low : " << low << " High : " << high << endl;
    int mid;
    while (high >= low)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3};
    int target = 3;
    cout << search(nums, target);

    return 0;
}
