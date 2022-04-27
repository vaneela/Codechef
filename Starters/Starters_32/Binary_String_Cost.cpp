#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y,n;
    cin >> n >> x >> y;
    multiset<char> str;
    int cost = 0;
    for(int i=0;i<n;i++){
        char c;
        cin >> c;
        str.insert(c);
    }
    if(*str.begin()=='0' && *(--str.end())=='1'){
        if(x<y){
            cost += x;
        }
        else{
            cost += y;
        }
    }
    
    cout << cost << endl;
}
return 0;
}