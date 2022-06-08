#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int, int>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = 1;
    for (int i = 1; i < n; i++)
    {
        int min = *min_element(arr.begin(), arr.begin() + i);
        int max = *max_element(arr.begin(), arr.begin() + i);
        if (arr[i] <= min || arr[i] >= max)
        {
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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