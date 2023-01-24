#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x;
        void greet(){
            cout<<"greetings from A"<<endl;
        }
        void greet(int x){
            cout<<"greetings from A and x is "<<x<<endl;
            
        }
};
class B{
    public:
        int x,y;
        void greet(){
            cout<<"greetings from B"<<endl;
        }
};

class C : public A, public B{

    public:
    void greet(){
        cout<<"greetings from C"<<endl;
    }
};

class D: public C{

};


int main(void){

    C c;
    cout<<(c.A::greet(5))<<endl;
}