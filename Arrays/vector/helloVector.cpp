#include <iostream>
#include<vector>
using namespace std;

typedef long double ld;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> vc;

    for (int i=1; i <= 100; i++)
    {
        vc.push_back(i);
    }

    for (int i : vc)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << vc.size();
    cout << endl;

    cout << vc.at(23);
    cout << endl;

    return 0;
}