#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    if(x>=y){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"  << endl;
    }
}
return 0;
}