#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> ppl;
    while(n--){
        int x;
        cin >> x;
        // ppl.push_back(x);
        if(x<=k){
            cout << 1;
            k -= x;
        }
        else{
            cout << 0;
        }
    }
    cout << endl;
}
return 0;
}