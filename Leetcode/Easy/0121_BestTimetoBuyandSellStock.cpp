#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
  int profit = 0;
  int minimum = prices[0];
  for (int i = 0; i < prices.size() - 1; i++)
  {

    int currPrice = prices[i + 1];
    int currProfit = currPrice - minimum;
    if (currProfit > profit)
    {
      profit = currProfit;
    }
    minimum = min(minimum, prices[i + 1]);
  }
  return profit;
}

int main()
{

  vector<int> prices = {7, 6, 4, 3, 1};

  cout << "profit : " << maxProfit(prices) << endl;
  return 0;
}
