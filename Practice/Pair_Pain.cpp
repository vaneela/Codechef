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
        lltoa ans = 0, one = 0, two = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                one++;
            }
            else if (x == 2)
            {
                two++;
            }
        }
        for (int j = 1; j <= one; j++)
        {
            ans += (n - j);
        }
        ans += two * (two - 1) / 2;

        // ans = one *(n-one) + one*(one-1)/2 + two*(two-1)/2;
        cout << ans << endl;
    }
    return 0;
}