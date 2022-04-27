#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    if(a<=c && b<=d){
        cout << "POSSIBLE" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
}
return 0;
}