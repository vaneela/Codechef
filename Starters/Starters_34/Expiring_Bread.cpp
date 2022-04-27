#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,m,k;
    cin >> n >> m >> k;
    if((k*m)>=n){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
return 0;
}