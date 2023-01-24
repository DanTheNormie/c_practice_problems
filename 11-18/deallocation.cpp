#include<bits/stdc++.h>

using namespace std;


void somefunc(int * arr){

    //some code manipulation
    delete[] arr;
}

int main(){

    int* arr = new int[5];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    somefunc(arr);


    return 0;
}