#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >>t;
while(t--){
    int d;
    string str;
    cin >> d;
    cin >> str;
    bool flag =false;
    for(auto c : str){
        if(c =='0' || c=='5'){
            flag =true;
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout <<"No" << endl;
    }
}
return 0;
}