#include <bits/stdc++.h>

using namespace std;

int printline(int num_of_char_to_print, int starting_num){
	int i;
	for (i = starting_num;i<starting_num+num_of_char_to_print;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	return i;
}


int main(){

	int num = 1;
	int user_input;
	cin>>user_input;

	for(int i = 1;i<=user_input;i++){
		num = printline(i,num);
	}

	return 0;
}

