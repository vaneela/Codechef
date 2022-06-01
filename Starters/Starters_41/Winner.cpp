#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int pa,pb,qa,qb;
    cin>> pa >> pb >> qa >> qb;
    int p = max(pa,pb);
    int q = max (qa,qb);
    if(p==q){
        cout <<"TIE\n";
    }else if(p<q){
        cout << "P\n";
    }else{
        cout << "q\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}