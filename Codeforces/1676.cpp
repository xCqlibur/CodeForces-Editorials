#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[51];
		for(int i=0; i<n; ++i) {
			cin >> a[i];
		}
		int ans=0;
		sort(a, a+n); //since you can't add any additional candies to anyone's pile, the lower number in that array will be the lowest cmount of candies possible
		for(int i=1; i<n; ++i) { //add the difference between each element by the first element
			ans+=a[i]-a[0];
		}
		cout << ans << "\n";
	}
}
