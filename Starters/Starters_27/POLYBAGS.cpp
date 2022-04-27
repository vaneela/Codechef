#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, pb;
        cin >> n;
        if (n % 10 == 0)
        {
            pb = n / 10;
        }
        else
        {
            pb = (n / 10) + 1;
        }
        cout << pb << endl;
    }
    return 0;
}
