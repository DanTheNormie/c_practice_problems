#include<bits/stdc++.h>

using namespace std;


void print_all_subarrays(int arr[],int len){

    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++ ){
            for(int k=i; k<j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

void


int main(){

    //{-9,8,-1,7,-6,-10}
    //{-1,-2,-3,-4,-5}
    //{2,-5,4,8,-9}
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_all_subarrays(arr,len);

    return 0;
}