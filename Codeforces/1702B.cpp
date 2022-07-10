#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	string s;
	cin >> t;
	while(t--) { //for every testcase
		cin >> s;
		set<char> x;
		int ans=0;
		for(int i=0; i<s.size(); ++i) { 
			x.insert(s[i]);
			if(x.size()==4) { //if there are four distinct elements
				x.clear(); //clear the set so we can have a fresh template
				++ans; //one more day has been added
				x.insert(s[i]); //re-enter the 4th element into the set
				continue;
			}
			if(i==s.size()-1) {
				++ans; //if this is the last iteration but the the set size is not 4, add an extra day
				x.clear();
			}
		}
		if(x.size()>=1) //if by the last iteration, neither of the if-conditions stated above are true, add one more day
			++ans;
		x.clear();
		cout << ans << "\n";
	}
}
