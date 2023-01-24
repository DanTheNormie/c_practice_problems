#include<bits/stdc++.h>
using namespace std;

int find_greater(int x, stack<int> &s){
    while(!s.empty()){
        if(s.top()>x){
            return s.top();
        }
        s.pop();
    }
    return -1;
}

void next_greater(vector<int> &v){
    /* find the immediate next greater element on right side of each element */

    stack<int> s;
    vector<int> ans(v.size());
    
    for(int i=v.size(); i>=0; i--){
        if(v[i]>=s.top()){
            ans[i] = find_greater(v[i],s);
            s.push(v[i]);
        }else{
            ans[i] = s.top(); 
            s.push(v[i]);
        }
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" , "<<ans[i]<<endl;
    }
}

int main(){
    vector<int> v{20,1,1,2,3,2,10,7};

    next_greater(v);
}