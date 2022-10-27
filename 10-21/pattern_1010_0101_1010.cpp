#include <bits/stdc++.h>

using namespace std;

void printline(int side_length,int digit){
		
	for(int i = 1; i<=side_length; i++){
		cout<<digit%2;
		digit++;
	}
	cout<<endl;
}

int main(){

	int user_input;
	cin>>user_input;
	
	for(int i = 1;i<=user_input;i++){
		printline(user_input,i);
	}
}