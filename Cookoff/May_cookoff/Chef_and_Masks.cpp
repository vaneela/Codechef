
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int x,y;
cin>> x >> y;
if(x*100>=y*10){
    cout << "Cloth\n";
}else{
    cout << "Disposable\n";
}
}
return 0;
}
