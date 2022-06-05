#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    if(y<=(x+200) && y>=x){
        cout << "YES\n";
    }    else{
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