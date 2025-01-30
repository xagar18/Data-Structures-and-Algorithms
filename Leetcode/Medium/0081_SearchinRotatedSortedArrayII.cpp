#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{

    int n = nums.size() - 1;
    int pi;
    int low = 0;
    int high;
    if (n == 0)
    {
        if (nums[0] == target)
        {
            return true;
        }
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            pi = i;
            break;
        }
        else
        {
            pi = i;
        }
    }
    if (nums[pi] >= target && nums[0] <= target)
    {
        cout << "if" << endl;
        low = 0;
        high = pi;
    }
    else
    {
        cout << "else" << endl;
        low = pi + 1;
        high = n;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            return true;
        }

        else if (nums[mid] < target)
        {
            low = mid + 1;
        }

        else
            high = mid - 1;
    }

    return false;
}

int main()
{
    vector<int> nums = {1};
    int target = 0;

    cout << (search(nums, target) ? "true" : "false") << endl;

    return 0;
}
