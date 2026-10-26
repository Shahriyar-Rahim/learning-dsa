#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int count){
    int start = 0, end = count - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // two pointer approach

    int arr[] = {4,2,7,8,1,2,5,3,12,-4};
    int size = sizeof(arr) / sizeof(int);

    cout << size << endl;
    
    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}