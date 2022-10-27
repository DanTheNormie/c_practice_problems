#include <iostream>
#include <climits>
using namespace std;

int main(){

	int no_of_num,num,largest_num=INT_MIN;
	cin>>no_of_num;

	for(int i=1;i<=no_of_num;i++){
		cin>>num;
		if(largest_num<num){
			largest_num = num;
		}
	}

	cout<<"Largest number is : "<<largest_num;
	return 0;
}