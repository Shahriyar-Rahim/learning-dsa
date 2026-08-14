#include <bits/stdc++.h>
using namespace std;


typedef long double ld;
typedef long long ll;

void changeArr(int arr[], int x){
    cout << "From fun\n";
    for (int i = 0; i < x; i++)
    {
        arr[i] = 3 * arr[i];
    }
    
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int arr[]= { 1, 2, 4};
    int count = 3;

    changeArr(arr, count);

    cout << "From main\n";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}