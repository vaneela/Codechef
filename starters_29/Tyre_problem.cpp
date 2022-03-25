#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >> t;
while (t--)
{
    int n, m;
    ll sum = 0;
    cin >> n >> m;
    sum += n*2 + m*4;
    cout << sum << endl;

}

return 0;
}