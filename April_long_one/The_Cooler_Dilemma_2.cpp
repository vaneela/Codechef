#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll m = 0;
        // if(x>y){
        //     cout << 0 << endl;
        // }else{
        // while(x < y){
        //     x += temp;
        //     // i++;
        //     m++;
        // }
        if (y % x == 0)
        {
            m += y / x - 1;
        }
        else
        {
            if (y <= x)
            {
                m = 0;
            }
            else
            {
                m = y / x;
            }
        }
        cout << m << endl;
    }

    return 0;
}