#include <bits/stdc++.h>

using namespace std;


void bubble_sort(int arr[] ,int length){

    for (int j = length - 1; j > 0; j--)
    {
        for(int i = 0; i < j; i++){
            if(arr[i] > arr[i+1]){

                //a = a + b - (b = a)

                arr[i] = arr[i] + arr[i+1] - (arr[i+1] = arr[i]);

                /*
                arr[i] += arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] = arr[i] - arr[i+1];
                */
            }
        }
    }
}

int main(){

   
    int arr[] = {1,8,5,-31,42};
    int length = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,length);
    for(int i = 0; i < length; i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}