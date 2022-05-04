#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    int x,y,z;
    cin >> x >> y >> z;
    int count =0;
    for(int i=1;i<100;i++){
        if(x*i + y <=z){
            count ++;
        }else{
            break;
        }
    }
    cout << count << endl;
}
return 0;
}