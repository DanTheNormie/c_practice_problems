#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int length){

    for(int i=0; i<length ; i++){

        int min_value_index = i;

        
        for(int i = i+1; i < length; i++){
            if(arr[i] < arr[min_value_index]){
                min_value_index = i;
            }
        }
        swap(arr[i], arr[min_value_index]);
    }
}

void insertion_sort(int arr[], int length){

    for(int i=1; i<length; i++){
        for(int j=i-1; j > -1; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            else{
                break;
            }
        }
    }
}

void print_array(int arr[], int length){
    cout<<"--------- array start ----------"<<endl;
    for(int i = 0; i<length; i++){
        cout<<"["<<i<<"] "<<arr[i]<<endl;
    }
    cout<<"---------- array end -----------"<<endl<<endl;
}


int main(){

   
    int arr[] = {1,8,5,-31,42};
    int length = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,length);
    print_array(arr,length);


    /*
    int a = 5, b = 10;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<((a&&b))<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    */
    return 0;

}