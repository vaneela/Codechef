#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin>> t;
while(t--){
    int x,count=0;
    cin >> x;
    if(x%5 != 0){
        count=-1;
    }
    else{
        if(x%10==0){
            count = x/10;
        }
        else{
            count = x/10 +1;
         }
    }
    cout << count << endl;
}
return 0;
}