#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int a,b;
    cin >> a >> b;
    ll a_m = a*10, b_m = b*5;
    if(a_m == b_m){
        cout << "ANY\n";
    }else if(a_m > b_m){
        cout << "FIRST\n";
    }else {
        cout << "SECOND\n";
    }

}
return 0;
}