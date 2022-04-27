#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        long long n, count=0;
        cin >> n;
        if(n==0){
            count =0;
        }
        else if(n==1){
            count = -1;
        }
        else{
            if(n%2==0){
                count = n/2;
            }
            else{
                count =-(n/2 +1);
            }
        }
        cout << count << endl;
    }
}