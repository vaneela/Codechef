#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int z = 0, o = 0;
        for(auto c : str){
            if(c == '1'){
                o++;
            }
            else{
                z++;
            }
        }
        while(z--){
            cout << "0";
        }
        while (o--)
        {
            cout << "1";
        }
        

        cout << endl ;

    }
    
    return 0;
}