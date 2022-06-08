#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
 
using namespace std;
void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    int one= 0, onem= 0;
    for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i]==1){
        one++;
    }else   
        onem++;
    }
    if(n%2 !=0){
        cout << -1 << endl;
    }else{
        if(one == onem){
            cout << 0 << endl;
        }else if(one==0){
            cout << onem/2 << endl;
        }else if(onem ==0){
            cout << one/2 << endl;
        }
        else
         {
             int ans =0;
             ans += (n/2 - min(one,onem));
             cout << ans << endl;
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