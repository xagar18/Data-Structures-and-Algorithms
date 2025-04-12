#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> hashh(100001, 0);
    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
    {
        hashh[nums[i]]++;
    }
    for (int i = 0; i < hashh.size(); i++)
    {
        if (hashh[i] == 2)
        {
            arr.push_back(i);
        }
    }
    
    return arr;
}

int main()
{

    vector<int> nums = {1};
    findDuplicates(nums);

    return 0;
}