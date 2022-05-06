#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int x,y;
cin>> x >> y;
if(x==0 || y==0){
    cout << "NO\n";
}
else if(x==y){
    cout << "YES\n";
}else{
    cout << "NO\n";
}
}
return 0;
}