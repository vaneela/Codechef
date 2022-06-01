#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
void solve(){
    ll n,k;
    cin >> n >> k;
    if(k==1){
        if(n%2==0){
            cout << "Even\n";
        }else{
            cout << "Odd\n";
        }
    }else if(k==2){
        cout << "Odd\n";
    }else{
        cout << "Even\n";
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