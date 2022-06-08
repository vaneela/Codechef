#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n1, n2;
        cin >> n1 >> n2;
        if (n1 % 3 == 0 || n2 % 3 == 0)
            cout << 0 << endl;
        else if (abs(n1 - n2) % 3 == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}