#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a[101];
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	int mx=a[n-1]; //since the king can only give burles, the maximum must be the current maximum
	int ans=0;
	for(int i=0; i<n-1; ++i) {
		ans+=(mx-a[i]); //from here, just add all of the elments subtrated from the maximum
	}
	cout << ans;
}
