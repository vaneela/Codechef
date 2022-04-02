#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int m,n,k;
    cin >> n >> m >> k;
    if((m-k) >= n){
        cout <<"Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
}
return 0;
}