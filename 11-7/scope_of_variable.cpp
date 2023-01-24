#include <bits/stdc++.h>

using namespace std;

int var=5;
int var2 = 25;


void scope_test(int b){
    cout<<"parameter : "<<b<<endl;
    cout<<"global var : "<<var<<endl;
}

int main(){
    
    int a=5;
    cout<<a<<endl;
    scope_test(a);

    int var = 10;
    cout<<"Local variable : "<<var<<endl;

    cout<<"Global variable : "<<::var<<endl;

    ::var = 12;

    cout<<"Global variable : "<<::var<<endl;

}