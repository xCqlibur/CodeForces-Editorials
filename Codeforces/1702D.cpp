#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, p;
	cin >> t;
	while(t--) { //for every testcase
		string s;
		cin >> s >> p;
		int price=0;
		for(int i=0; i<s.size(); ++i)
			price+=(s[i]-'a')+1; //set the current price of the string
		char copy[s.size()]; //initialize a duplicate char array
		for(int i=0; i<s.size(); ++i)
			copy[i]=s[i];
		sort(copy, copy+(int)s.size()); //sort the char array
		map<char, int> m; //this map contains deleted characters
		for(int i=s.size()-1; i>=0; --i) { //for every char (from the priciest to the cheapest)
			if(price>p) { //if the current price is larger than the target price
				price-=((copy[i]-'a')+1); //subtract the current price by the most maximal character
				m[copy[i]]++; //store the element as a deleted element
				continue;
			}
			else
				break;
		}
		for(int i=0; i<s.size(); ++i) {
			if(m[s[i]]>=1) { //if a character in the string is deleted
				m[s[i]]--; //remove its deletion
				continue;
			}
			cout << s[i]; //otherwise output the character
		}
		cout << "\n";
	}
}
