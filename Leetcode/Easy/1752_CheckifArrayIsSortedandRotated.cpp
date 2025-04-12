#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int temp;
    bool b = false;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            if (i == nums.size() - 2)
            {
                return true;
            }
        }
        else
        {
            temp = i;
            break;
        }
    }
    for (int i = temp + 1; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false; 
        }
    }

    if (nums[nums.size() - 1] > nums[0])
    {
        return false;
    }

    return true;
}

int main()
{
    vector<int> nums = {2, 1, 3, 4};

    cout << check(nums);
}