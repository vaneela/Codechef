#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int a ,b;
cin >> a >> b;
if(a && b){
    cout << "https://discuss.codechef.com";
}
else{
    if(a==1 ){
        cout << "https://www.codechef.com/contests";
    }
    else{
        cout << "https://www.codechef.com/practice";
    }
}
return 0;
}