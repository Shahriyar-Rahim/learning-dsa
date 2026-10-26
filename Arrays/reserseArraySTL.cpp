#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

typedef long double ld;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {3,6,1,4,6,3,8,9,1};
    int size = sizeof(arr)/ sizeof(int);

    reverse(arr, arr + size);

    for(int i : arr) cout << i << " ";

    return 0;
}