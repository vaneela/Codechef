#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int, int>

using namespace std;
void solve()
{

    int n;
    cin >> n;
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = -1;
    for(int i =0;i<n;i++){
        ll cur =0;
        if(i==0){
            cur+=v[0];
            cur += max(v[1],v[n-1]);
        }else if(i==(n-1)){
            cur += v[n-1];
            cur += max(v[0],v[n-2]);
        }else{
            cur+= v[i];
            cur+= max(v[i+1],v[i-1]);
        }
        if(cur > ans){
            ans = cur;
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