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
	int n=t.size(), a=0, qc=0; //a counts the amount of the letter 'a' within the input while qc counts the amount of characters since the last 'a'
	for(int i=0; i<n; ++i) { //gather the variables
		if(t[i]!='a') {
			v.push_back(t[i]);
			qc++;
		}
		else {
			++a;
			qc=0;
		}
	}
	if(qc<v.size()/2||v.size()%2!=0) { //check edge cases where the goal is impossible
		cout << ":(";
		return 0;
	}
	int count=0;
	for(int i=0; i<v.size()/2; ++i) { //check if each character on the lower half has a counterpart on the upper half
		if(v[i]==v[i+v.size()/2]) {
			++count;
		}
	}
	if(v.size()/2!=count) //if the amount of pairs found doesn't match the total amount of pairs, then the answer can't be reached
		cout << ":(";
	else { //after all edge cases have been covered, we can successfully uncover an answer
		for(int i=0; i<v.size()/2+a; ++i) {
			cout << t[i];
		}
	}
}
