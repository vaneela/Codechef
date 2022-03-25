#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int x,y;
        cin >> x >> y;
        ll z=x*y;
        cout << (z/100) <<endl;
    }
    return 0;
}