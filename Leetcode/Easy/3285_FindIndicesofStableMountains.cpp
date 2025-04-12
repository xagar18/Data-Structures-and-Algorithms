#include <bits\stdc++.h>
using namespace std;

vector<int> stableMountains(vector<int> &height, int threshold)
{
    int n = height.size();
    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (height[i - 1] > threshold)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> height = {10, 1, 10, 1, 10};
    int threshold = 3;
    vector<int> res = stableMountains(height, threshold);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}