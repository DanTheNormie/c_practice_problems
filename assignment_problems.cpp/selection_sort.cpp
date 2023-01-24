#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &v){
	
	int i=0,j,min,x;
	while(i<v.size()-1){

		j=i+1,min = v[i],x=i;
		while(j<v.size()){

			if(v[j] < min){
                x = j; 
                min = v[j];
            }
			j++;
		}

		swap(v[i],v[x]);
		i++;
	}

}
int main() {
	/* int n,input;
	cin>>n;
 */
	vector<int> v{2,-18,45,30};
	/* for(int i=0; i<n; i++){
		cin>>input;
		v.push_back(input);
	} */
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	selection_sort(v);

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}

	return 0;
}