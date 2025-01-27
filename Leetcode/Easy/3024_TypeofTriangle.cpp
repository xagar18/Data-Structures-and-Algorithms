#include <bits\stdc++.h>
using namespace std;

string triangleType(vector<int> &nums)
{
    if (nums[0] == nums[1] && nums[1] == nums[2])
    {
        return "equilateral";
    }
    if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[0] + nums[2] > nums[1])
    {

        if (nums[0] != nums[1] && nums[0] != nums[2] && nums[1] != nums[2])
        {
            return "scalene";
        }
        return "isosceles";
    }

    return "none";
}

int main()
{
    vector<int> nums = {5, 3, 8};
    cout << triangleType(nums);

    return 0;
}