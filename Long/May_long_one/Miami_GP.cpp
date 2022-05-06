#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    int z = x * 107 /100;
    if(z>=y){
        cout << "YES\n";
    }else{
        cout <<"NO\n";
    }
}
return 0;
}