#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if ((nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) || (nums[i] % 2 == 1 && nums[i + 1] % 2 == 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {1};
    cout << isArraySpecial(nums);

    return 0;
}