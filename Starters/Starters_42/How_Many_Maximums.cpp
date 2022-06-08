#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    
    int n;
    cin >> n;
    vector<char>v(n);
    int one = 0, zero = 0;
    for(int i=0;i<n-1;i++){
    cin >> v[i];
    }   
    if(n==2){
        cout << 1 << endl;
    }else{
        int ans = 0;
        for(int i=0;i<=n;i++){
            if(v[i]=='1' && (v[i+1]=='0' || v[i+1]=='\0')){
                ans ++;
            }
        }   
        if(v[n-2]=='0')
            ++ans;
        cout << ans << endl;;
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