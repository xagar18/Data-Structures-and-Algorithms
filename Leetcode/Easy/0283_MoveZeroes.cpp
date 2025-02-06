#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
  vector<int> temp;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] != 0)
    {
      temp.push_back(nums[i]);
    }
  }
  for (int i = 0; i < nums.size(); i++)
  {
    if (i < temp.size())
    {
      nums[i] = temp[i];
    }
    else
    {
      nums[i] = 0;
    }
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << endl;
  }
}

int main()
{
  vector<int> nums = {0, 1, 0, 3, 12};
  moveZeroes(nums);

  return 0;
}