#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    ll a,b,m;
    ll ans;
    cin >> a >> b>> m;
    if(a<b){
        ans
     = min(abs(m-b)+a,abs(a-b));
    }else{
        ans= min(abs(m-a)+b,abs(a-b));
    }
    cout << ans << endl;
}
return 0;
}