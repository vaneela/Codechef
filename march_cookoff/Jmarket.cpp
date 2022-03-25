#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i<t; i++){
	    int n;
	    vector<int> v;
	    cin >> n;
	    for(int j = 0; j<3; j++){
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    sort(v.begin(), v.end());
	    long long total = v[0]*(n-1);
	    total += v[1];
	    cout << total << endl;
	}
	return 0;
}
