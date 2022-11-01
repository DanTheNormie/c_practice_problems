#include <bits/stdc++.h>

using namespace std;

int linear_search(int arr[] ,int length, int key){

    for(int i=0; i<length; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}



int main(){

    int arr[] = {1,8,5,-31,42};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<linear_search(arr,length,5);

    return 0;

}