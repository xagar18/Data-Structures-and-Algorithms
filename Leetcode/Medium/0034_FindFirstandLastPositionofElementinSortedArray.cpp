#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    bool b = false;
    int mid;
    vector<int> temp(2, -1); 

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            temp[0] = temp[1] = mid;
            b = true;
            break;
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

    if (b)
    {
        for (int i = mid + 1; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                temp[1] = i;
            }
            else
            {
                break;
            }
        }
        for (int i = mid - 1; i >= 0; i--)
        {
            if (nums[i] == target)
            {
                temp[0] = i;
            }
            else
            {
                break;
            }
        }
    }

    return temp;
}

int main()
{
    vector<int> nums = {7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9};
    vector<int> a = searchRange(nums, 9);

    for (int x : a)
    {
        cout << x << ", ";
    }

    return 0;
}
