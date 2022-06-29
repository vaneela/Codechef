#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int s,x,y,z;
	    cin >> s >> x >> y >> z;
	    if(s==y || x==z)
	    cout << 2 << endl;
	    else
	    cout << 1 << endl;
	}
	return 0;
}
