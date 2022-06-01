#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int x,y,z;
    cin >> x  >> y >> z;
    ll ans = ((x*5)+(y*10))/z;
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}