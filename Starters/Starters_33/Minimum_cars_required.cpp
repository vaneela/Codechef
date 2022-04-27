#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, ans = 0;
        cin >> x;
        if (x % 4 == 0)
        {
            ans += x / 4;
        }
        else
        {
            if (x < 4)
            {
                ans++;
            }
            else
            {
                ans += x / 4 + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
