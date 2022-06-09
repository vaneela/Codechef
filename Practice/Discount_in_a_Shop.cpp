#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int, int>

using namespace std;
void solve()
{
    vi nums;
    int n;
    cin >> n;

    while (n)
    {

        nums.push_back(n % 10);
        n /= 10;
    }
    reverse(nums.begin(), nums.end());

    int ans = INT_MAX;
    
    for (int i = 0; i < nums.size(); i++)
    {
        int cur = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (j != i)
            {
                cur *= 10;
                cur += nums[j];
            }
        }
        // cout << cur << " ";
        ans = min(cur, ans);
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