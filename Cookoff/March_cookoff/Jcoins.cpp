#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int x, y;
	    cin >> x >> y;
	    long long total = x*10 + y*5;
	    cout << total << endl;
	}
	return 0;
}
