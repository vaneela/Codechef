#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,k;
    cin >> n >> k;
    if(n%2==0){
        cout << "Yes\n";
    }else{
        if(k==1){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}