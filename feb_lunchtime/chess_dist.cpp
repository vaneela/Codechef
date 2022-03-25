#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	for(int i=0;i<t;i++){
	    int x1, x2, y1, y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    int p1=abs(x1-x2), p2=abs(y1-y2), p = max(p1,p2);
	    cout << p << endl;
	    
	}
	return 0;
}
