#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        int y = 100 - x;
        cout << y << endl;
    }
    return 0;
}
