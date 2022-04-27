#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, min;
        cin >> a >> b >> c;
        min = a;
        if (min > b)
        {
            min = b;
        }
        if (min > c)
        {
            min = c;
        }
        int total = a + b + c - min;
        cout << total << endl;
    }
    return 0;
}
