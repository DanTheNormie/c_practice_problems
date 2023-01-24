#include<bits/stdc++.h>
using namespace std;

#define ll long long

//x^k<=n

int kth_root(ll n, int k){
	ll s = 0;
	ll e = n;

	while(s <= e){
		ll m = (s+e)/2;
		ll m_to_k = static_cast<long long int>(pow(m,k));
		if(m_to_k <= n) s = m+1;
		else e = m-1;
	}
	return s;
}

int main() {

	cout<<kth_root(1000000000000000,10);

	return 0;
}