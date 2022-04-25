#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        ll sum = 0, sum2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        sum2 = v * (n + k) - sum;
        int ans = sum2 / k;
        if (ans > 0 && (ans * k) == sum2)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}