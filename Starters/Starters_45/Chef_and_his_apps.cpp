#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int s,x,y,z;
	    cin >> s >> x >> y >> z;
	    int temp = x+y;
	    if(temp +z <=s){
	        cout << 0 << endl;
	    }else 
	    if(temp - max(x,y)+z <=s){
	        cout << 1 << endl;
	    }else{
	        cout << 2 << endl;
	    }
	}
	return 0;
}
