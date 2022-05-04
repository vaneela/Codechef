    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main(){

    int t;
    cin >> t;
    while(t--){
        int n,x;
        int te =0;
        cin >> n >> x;
        vector<int>v;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            v.push_back(k);
        }
        int ans=0,maxx = *max_element(v.begin(),v.end());
        if(maxx<=x){
            if(n<x){
                ans = n;
            }else{
                ans = x;
            }
        }
        else{
            sort(v.rbegin(),v.rend());
            int max = v[0];
            for(int i=0;i<n;i++){
                te=i;
                if(v[i]<x){
                    ans++;
                }else{
                    ans +=ceil(float (v[i])/x);
                }
            }
          
            }
        cout << min(ans,maxx) << endl;
    }
    return 0;
    }