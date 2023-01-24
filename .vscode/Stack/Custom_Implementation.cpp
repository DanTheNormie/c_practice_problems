#include<bits/stdc++.h>
using namespace std;

class Stack{

    public:
    vector<int> v;

    
    Stack(int size){
        v = vector<int>(size);
    }

    Stack(){

    }

    int top(){
        if(v.empty()) {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }

    void push(int data){
        v.push_back(data);
    }

    void pop(){
        if(v.empty()){
            cout<<"Stack is Empty, can't pop"<<endl;
            return;
        }
        v.pop_back();
    }

    int size(){
        return v.size();
    }
};

void print(Stack s){
    cout<<"addr inside : "<<&(s.v)<<endl;
    while(s.size()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    Stack s = Stack();
    
    s.push(51);
    s.push(52);
    s.push(53);
    s.push(54);
    s.push(55);
    s.push(56);
    s.push(57);
    s.push(58);
    cout<<"addr outside : "<<&(s.v)<<endl;
    print(s);


    cout<<s.top()<<endl;


}