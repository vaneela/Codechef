#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int n,m,avg;
cin>> n >> m >>avg;
int ans = (n*avg)/(avg+1);
if(m==avg){
    ans = 0;
}
cout << ans << endl;

}
return 0;
}