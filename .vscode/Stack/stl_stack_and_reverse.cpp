#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
    if(s.empty()){
        cout<<"No elements in the stack"<<endl;
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void add_element_to_last(stack<int> &s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();
    add_element_to_last(s,data);
    s.push(temp);
}

void reverse_recursive(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();

    reverse_recursive(s);

    add_element_to_last(s,temp);
}

void reverse1(stack<int> &s){
    stack<int> temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }

    s = temp; 
}

int main(){
    stack<int> s;

    for(int i=0; i<10; i++){
        s.push(i);
    }
    print(s);
    reverse1(s);
    print(s);

}