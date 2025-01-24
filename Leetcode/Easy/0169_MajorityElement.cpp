#include <bits\stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int cm = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (count == 0)
        {
            cm = nums[i];
            count = 1;
        }
        else if (nums[i] == cm)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return cm;
}

int main()
{

    vector<int> nums = {3, 4, 3};

    cout << majorityElement(nums);

    return 0;
}