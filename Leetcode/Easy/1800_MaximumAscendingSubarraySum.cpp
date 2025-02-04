#include <bits/stdc++.h>
using namespace std;

int maxAscendingSum(vector<int> &nums)
{
    int psum = 0;
    int tsum = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            tsum += nums[i + 1];
        }
        else
        {
            if (tsum > psum)
            {
                psum = tsum;
            }
            tsum = nums[i + 1];
        }
    }
    if (psum > tsum)
    {
        return psum;
    }
    return tsum;
}

int main()
{
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    cout << maxAscendingSum(nums);

    return 0;
}