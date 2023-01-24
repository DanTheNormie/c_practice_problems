#include <bits/stdc++.h> 
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

void nextGreater(int v[], int n) 
{ 
 /* find the immediate next greater element on right side of each element */

    stack<int> s;
    int ans[n];
    s.push(INT_MIN);
    for(int i=n-1; i>=0; i--){
        if(v[i]>=s.top()){
            ans[i] = find_greater(v[i],s);
            s.push(v[i]);
        }else{
            ans[i] = s.top(); 
            s.push(v[i]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<","<<ans[i]<<endl;
    }
} 

// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 