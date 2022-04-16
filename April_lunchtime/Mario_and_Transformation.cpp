#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    if(n%3==0){
        cout << "NORMAL" << endl;
    }
    else if((n+1) %3==0){
        cout << "SMALL"  << endl;
    }
    else{
        cout << "HUGE"  << endl;
    }

}
return 0;
}