#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    sum -= max(a,max(b,c));
    if(max(a,max(b,c))>sum){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
return 0;
}