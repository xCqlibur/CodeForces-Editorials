/* USACO 2015 December Contest, Gold
 * Problem 1. High Card Low Card (Gold)
 *
 *Bessie the cow is a huge fan of card games, which is quite surprising, given her lack of opposable thumbs. Unfortunately, none of the other cows in the herd are good opponents. They are so bad, in fact, that they always play in a completely predictable fashion! Nonetheless, it can still be a challenge for Bessie to figure out how to win.
Bessie and her friend Elsie are currently playing a simple card game where they take a deck of 2N cards, conveniently numbered 1…2N, and divide them into N cards for Bessie and N cards for Elsie. The two then play N rounds, where in each round Bessie and Elsie both play a single card. In the first N/2 rounds, the player with the highest card earns a point, and in the last N/2 rounds, the rules switch and the player who plays the lowest card wins a point.

Given that Bessie can predict the order in which Elsie will play her cards, please determine the maximum number of points Bessie can win.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("cardgame.in", "r", stdin);
	freopen("cardgame.out", "w", stdout);

	//initialize and input data
	int n;
	cin >> n;
	int ans=0, elsie[n];
	//create a reverse set 
	set<int, greater<int>> elsieMoves, st;
	for(int i=0; i<n; ++i) {
		cin >> elsie[i];
		st.insert(elsie[i]);
	}
	//sort half the array in non-increasing order
	sort(elsie, elsie+n/2, greater<int>());
	//sort the other half of the array in non-decreasing order
	sort(elsie+n/2, elsie+n);
	//insert Bessie's cards into the set
	for(int i=0; i<n*2; ++i) {
		if(!st.count(i+1)) {
			elsieMoves.insert(i+1);
		}
	}
	//for the first half of Elsie's cards
	for(int i=0; i<n/2; ++i) {
		//get the highest possible card you can play
		auto it=elsieMoves.upper_bound(INT_MAX);
		//check if it's within the constraints
		if(*it>elsie[i]) {
			elsieMoves.erase(it);
			++ans;
		}
	}
	//create a normally sorted set and add essentially duplicate Bessie's current cards into the new set
	set<int> reverseElsieMoves;
	for(int i=0; i<n*2; ++i) {
		if(elsieMoves.count(i+1))
			reverseElsieMoves.insert(i+1);
	}
	//for the second half of Elsie's cards
	for(int i=n/2; i<n; ++i) {
		//get the lowest possible card you can play
		auto it=reverseElsieMoves.upper_bound(-1);
		//check if it's within the constraints
		if(*it<elsie[i]) {
			reverseElsieMoves.erase(it);
			++ans;
		}
	}
	cout << ans;
}
