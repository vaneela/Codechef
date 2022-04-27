#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t ;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cin >> n >> x >> k;
        int bottles = 0; 
        if(k>=x){
            bottles = (k/x);
        }
        if(bottles > n){
            bottles = n;
        }
        cout << bottles << endl;
    }
    
    return 0;
}