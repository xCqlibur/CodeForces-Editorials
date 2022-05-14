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
	int ans=0;
	sort(a, a+n);
	for(int i=0; i<n-1; i+=2) {
		ans+=abs(a[i]-a[i+1]);
	}
	cout << ans;
}
