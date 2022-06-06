#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    ll n;
    cin >> n;
    ll a,b;
    if(n==2){
        a=1;
        b=1;
    }else 
    if(n % 2 == 0){
        if(n/2 % 2 != 0){
          a = n/2 +2;
          b = n/2 -2; 
        }else{
            a = n/2 +1;
            b = n/2 -1;
        }
    }else{
        a = (n-1) / 2;
        b = (n+1) / 2;
    }    
    cout << a*b -1 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}