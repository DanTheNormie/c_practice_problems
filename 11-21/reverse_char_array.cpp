#include<bits/stdc++.h>
using namespace std;

void print_reverse(char arr[]){
    int len = strlen(arr)-1;
    for(int i=len; i > -1; i--){
        cout<<arr[i];
    }
}

void reverse_c_arr(char c[]){
    int i=0, j=strlen(c)-1;

    while (i<j){
        swap(c[i],c[j]);
        i++;
        j--;
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);

    reverse_c_arr(arr);
    cout<<arr;
}