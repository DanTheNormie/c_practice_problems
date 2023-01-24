#include<bits/stdc++.h>
using namespace std;


void print_spiral_anitclockwise(vector<vector<int>> v){

	int i=0,j=0;
    int rows = v.size();
    int cols = v[0].size();
	int i_limit = rows;
	int j_limit = cols;
    int sum = 1;
	while(sum <= rows*cols){
        
        while(i<i_limit && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(i==i_limit-1)break;
            i++;
        }
        
        j++;
        while(j<j_limit && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(j==j_limit-1) break;
            j++;
        }
        
        i--;

        j_limit--;

        while(i > ((rows-i_limit)-1) && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(i==rows-i_limit)break;
            i--;
        }
        j--;
        
        while(j > ((cols-j_limit)-1)&& sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(j==cols-j_limit)break;
            j--;
        }
        i++;
        
        i_limit--;
    }

    cout<<"END";
}


void print_spiral_clockwise(vector<vector<int>> v){

	int i=0,j=0;
    int rows = v.size();
    int cols = v[0].size();
	int i_limit = rows;
	int j_limit = cols;
    int sum = 1;
	while(sum <= rows*cols){
        
        while(j<j_limit && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(j==j_limit-1) break;
            j++;
        }
        i++;

        while(i<i_limit && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(i==i_limit-1)break;
            i++;
        }
        j--;

        i_limit--;
        while(j > ((cols-j_limit)-1) && sum <= rows*cols){
            sum++;
            cout<<v[i][j]<<", ";
            if(j==cols-j_limit)break;
            j--;
        }
        i--;

        while(i > ((rows-i_limit)-1) && sum <= rows*cols ){
            sum++;
            cout<<v[i][j]<<", ";
            if(i==rows-i_limit)break;
            i--;
        }
        j++;


        j_limit--;
        
    }

    cout<<"END";
}


int main() {

	vector<vector<int>> v{
		{1,2,3},
        {4,5,6},
        {7,8,9},
        {1,2,3},
        {4,5,6}
	};

	print_spiral_clockwise(v);
	
}