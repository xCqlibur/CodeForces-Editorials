#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int a=k*l/nl, b=c*d, h=p/np; //initialize variables needed for calculation
	int mn=min({a, b, h}); //the requirement for a toast must always be the minimum amount of ingredients to create a soft-drink
	cout << mn/n; //divide it over by the amount of people making the toast
}
