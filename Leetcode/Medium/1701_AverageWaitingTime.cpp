#include <bits/stdc++.h>
using namespace std;

double averageWaitingTime(vector<vector<int>> &customers)
{
    int currtime = 0;
    int waittime = 0;
    for (int i = 0, l = customers.size(); i < l; i++)
    {
        int arrvtime = customers[i][0];
        int ordtime = customers[i][1];

        if (currtime < arrvtime)
        {
            currtime = arrvtime;
        }
        currtime = currtime + ordtime;
        
        int currwait = currtime - arrvtime;
        waittime = waittime + currwait;
    }
    return (double)waittime / customers.size();
}

int main()
{
    vector<vector<int>> customers = {{1, 2}, {2, 5}, {4, 3}};
    cout << averageWaitingTime(customers);

    return 0;
}