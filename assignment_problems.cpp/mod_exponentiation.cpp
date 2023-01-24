#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll mod_exp(int a, int x, int m){
	ll ans = 1;

	ll mul = a%m;
	while(x){
		if(x&1) {
            ans*=(mul%m);
        }

		mul*=(mul%m);
		x>>=1;
	}

	return ans%m;
}

int main() {

	cout<<mod_exp(100000,100000,M);
	return 0;
}