#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int credit;
        cin >> credit;
        if (credit > 65)
        {
            cout << "Overload" << endl;
        }
        else if (credit < 35)
        {
            cout << "Underload" << endl;
        }
        else
        {
            cout << "Normal" << endl;
        }
    }
    return 0;
}
