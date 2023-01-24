#include<bits/stdc++.h>
using namespace std;


int main() {
	int n = 4;
	cin>>n;

	for(int i=1; i<=n/2+1; i++){
		for(int j=(n/2)-i; j>=0; j--){
			cout<<"    ";
		}
		int j;
		for(j=i; j>=1; j--){
			cout<<j<<" ";
		}

		for(int j=i; j<=3*i-4; j++){
			cout<<"  ";
		}

        if(i!= 1){
            for(j++; j<=i; j++){
                cout<<j<<" ";
            }
        }
		cout<<endl;
	}

    for(int i=1; i<=n/2; i++){

        for(int j=1; j<=i; j++){
            cout<<"    ";
        }

        for(int j=(n/2)-(i-1); j>0; j--){
            cout<<j<<" ";
        }

        for(int j=(n/2)-(i-1); j<=3*((n/2)-(i-1))-4; j++){
            cout<<"  ";
        }
        
        if(i != n/2){
            for(int j=1; j<=(n/2)-(i-1); j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

	return 0;
}