#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<bool> arr(1001, false);
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (arr[nums1[i]] == false)
        {
            arr[nums1[i]] = true;
        }
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if (arr[nums2[i]] == true)
        {
            arr[nums2[i]] = false;
            res.push_back(nums2[i]);
        }
    }

    return res;
}

int main()
{
    vector<int> nums1 = {1, 3, 2, 2, 3, 1};
    vector<int> nums2 = {2, 3};

    intersection(nums1, nums2);

    return 0;
}