    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    void solve(){
        int a,b;
        cin >>a >>b;
        cout << 7-max(a,b)<< endl;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            solve();
        }
        return 0;
    }