#include <bits/stdc++.h>

using namespace std;

int main(){

	char arr[3] = {'a','b'};

	cout<<"arr[0] = "<<1<<endl;
	cout<<"arr[1] = "<<2<<endl;
	cout<<"arr[2] = "<<3<<endl;

	for(int i=0;i<sizeof(arr)/sizeof(char);i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}