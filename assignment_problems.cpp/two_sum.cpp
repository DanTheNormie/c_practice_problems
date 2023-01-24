#include<bits/stdc++.h>

using namespace std;

void pair_of_roses(vector<int> v,int k){

	long long x=1,y=INT_MAX;

	for(int i=0; i<v.size(); i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[i]+v[j] == k){
				if(max(v[i],v[j])-min(v[i],v[j]) <= (y-x)){
					x=min(v[i],v[j]);
					y=max(v[i],v[j]);
				}
			}
		}
	}

	if(x==-1 || y== -1){
		cout<<"Deepak is broke. :)"<<endl;
	}else{
		cout<<"Deepak should buy roses whose prices are "<<x<<" and "<<y<<"."<<endl;
	}
}

vector<vector<int>> targetSum(vector<int> v, int k)
{
    vector<vector<int>> res;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size();j++){
            if(v[i]+v[j] == k){
                vector<int> temp{v[i],v[j]};
                res.push_back(temp);
            }
        }
    }

    return res;
}

int main(){

    vector<int> v{1,2,3,4,5};

    vector<vector<int>> res = targetSum(v,5);

	for(int i=0; i<res.size(); i++){
		cout<<"["<<i<<"] : ";
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }
		cout<<endl;
    }

    return 0;
}