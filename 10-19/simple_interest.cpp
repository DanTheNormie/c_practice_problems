#include <iostream>
using namespace std;

int main(){

	float principal,roi,time;
	cin>>principal>>roi>>time;
	float result = (principal*roi*time)/100;
	cout<<"The simple interest is : "<<result;

	return 0;
}