#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    vector<int> *vec;

    A(){
        vec = new vector<int>();
    }

    /* A(A &b){
        vec = new vector<int>(b.vec->size());
        for(int i=0; i<b.vec->size(); i++){
            vec->at(i) = b.vec->at(i);
        }
    } */
};

void fun(A a1, A a2){

    a1.vec->push_back(12);
    a2.vec->push_back(22);
}

void print(A &a1, A &a2){
    cout<<" A1 : ";
    for(int i=0;i<a1.vec->size();i++){
        cout<<(*(a1.vec))[i]<<" ";
    }
    cout<<endl;
    cout<<" A2 : ";
    for(int i=0;i<a2.vec->size();i++){
        cout<<(*(a2.vec))[i]<<" ";
    }
    cout<<endl;
}

int main(){

    A a1;
    A a2;

    print(a1,a2);

    fun(a1,a2);

    print(a1,a2);

}