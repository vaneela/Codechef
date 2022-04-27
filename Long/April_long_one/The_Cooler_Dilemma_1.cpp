#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,m;
        ll y;
        cin >> x >> y >> m;
        if((x*m)<y){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}