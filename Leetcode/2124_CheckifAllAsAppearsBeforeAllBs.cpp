#include <bits/stdc++.h>
using namespace std;

bool checkString(string s)
{
   for (int i = 0; i < s.length()-1; i++)
   {
      int temp = s[i];
      int temp1 = s[i + 1];

      if(temp1 < temp){
         return false;
      }

   }
   return true;
}

int main(){

   string s = "bbb";
   cout<<checkString(s);

   return 0;
}
