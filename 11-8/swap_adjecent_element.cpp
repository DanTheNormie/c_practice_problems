#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
using namespace std;


/* void swap_adjacent_elements(int* arr, int len){

    for(int i=1;i<len;i+=2){
        swap(*(arr+i), *(arr+i-1));
    }

} */

/* void swap_adjacent_elements(int* arr, int len){

    for(int i=0;i<len-1;i+=2){
        swap(*(arr+i), *(arr+i+1));
    }

} */

void swap_adjacent_elements(int* arr, int len){

    for(int i=0;i<len;i+=2){
        if(i+1 < len)
            swap(*(arr+i), *(arr+i+1));
    }

}