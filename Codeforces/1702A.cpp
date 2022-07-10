#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, m;
	cin >> t;
	while(t--) { //go through test cases
		cin >> m;
		for(int i=1; i<10000000000; i*=10) { //check every "round number"
			if(i<=m&&i*10>m) { //if i is less than target value but i*10 is greater than target value, i is the largest round number that is less than 'm'
				cout << m-i << "\n"; //output m-i
				break;
			}
		}
	}
}
