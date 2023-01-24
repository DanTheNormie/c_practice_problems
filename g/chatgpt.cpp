#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ncr(ll n){
	if(n<2) return 0;
	if(n==2) return 1;

	ll n_fact=1;
	for(int i=n;i>(n-2);i--){
		n_fact*=i;
	}
	
	ll ans = n_fact/2;
	return ans;

}

void divisible_subarrays(vector<ll> v){
	vector<ll> temp(v.size(),0);
	temp[0]=1;
	ll sum = 0;
	for(int i=0; i<v.size(); i++){
		sum += v[i];
		v[i]=(sum+v.size())%v.size();
		temp[v[i]]++;
	}
	
	// for(int i=0; i<v.size(); i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0; i<temp.size(); i++){
	// 	cout<<temp[i]<<" ";
	// }
	// cout<<endl;

	ll ans = 0;
	for(int i=0; i<temp.size(); i++){
		ans+=ncr(temp[i]);
	}

	cout<<ans<<endl;

}



int main() {

	long long t,input;
	cin>>t;

	while(t--){
		long long n;
		cin>>n;
		
		vector<long long> v;
		while(n--){
			cin>>input;
			v.push_back(input);
		}
		divisible_subarrays(v);
	}


	return 0;
}