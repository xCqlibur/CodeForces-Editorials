#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=//;

bool isPrime[mxN];

void sieveOfEratosthenes() {
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0]=0, isPrime[1]=0;
	for(int i=2; i*i<=mxN; ++i) {
		if(isPrime[i]) {
			for(int j=i*i; j<=mxN; j+=i) {
				isPrime[j]=0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	sieveOfEratosthenes();
}
