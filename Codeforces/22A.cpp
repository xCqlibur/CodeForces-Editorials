#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n, a[101];
	set<int> s;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		s.insert(a[i]); //keep elements of the array in a set to answer edge cases
	}
	sort(a, a+n); //sort array to look for second smallest non-repeating integer
	if(s.size()==2) { //if there are only two different elements, then print out the last one (the second distinct integer)
		cout << a[n-1];
		return 0;
	}
	if(s.size()==1) { //it is impossible for there to be a second distinct integer if there is only one distinct integer
	    cout << "NO";
	    return 0;
	}
	for(int i=1; i<n-1; ++i) { //for each element in this array, if the element a sub i does not equal a sub i-1, then it is the second distinct integer and we can return
		if(a[i]!=a[i-1]) {
			cout << a[i];
			return 0;
		}
	}
	cout << "NO";
}
