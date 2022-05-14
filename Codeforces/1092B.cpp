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
	for(int i=0; i<n-1; i+=2) { //because there are an even amount of players in the group, each member will get a partner so we iterate i through every other person
		ans+=abs(a[i]-a[i+1]); //find the distance between each player and their partner
	}
	cout << ans;
}
