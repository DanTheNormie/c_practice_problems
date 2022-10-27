#include <iostream>
using namespace std;

int main(){

	int n = 5;
	int p = 1;
	for(int i=1;i<n;i++){
		if(i%2==0){
			p=0;
		}else{
			p=1;
		}
		for(int k=1;k<=i;k++){
			cout<<p%2;
			p++;
			
		}
		cout<<endl;
	}
	return 0;
}
