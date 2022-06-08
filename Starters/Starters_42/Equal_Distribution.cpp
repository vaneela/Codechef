#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    ll c = a+b;
    if(c%2==0){
        cout <<"YES\n";
    }else{
        cout << "NO\n";
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