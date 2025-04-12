#include <bits\stdc++.h>
#include <vector>
using namespace std;

// void twosum(int a[], int targett, int alenth)
// {
//     int b[] = {};
//     for (int i = 0; i < alenth; i++)
//     {

//         for (int j = i + 1; j < alenth; j++)
//         {
//             if (a[i] + a[j] == targett)
//             {
//                 cout << i << j;
//                 return;
//             }
            
//         }
//     }
// }

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{

    // int a[] = {1, 2, 3, 4, 9};
    // int alenth = (sizeof(a) / sizeof(a[0]));
    // // cout << alenth;
    // int targett = 3;
    // twosum(a, targett, alenth);

    vector<int> a = {1, 2, 3, 4, 9};
    int targett = 3;
    vector<int> result = twoSum(a, targett);
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}