#include <iostream>
using namespace std;

int main() {
	// your code goes here
    // maximize one team's score then equaly distribute rest scores to minimize 2nd /////team's score
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	   int fst = (n-1)*3, scnd = (n-1)/2*3;
	    cout << fst - scnd << endl;
	}
	return 0;
}
