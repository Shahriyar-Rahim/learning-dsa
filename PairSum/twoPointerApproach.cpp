#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>& nums, int t){
    int n = nums.size();
    int i = 0, j = n - 1;

    vector<int> ans;

    while(i < j){
        int ps = nums[i] + nums[j];
        if(ps > t) j--;
        else if (ps < t) i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 13};
    int target = 15;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}