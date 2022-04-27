#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y,z;
    cin >> x >> y >> z;
    int t = y/x;
    if(t>=z){
        cout << 0 << endl;
    }
    else{
        cout << (z-t) << endl;
    }
}
return 0;
}