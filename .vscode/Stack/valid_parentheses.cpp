#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<char> v){
    stack<char> s;
    for(int i=0;i<v.size();i++){
        if(v[i]=='(' or v[i]=='{' or v[i]=='['){
            s.push(v[i]);
        }
        else if(!s.empty()){
            if( 
                (v[i] == ')') and (s.top()=='(') or
                (v[i] == '}') and (s.top()=='{') or
                (v[i] == ']') and (s.top()=='[')
            ){
                s.pop();
            }else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    
    return !s.size();   
}


int main(){
    vector<char> v{'(','{','(',')','[',']','}',')','{','}'};
    
    cout<<isValid(v);
}