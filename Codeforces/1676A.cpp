#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
//define global variables here
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		int b0=0, b1=0;
		for(int i=0; i<3; ++i) { //add all the elements in the first half of the string together
			b0+=s[i]-'0';
		}
		for(int i=3; i<6; ++i) { //add all the elements in the second half of the string together
			b1+=s[i]-'0';
		}
		cout << (b0==b1?"YES\n":"NO\n"); //if they're equal, print "YES," otherwise, print "NO"
	}
}
