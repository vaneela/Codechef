#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x, y;
    cin >> x >> y;
    ll ans ;
    if(x<y){
        ans = abs(x-y);
    }
    else {
        ans = abs(y-x);
    }
   cout << ans << "\n";
}
return 0;
}