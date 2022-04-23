#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x>> y;
    int min = (x*3<y*2)?x*3:y*2;
    cout << min << '\n';
}
return 0;
}