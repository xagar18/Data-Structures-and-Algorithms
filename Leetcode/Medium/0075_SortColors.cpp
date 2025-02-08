#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
  int countzero = 0;
  int countone = 0;
  int counttwo = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
    {
      countzero++;
    }
    else if (nums[i] == 1)
    {
      countone++;
    }
    else
    {
      counttwo++;
    }
  }
  for (int i = 0; i < nums.size(); i++)
  {
    if (countzero > i)
    {
      nums[i] = 0;
    }
    else if (countzero + countone > i && countzero < i + 1)
    {
      nums[i] = 1;
    }
    else
    {
      nums[i] = 2;
    }
  }
  for (int res : nums)
  {
    cout << res << ",";
  }
}

int main()
{

  vector<int> nums = {2, 0, 1};
  sortColors(nums);

  return 0;
}