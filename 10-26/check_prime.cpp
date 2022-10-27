#include <bits/stdc++.h>

using namespace std;

int check_prime(int num){

	
	if(num < 1){
		cout<<"Please enter a digit above 0"<<endl;
		return false;
	}

	if(num == 1 || num == 2){
		return true;
	}

	for(int i=2;i*i<num;i++){
		if(num%i == 0){
			return false;
		}
	}

	return true;
}


void print_N_prime_numbers(int n){
	int ans_count = 0;
	int i = 1;
	while(ans_count < n){
		if(check_prime(i)){
			cout<<i<<endl;
			ans_count++;
		}
		i++;
	}
}



int main(){

	print_N_prime_numbers(50);

	return 0;
}