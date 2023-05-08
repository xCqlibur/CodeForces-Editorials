#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	ll R[2100]={0}, psum[2100][2100]={0};
	R[0]=0, R[1]=1;
	for(int i=2; i<=2023; ++i) {
		R[i]=R[i-1]+i;
	}
	for(ll i=1; i<=2023; ++i) {
		for(ll j=R[i]-i+1; j<=R[i]; ++j) {
			psum[i][j-R[i-1]]=psum[i][j-R[i-1]-1]+(j*j);
		}
	}
	while(t--) {
		int n;
		cin >> n;
		ll l=0, r=0, indx=-1;
		for(int i=1; i<=2023; ++i) {
			if(n<=R[i]) {
				l=n-R[i-1]-1, r=n-R[i-1], indx=i;
				break;
			}
		}
		ll ans=0;
		for(int i=indx; i>=1; --i) {
			ans+=psum[i][min(R[i]-R[i-1], r)]-psum[i][max(1LL*0, l)];
			--l;
		}
		cout << ans << "\n";
	}
}
