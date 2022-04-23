
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x;
    cin >> x;
    int max = (x/10 >100)?x/10:100;
    cout << max << '\n';
}
return 0;
}