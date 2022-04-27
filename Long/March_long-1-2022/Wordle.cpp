#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        char ans[5];
        cin >> s >> t;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == t[i])
            {
                ans[i] = 'G';
            }
            else
            {
                ans[i] = 'B';
            }
        }
        for (auto ch : ans)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}