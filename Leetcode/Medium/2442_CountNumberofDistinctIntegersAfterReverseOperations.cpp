#include <bits\stdc++.h>
using namespace std;

// int countDistinctIntegers(vector<int> &nums)
// {
//     int rev = 0;
//     int n = nums.size();
//     int uniquee = 1;
//     int resflag = 1;
//     vector<int> res = {nums[0]};
//     for (int i = 0; i < n; i++)
//     {
//         int nu = nums[i];
//         for (int k = 0; k < res.size(); k++)
//         {
//             if (nums[i] == res[k])
//             {
//                 resflag = 0;
//                 break;
//             }
//         }
//         if (resflag == 1)
//         {
//             res.push_back(nums[i]);
//         }

//         while (nu > 0)
//         {
//             int lastidigi = (long)nu % 10;
//             nu = nu / 10;
//             rev = (rev * 10) + lastidigi;
//         }
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (nums[j] == rev)
//             {
//                 uniquee = 0;
//                 break;
//             }
//         }

//         if (uniquee == 1)
//         {
//             res.push_back(rev);
//         }
//         rev = 0;
//         uniquee = 1;
//         resflag = 1;
//     }

//     return res.size();
// }

int countDistinctIntegers(vector<int> &nums)
{
    set<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        res.insert(nums[i]);
        int nu = nums[i];
        int rev = 0;

        while (nu > 0)
        {
            int lastidigi = nu % 10;
            nu = nu / 10;
            rev = (rev * 10) + lastidigi;
        }
        res.insert(rev);
    }
    return res.size();
}

int main()
{
    vector<int> nums = {1, 13, 10, 12, 31};
    cout << countDistinctIntegers(nums);

    return 0;
}
