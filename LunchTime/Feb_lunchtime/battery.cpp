#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	for(int i=0;i<t;i++){
	    int x;
	    cin >> x;
	    if(x<=15){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
