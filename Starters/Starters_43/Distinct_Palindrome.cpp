#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>

using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    string str;
    for(int i=0;i<n;i++){
        str+=97;
    }
    if(x==1){
        cout << str << endl;
        
    }else{
    char ch = 'a';
    int s = 0,e = n-1;
    for(int i =0;i<x;i++){
        str[s++]=ch;
        str[e--]=ch;
        ch++;
    }
    if(n%2==0){
        if(x>n/2)
            cout << -1 << endl;
        else   
            cout << str << endl;
    }else{
        if(x>(n/2 +1))
            cout << -1 << endl;
        else    
            cout << str << endl;
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