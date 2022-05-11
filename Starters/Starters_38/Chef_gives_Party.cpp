#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int n,x,k;
    cin >> n >> x >> k;
    if(n*x <= k){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
return 0;
}