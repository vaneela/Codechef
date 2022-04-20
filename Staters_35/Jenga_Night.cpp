#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x, n;
    cin >> n >> x;
    if(x%n==0){
        cout << "YES\n";  
    }
    else{
        cout << "NO\n";
    }
}
return 0;
}