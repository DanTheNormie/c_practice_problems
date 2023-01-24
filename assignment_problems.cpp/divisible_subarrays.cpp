#include<bits/stdc++.h>

using namespace std;

void print_vec(vector<long long> &arr, string array_name = ""){
    long long len = arr.size();
    if(array_name != ""){
        cout<<array_name<<" : ";
    }
    
    cout<<"[ ";
    for(int i=0; i<len; i++){
        cout<<arr[i];
        if(i != len-1) cout<<", ";
    }
    cout<<" ]"<<endl;
}

void divisible_subarrays(vector<long long> v){

	vector<long long> cum_sum;
	long long total_sum=0;
	for(int i=0; i<v.size(); i++){
		total_sum+= v[i];
		cum_sum.push_back(total_sum);
	}
    print_vec(cum_sum,"cum_sum ");
	long long divisible_subarrays = 0;

	long long ans = 0;
	
	for(int i=v.size()-1; i> -1; i--){
		if(cum_sum[i]%v.size()==0){
			ans++;
		}
		for(int j=i-1; j>-1;j--){
			if((cum_sum[i]-cum_sum[j])%v.size()==0){
				ans++;
			}
		}
		
	}
	cout<<"ans == "<<ans<<endl;;

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
        print_vec(v,"Input "+t);

		divisible_subarrays(v);
	}


	return 0;
}