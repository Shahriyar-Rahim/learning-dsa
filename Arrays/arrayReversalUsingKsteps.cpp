#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateRight(vector<int>& nums, int k) {
    int n = nums.size();
    if(n <= 1) return;

    k = k % n;
    if(k == 0) return;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1,2,3,4,5};
    int k = 2;

    rotateRight(arr, k);

    for(int i : arr) cout << i << " ";

    cout << endl;
    

    return 0;
}