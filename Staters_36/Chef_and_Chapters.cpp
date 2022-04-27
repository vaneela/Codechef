#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y,z;
    cin >> x >>y >> z;
    ll ans = (x*y)*z;
    cout << ans << "\n";
}

return 0;
}