#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
    vector<int>arr(10,0);
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        arr[x-1]++;
    }
    bool flag = true;
    int max=0,max_i=0;
    
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
            max_i = i;       
        }
    }
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                // cout << "CONFUSED\n";
                flag = false;
                break;
            }
            else{
                flag = true;
            }
        
        }
    }
    if(flag){
        cout << max_i+1<< endl;
    }
    else{
        cout << "CONFUSED\n";
    }
}
return 0;
}