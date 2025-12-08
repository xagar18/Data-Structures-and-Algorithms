#include <bits\stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> sagData;
    int flag = 0;

    for (auto sagNum : nums) {
        int beforeSize = sagData.size();
        sagData.insert(sagNum);
        int afterSize = sagData.size();
        if (beforeSize == afterSize) {
            flag = 1;
            return true;
        }
    }
    if (flag) {
        return true;
    }
    return false;
}

int main() {
    vector<int> nums = {0, 4, 5, 0, 3, 6};
    bool response = containsDuplicate(nums);
    cout << (response ? "true" : "false") << endl;
    return 0;
}
