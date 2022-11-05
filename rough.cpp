#include <bits/stdc++.h>
using namespace std;

/*
int* product_except_self(int arr[],int len){

    int res[10] = {0};
    int left[10] = {0};
    int right[10] = {0};

    int zero_counter = 0;

    int left_mult = 1;
    int right_mult = 1;

    for (int i = 0; i < len; i++)
    {
        if(arr[i]==0){
            zero_counter += 1;
        }
        left_mult *= arr[i];
        left[i] = left_mult;
    }

    if(zero_counter > 1){
        return res;
    }

    for(int i=0; i<len;i++){
        
        right_mult *= arr[i];
        right[i] = 
    }
    


    for(int i = 0; i<len; i++){
        
        if (zero_counter > 0){
            if(zero_counter > 1){
                return res;
            }
            else{

            }
        }

        
        
    }

    return res;
}
*/
int* sum_of_row(int arr[], int rows, int columns){
    int res[3] = {0};

    int sum = 0;
    for(int i =0; i < rows; i++ ){
        sum = 0;
        for(int j=0; j<columns; j++){
            sum += arr[i][j];
        }
        res[i] = sum;
    }

}


int main(){
    
    int rows,columns;

    cin >> rows >> columns;


    int arr[rows][columns] = {0};

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];4
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     int arr[3] = sum_of_row(arr,3,3);

    
        
}