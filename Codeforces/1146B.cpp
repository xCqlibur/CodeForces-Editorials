#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string t;
	cin >> t;
	vector<char> v;
	int n=t.size(), a=0, qc=0;
	for(int i=0; i<n; ++i) {
		if(t[i]!='a') {
			v.push_back(t[i]);
			qc++;
		}
		else {
			++a;
			qc=0;
		}
	}
	if(qc<v.size()/2||v.size()%2!=0) {
		cout << ":(";
		return 0;
	}
	int count=0;
	for(int i=0; i<v.size()/2; ++i) {
		if(v[i]==v[i+v.size()/2]) {
			++count;
		}
	}
	if(v.size()/2!=count)
		cout << ":(";
	else {
		for(int i=0; i<v.size()/2+a; ++i) {
			cout << t[i];
		}
	}
}
