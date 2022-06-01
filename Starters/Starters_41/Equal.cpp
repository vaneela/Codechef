#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = abs(x - y);
    if (x < y)
    {
        ++ans;
        --ans;
    }
    else
    {
        if (ans % 2 == 0)
        {
            ans /= 2;
        }
        else
        {
            ans /= 2;
            ans+=2;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}