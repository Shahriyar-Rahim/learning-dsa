#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        for (int val : nums)
        {
            int freq = 0;
            for (int el : nums)
            {
                if (el == val)
                {
                    freq++;
                }
            }
            if (freq > n / 2)
            {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    
    
    return 0;
}