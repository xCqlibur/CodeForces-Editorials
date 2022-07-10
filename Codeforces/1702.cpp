#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n, k;
	cin >> t;
	while(t--) { //for every testcase
		cin >> n >> k;
		int u[n+1];
		map<int, pair<int, int>> m;
		map<int, bool> vis;
		for(int i=1; i<=n; ++i) {
			cin >> u[i];
			if(vis[u[i]]==0) { //if you haven't visited that element yet
				m[u[i]].first=i, m[u[i]].second=i; //both indices in the pair are set equal to i
				vis[u[i]]=1; //now we have visited that element
			}
			else
				m[u[i]].second=i; //otherwise, only add it to the second pair (because we want the second pair to be the maximum)
		}
		int a[k], b[k];
		for(int i=0; i<k; ++i) {
			cin >> a[i] >> b[i];
		}
		for(int i=0; i<k; ++i) {
			cout << (m[a[i]].first>=m[b[i]].second||(m[a[i]].first==0&&m[b[i]].second>=	1)?"NO\n":"YES\n"); //if the index of a is larger than or equal to the index of b or the index of b or the index of a is not given, ouput "NO", otherwise, output "YES"
		}
	}
}
