#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
    public:
    A(){

        new (this) A(0);

    }
    A(int x){
        this->x = 5;
        cout<<this->x<<endl;
    }
};

void func(){
    
}

int main(){

    //A a(5);
    cout<<func<<endl;
    return 0;
}