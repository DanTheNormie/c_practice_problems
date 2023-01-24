#include <bits/stdc++.h>
using namespace std;

int row=3,col=3;
int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};    

void print_2d_array_diagonally(){

    for(int i = 0; i<col; i++){
        
        int r=0;
        int c=i; 
        while(c>=0){
            cout<<arr1[r][c]<<" ";
            r++;
            c--;
        }
        cout<<endl;
    }

    for(int i=1; i<row; i++){

        int r=i;
        int c=col-1; 
        while(r< row){
            cout<<arr1[r][c]<<" ";
            r++;
            c--;
        }
        cout<<endl;
    }

}


int main(){
    print_2d_array_diagonally();
}



int arr[4][4] ={{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};