#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int x;
     void greet(){
        cout<<"from A"<<endl;
    }
};

class B : public A{
    public:
    int y;
    void greet(){
        cout<<"from b"<<endl;
    }
};

class X{

    virtual void fun() = 0;
};


int main(void){
    A *ptrA;
    A a;
    B b;

    //ptrA = &a;

    ptrA->greet();

    ptrA = &b; // this is allowed

    ptrA->greet();
    
}