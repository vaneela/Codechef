#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int k,n;
    cin >> n >> k;
    int kth = k/5, t = n/5;
    if(k% 5!=0)
        ++kth;
    if(n%5!=0)
        ++t;
    cout << t - kth << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}