#include <iostream>
using namespace std;

int main(){

	
	int n = 3;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<" ";
		}
		for(int j = 1; j<=i;j++){
			cout<<j;
		}
		for(int k = i-1; k>=1; k--){
			cout<<k;
		}
		cout<<endl;
	}

	return 0;
}