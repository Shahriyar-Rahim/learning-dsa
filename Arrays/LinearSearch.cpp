#include <bits/stdc++.h>
using namespace std;

int linearS(int arr[], int count, int key)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {432534, 53246545, 345, 34, 5345, 324, 5324, 6456, 4, 534, 435, 346, 6, 456632, 45345, 624, 742, 3456, 3, 33};
    int key = 1;
    int sz = sizeof(arr) / sizeof(int);

    cout << linearS(arr, sz, key) << endl;

    return 0;
}