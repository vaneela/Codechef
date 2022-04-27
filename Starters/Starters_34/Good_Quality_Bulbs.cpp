#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,x,ans=0;
    ll sum=0;
    vector<int>bulbs;
    cin >> n >> x;
    for(int i=0;i<n-1;i++){
        int x;
        cin >> x;
        sum += x;
        bulbs.push_back(x);
    }
    ans = x*n - sum;
    if(ans<0){
        ans=0;
    }
    cout << ans << endl;
}
return 0;
}