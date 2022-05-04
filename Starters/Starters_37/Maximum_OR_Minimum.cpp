#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int n;
int z=0,o=0;
cin >> n;
// vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin >> x;
    if(x==0){
        z++;
    }else{
        o++;
    }
}
if(z>o){
    cout << 0 << endl;
}else{
    cout << 1 << endl;
}

}
return 0;
}