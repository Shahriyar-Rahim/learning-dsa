#include <bits/stdc++.h>
using namespace std;


typedef long double ld;
typedef long long ll;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int nums[] = {4, 3, -43, 5, 77, 3, 6, 8};
    int size = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(nums[i] < smallest) {
            smallest = i;
        }

    //    smallest =  min(nums[i], smallest);
    //    largest = max(nums[i], largest);
    }

    cout << "Smallest: " << smallest << endl;
    // cout << "Largest: " << largest << endl;
    

    return 0;
}