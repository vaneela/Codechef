#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,m ,count =0;
    cin  >> n >> m;
    if(n>m){
        count += m;
        count += (n-m)*2;
    }
    else{
        if(n==m){
            count += m;
        }
        else{
            count += n;
        }
    }
    cout << count << endl;
}
return 0;
}