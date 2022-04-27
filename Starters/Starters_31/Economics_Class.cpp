#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, count=0;
        cin >> n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++){
            cin >> v1[i];
        }
        for(int i=0;i<n;i++){
            cin >> v2[i];
        }
        for(int i=0;i<n;i++){
            if(v1[i] == v2[i]){
                count ++;
            }
        }
        cout << count << endl;

    }
}