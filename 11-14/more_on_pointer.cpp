#include <bits/stdc++.h>

using namespace std;





void call_by_reference(int &a){
    //<datatype> &<variable_name> means reference variable of actual parameter.
    a++; // actual parameter's value is changed.
}

void call_by_value(int a){
    //formal parameter is when new variable is created and actual parameter's value is copied.
    a++; // a is 
}

void passing_pointers(int* ptr){
    //new pointer variable is created and actual parameter's value is passed.
    //actual parameter must either be (int*) or (&<int_variable>). 
    *ptr++; // obviously actual parameters value is changed cause we are incrementing value at acutal parameter's address
}

int main(){

    int b = 10;
    int* p = &b;
    int num[5];
    int* ptr = num;
    *ptr = 10;
    ptr++;

    *ptr=*ptr++;

    ptr++;

    *ptr=*ptr++;

    for(int i=0; i<5; i++){
        cout<<num[i]<<endl;
    }
    return 0;
}