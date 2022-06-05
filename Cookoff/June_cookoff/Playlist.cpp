#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>

using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    cout << n/(x*3) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}