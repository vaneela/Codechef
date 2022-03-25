#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> z;
        y = 21 - (x + z);
        if (y > 10)
        {
            y = -1;
        }
        cout << y << endl;
    }
    return 0;
}
