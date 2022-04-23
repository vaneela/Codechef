#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                count++;
                break;
            }
        }
        if (!count)
        {

            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}