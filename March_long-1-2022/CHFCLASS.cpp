#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        if (n == 6)
        {
            count = 1;
        }
        else if (n >= 7)
        {
            count++;
            n -= 6;
            count += n / 7;
        }
        // ll s=6;
        // while(n>=6){
        //     count ++;
        //     s+=7;
        //     n -= 7;
        // }
        cout << count << endl;
    }
    return 0;
}