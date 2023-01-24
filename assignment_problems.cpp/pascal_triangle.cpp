#include<bits/stdc++.h>
using namespace std;


void print_pascal_triangle(int n){
	int spacing = ((n-1)*2)+1;
	vector<int> r{1};
	vector<int> p{1};
	
	for(int i=0; i<n; i++){
		printf("%*c",spacing,' ');

		if(r.size()>1){
			for(int i=1;i<r.size();i++){
				p[i]=r[i]+r[i-1];
			}
		}

		for(int j=0; j<p.size(); j++){
			cout<<p[j]<<"   ";
		}
		cout<<endl;

		r = p; 
		p.push_back(1);
		
		spacing-=2;
	}
}

int main() {
	print_pascal_triangle(5);
	return 0;
}