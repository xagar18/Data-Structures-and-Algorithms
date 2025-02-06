#include <bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1, string s2)
{

  string temps = s2;
  if (temps == s1)
  {
    return true;
  }
  for (int i = 0; i < s2.size(); i++)
  {
    for (int j = i + 1; j < s2.size(); j++)
    {
      char t;
      t = temps[i];
      temps[i] = temps[j];
      temps[j] = t;
      if (temps == s1)
      {
        return true;
      }
      temps = s2;
    }
  }
  return false;
}

int main()
{
  string s1 = "p";
  string s2 = "p";

  cout << areAlmostEqual(s1, s2);

  return 0;
}