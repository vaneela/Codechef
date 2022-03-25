#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> str;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            str.push_back(c);
        }
        bool flag = false;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 2)
            {
                if (str[i] == str[i + 1])
                {
                    sum++;
                    i++;
                    flag = false;
                }
                else
                {
                    sum++;
                    flag = true;
                }
            }
            else if(i == n-2){
                if(str[i]==str[i+1]){
                    sum++;
                }
                else{
                    sum += 2;
                }
                i++;
            }
            else if(i == n -1){
                sum++;
            }
        }
        // sum++;

        cout << sum << endl;
    }
    return 0;
}