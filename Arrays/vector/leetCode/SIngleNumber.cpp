#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int singleNumber(vector<int>& num) {
            int ans = 0;
            for(int val : num){
                ans ^= val;
            }

            return ans;
        }
};