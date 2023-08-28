#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=//;

bool prime[mxN];

void sieveOfEratosthenes() {
	memset(prime, 1, sizeof(prime));
	prime[0]=0, prime[1]=0;
	for(int i=2; i*i<=mxN; ++i) {
		if(prime[i]) {
			for(int j=i*i; j<=mxN; j+=i) {
				prime[j]=0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	sieveOfEratosthenes();
}
