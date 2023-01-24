#include<bits/stdc++.h>
using namespace std;

bool is_armstrong(long long n){
	long long sum = 0;
	long long num = n;
	int order=0;

	while(num){
		num/=10;
		order++;
	}
    num = n;

	while(n){
		sum += pow(n%10,order);
		n /= 10;
	}

	return sum==num;

}

int main() {
	long long n = 3711;
	//cin>>n;

	if(is_armstrong(n))
		cout<<"true";
	else
		cout<<"false";

	return 0;
}