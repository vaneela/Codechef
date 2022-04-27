#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
       int N, K, V, sum = 0;
        cin >> N >> K >> V;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int positive = ((V * (N + K) )- sum);
        int value = ((V * (N + K) )- sum) % K;
        int ans = (V * (N + K) - sum) / K;
        
        if (value != 0 || positive < 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}