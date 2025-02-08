#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
  int perma = 0;
  int temp = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 1)
    {
      temp++;
    }

    if (nums[i] == 0 || i == nums.size() - 1)
    {
      if (temp > perma)
      {
        perma = temp;
      }
      temp = 0;
    }
  }

  return perma;
}

int main()
{

  vector<int> nums = {1, 0, 1, 1, 0, 1};
  cout << findMaxConsecutiveOnes(nums);

  return 0;
}