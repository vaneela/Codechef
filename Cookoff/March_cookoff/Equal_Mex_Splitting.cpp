#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int z=0, nz=0;
        for(int val:v){
            if(val == 0){
                z++;
            }
            else{
                nz++;
            }
        }
        int ans = max(z,nz);
        cout << ans << endl;
    }
    return 0;
}