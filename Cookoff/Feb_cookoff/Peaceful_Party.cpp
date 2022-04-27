#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        if (p1 + p3 > p2)
        {
            cout << (p1 + p3) << endl;
        }
        else
        {
            cout << p2 << endl;
        }
    }
    return 0;
}
