#include<bits/stdc++.h>
using namespace std;

bool is_toeplitz(vector<vector<int>> v){
    int rows = v.size();
    int cols = v[0].size();
    int i,j,x = 0;
    
    while(x < rows+cols-1){
        
        if(x<rows){
            i = v.size()-1-x;
            j=0;
        }else{
            j = x - v.size()+1;
            i=0;
        }

        int num = v[i][j];
        
        while(i<v.size() && i> -1 && j<v[i].size() && j>-1){
            if(v[i][j] != num){
                return false;
            }
            i++;
            j++;
        }
        x++;
    }

    return true;
}
int main() {
    int row=4,col=5;
	//cin>>row>>col;

	vector<vector<int>> v{
        {4,5,6,7,8},
        {3,4,5,6,7},
        {2,3,4,5,6},
        {1,2,3,4,5}};

	/* for(int i=0; i<row; i++){
		vector<int> temp;
		int input;
		for(int j=0; j<col; j++){
			cin>>input;
			temp.push_back(input);
		}
		v.push_back(temp);
	} */

    if(is_toeplitz(v))
        cout<<"true";
    else
        cout<<"false";
}
