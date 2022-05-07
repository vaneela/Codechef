#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int n,x,y;
    cin >> n >> x >>  y;
    ll ans =0;
    ans+= 2*(n-1);
   ans += min(x-1,y-1);
   ans+=min(n-x,y-1);
   ans+=min(n-y,x-1);
   ans+=min(n-x,n-y);
    cout << ans << endl;
}
return 0;
}
