#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--)
    {
        int c,x,y;
        cin >> c >> x >> y;
        int cost = (c-x)*y;
        cout << cost << endl;
    }
    
    return 0;
}