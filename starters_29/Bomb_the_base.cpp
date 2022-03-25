#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    ll x, d_houses = 0;
    vector<ll> houses;
    cin >> n >> x;
    for(int i = 0; i<n;i++){
        ll ai;
        cin >> ai;
        houses.push_back(ai);
    }
    for(int i = n-1; i>=0; i--){
        if(houses[i]<x){
            d_houses = i+1;
            break;
        }
    }
    cout << d_houses << endl;
}
return 0;
}