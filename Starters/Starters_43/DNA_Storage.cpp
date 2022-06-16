#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    int n,si =0;
    cin>> n;
    cin >> s;
    char ans[n/2];
    for(int i=0;i<n;i+=2){
        if(s[i]=='0'){
            if(s[i+1]=='0')
                ans[si++]='A';
            else    
                ans[si++]='T';
        }else{
            if(s[i+1]=='1')
                ans[si++]='G';
            else
                ans[si++]= 'C';
        }
    }
    si =0;
    while(ans[si]!='\0'){
        cout << ans[si++];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}