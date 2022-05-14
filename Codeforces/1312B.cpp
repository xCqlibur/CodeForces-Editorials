#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n, a[101];
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n); //sort it in non-decreasing order
		for(int i=n-1; i>=0; --i) { //iterate through in non-increasing order and print out the element at each index i
			cout << a[i] << ' ';
		}
		cout << "\n";
	}
}
