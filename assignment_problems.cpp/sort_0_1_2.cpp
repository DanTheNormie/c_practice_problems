#include<bits/stdc++.h>
using namespace std;

void sort_0_1_2(vector<int> &v){

	int i=0, j=v.size()-1, x=0;

	while(x<=j){
		if(v[x]==2){
			swap(v[x],v[j]);
			j--;
		}
		else if(v[x] == 0){
			swap(v[x],v[i]);
			i++;
			x++;
		}
		else{
			x++;
		}
		
	}
}

int main() {
	int n,input;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>input;
		v.push_back(input);
	}
	
	sort_0_1_2(v);
	for(auto item: v){
        cout << item <<" ";
    }

	return 0;
}