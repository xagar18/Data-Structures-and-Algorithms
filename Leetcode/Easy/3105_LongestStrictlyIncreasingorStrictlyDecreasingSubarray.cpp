#include <bits/stdc++.h>
using namespace std;

int longestMonotonicSubarray(vector<int> &nums)
{
    int icount = 1;
    int picount = 1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            icount++;
            if (icount > picount)
            {
                picount = icount;
            }
        }
        else
        {
            icount = 1;
        }
    }

    int dcount = 1;
    int pdcount = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            dcount++;
            if (dcount > pdcount)
            {
                pdcount = dcount;
            }
        }
        else
        {
            dcount = 1;
        }
    }
    if (pdcount > picount)
    {
        return pdcount;
    }
    return picount;
}

int main()
{
    vector<int> nums = {1, 4, 3, 3, 2, 1, 0};
    longestMonotonicSubarray(nums);

    return 0;
}