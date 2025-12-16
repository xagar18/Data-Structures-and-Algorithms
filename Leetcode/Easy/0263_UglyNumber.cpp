#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n)
{
  if (n <= 0)
    return false;

  for (int i = 1; i <= n; i++)
  {
    vector<int> myArray;

    if (n % i == 0)
    {
      for (int m = 1; m <= i; m++)
      {
        if (i % m == 0)
        {
          if (!(m == 2 || m == 3 || m == 5 || m == 1 || m == i))
          {
            myArray.push_back(m);
          }
        }
      }
      if (!myArray.empty())
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{
  cout << isUgly(8); 
  return 0;
}
