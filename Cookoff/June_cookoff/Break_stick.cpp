#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    ll n , x;
    cin >> n >> x;
    if(n==x || (n%2!=0 && x%2==0)){
        cout << "NO\n";
    }else{
        cout << "YES\n";
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