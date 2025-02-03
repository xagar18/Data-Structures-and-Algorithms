#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0;
    int j = 0;
    vector<int> marr;
    int n1size = nums1.size();
    int n2size = nums2.size();

    while (i < n1size && j < n2size)
    {
        if (nums1[i] <= nums2[j])
        {
            marr.push_back(nums1[i]);
            i++;
        }
        else
        {
            marr.push_back(nums2[j]);
            j++;
        }
    }
    while (i < n1size)
    {
        marr.push_back(nums1[i]);
        i++;
    }
    while (j < n2size)
    {
        marr.push_back(nums2[j]);
        j++;
    }
    int msize = marr.size();
    if (msize % 2 == 1)
    {
        int mid = (msize) / 2;
        return marr[mid];
    }
    else
    {
        int mid = msize/ 2 ;
        double res = double(marr[mid] + marr[mid - 1]) / 2;
        return res;
    }
    for (int x : marr)
    {
        cout << x << endl;
    }

    return 2.0;
}

int main()
{
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << findMedianSortedArrays(nums1, nums2);

    return 0;
}