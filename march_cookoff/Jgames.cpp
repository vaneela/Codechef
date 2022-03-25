#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x,y;
        cin >> x >> y;
        if((x+y) % 2 == 0){
            cout << "Janmansh" << endl;
        }
        else{
            cout << "Jay" << endl;
        }
    }
	// your code goes here
	return 0;
}
