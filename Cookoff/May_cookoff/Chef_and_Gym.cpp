#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int x,y,z;
cin>> x >> y >> z;
if(z>= x+y){
    cout <<2<< endl;
}else if(x<=z){
    cout << 1 << endl;

}else{
    cout << 0 <<endl; 
}
}
return 0;
}
