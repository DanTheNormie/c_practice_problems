#include<bits/stdc++.h>
using namespace std;

int convert_number_base(int sb, int db, int n){
	int base_10 = 0;
	int c = 0;
	while(n){
		base_10 += (n%10)*pow(sb,c);
		n/=10;
		c++;
	}
	cout<<base_10<<endl;

	int base_d = 0;
	c=1;
	while(base_10){
		base_d += (base_10%db)*c;
		base_10/=db;
		c*=10;
	}

	cout<<base_d<<endl;
	return base_d;
}

int main() {
    INT_FAST
	convert_number_base(8,2,33);
	return 0;
}
