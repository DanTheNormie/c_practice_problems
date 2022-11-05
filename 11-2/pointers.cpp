#include <bits/stdc++.h>
using namespace std;

void char_anomaly(){

    char c1 = 'a';
    char c2 = 'b';
    char c3 = 'c';



}


int main(){
    
    int integer = 0;
    float floating_point = 10.0;
    double double_float = 20.0;
    bool boolean = true;
    char character = 'c';

    /*
     
     '*' has 3 properties in c/c++
        1. Multiplication
        2. Pointer Declaration
        3. Dereference

    */

    //declaration and initialization

    int *pointer1,*pointer2,*pointer3,*pointer4,*pointer5,*pointer6; // every variable should have *(asterisk) while multiple declaration

    int* int_p = &integer;
    float* float_p = &floating_point;
    double* double_p = &double_float;
    bool* bool_p = &boolean;

    // char_pointer is special case, 
    // if we print &char or char_p it starts printing characters till \0 is found
    char *char_p = &character;

    cout<<int_p<<endl;// prints address
    cout<<float_p<<endl;// prints address
    cout<<double_p<<endl;// prints address
    cout<<bool_p<<endl;// prints address
    cout<<char_p<<endl;// prints values till \0 is found.


    char arr[5] = {'a','b','c','d','e'};

    cout<<arr<<endl; // print entire arr values till \0 is found.
    // always end char arr with \0

    cout<<arr[0]<<endl; // prints arr[0] element
    cout<<&arr[0]<<endl;// print entire arr values till \0 is found
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;


    /* Dereferencing */
    int i = 0;
    int* i_ptr = &i;

    cout<<i_ptr<<" == "<<&i<<endl; // both prints (address of i)

    cout<<*i_ptr<<" == "<<i<<" == "<<*&i<<endl; // all these will print (value of i)

    /* Address of Pointer
    
    
    To get the address of p do:

        int **pp = &p;
        and you can go on:

        int ***ppp = &pp;
        int ****pppp = &ppp;
        ...
        or, only in C++11, you can do:

        auto pp = std::addressof(p);
        To print the address in C, most compilers support %p, so you can simply do:

        printf("addr: %p", pp);
        otherwise you need to cast it (assuming a 32 bit platform)

        printf("addr: 0x%u", (unsigned)pp);
        In C++ you can do:

        cout << "addr: " << pp;
    
    */



   /* operations on pointers */
   int a = 1;
   int* a_ptr = &

   /* 
    *(arr+i) and arr[i] will print value at ith index in arr array

    (arr+i) == &arr[i] will print address of ith index in arr array
   
   */

    /* 
        1. Always initialize pointer to NULL
    
    */

}