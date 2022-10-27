#include <bits/stdc++.h>

using namespace std;

void func(int &par){

	par += 2;
}


int main(){

	int a = 10;
	int &b = a;
	cout<<a<<endl;
	cout<<b<<endl;
	func(b);
	cout<<a<<endl;
	cout<<b<<endl;

	return 0;
}