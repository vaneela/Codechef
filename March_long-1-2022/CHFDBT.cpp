#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll ans;
    if(n % 2 == 0){
        ans = n/2;
    }
    else{
        ans = n/2 +1;
    }
    cout << ans << endl;
}
return 0;
}