#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freq = 0, ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (freq == 0)
                ans = nums[i];

            if (ans == nums[i])
                freq++;
            else
                freq--;
        }
        int count = 0;
        for (int num : nums)
        {
            if (num == ans)
                count++;
        }
        if (count > nums.size() / 2)
        {
            return ans;
        }
        return -1;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1, 2, 3, 2, 1, 1, 1, 3, 3, 3, 2};
    cout << s.majorityElement(nums) << endl;

    return 0;
}