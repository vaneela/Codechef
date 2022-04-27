#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
	double x,xx,y,yy;
	for(int i=0;i<t;i++){
	    cin >> x >> xx >> y >> yy;
	    double c1 = (y)/x, c2 = (yy)/xx;
        cout << c1 << "  " << c2 << endl;
	    if(c1<c2){
	        cout << "-1" << endl;
	    }
	    else if(c2<c1){
	        cout << "1" << endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	}
	return 0;
}
