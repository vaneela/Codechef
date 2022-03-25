#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, w, sum = 0;
        cin >> n >> w;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
        int j;
        for (j = 0; j < n; j++)
        {
            sum += v[j];
            if (sum >= w)
            {
                break;
            }
        }
        cout << (n - j - 1) << endl;
    }
    return 0;
}
