#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{ // {6,2,6}
    //     int a = 6; //  0110     (res)     (6)     (2)
    //     int b = 2; //  0010  ->  0100  -> 0110 => 0010

    //     int c = a ^ b;

    //     cout << c;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main()
{
    vector<int> nums = {-2, 2, 1, 3, 3, 2, 1};

    cout << singleNumber(nums);

    return 0;
}