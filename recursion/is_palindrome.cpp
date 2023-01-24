#include<bits/stdc++.h>
using namespace std;

bool recursive_is_palindrome(vector<int> &v,int i,int j){

    if(i>j) return true; 
    if(v[i]!=v[j]) return false;

    return recursive_is_palindrome(v,i+1,j-1);

}
void print_vec(vector<int> &arr, string array_name = ""){
    int len = arr.size();
    if(array_name != ""){
        cout<<array_name<<" : ";
    }
    
    cout<<"[ ";
    for(int i=0; i<len; i++){
        cout<<arr[i];
        if(i != len-1) cout<<", ";
    }
    cout<<" ]"<<endl;
}

void recursive_reverse_arr(vector<int> &v, int i, int j){

    if(i>j) return;
    swap(v[i],v[j]);
    recursive_reverse_arr(v,i+1,j-1);
}

void fib_2(int a, int b,int n){
    if(n<1){
        cout<<b<<" ";
        return;
    } 

    fib_2(b,a+b,n-1);
}

void fib_1(int a, int b,int n){
    if(n<1)return;

    cout<<b<<" ";
    fib_1(b,a+b,n-1);
}

int classic_fib(int n){

    if(n<2) return 1;
    return classic_fib(n-1)+classic_fib(n-2);
}

int fib(int n,vector<int> &dp){
    if(n<2) return 1;

    if(dp[n]!=-1) return dp[n]; 

    return dp[n] = fib(n-1,dp)+fib(n-2,dp);
}

int memoized_fib(int n){
    vector<int> dp(n+1,-1);

    return fib(n,dp);
}


int main(){

    vector<int> v{1,2,3,2,3};

    cout<<memoized_fib(5);

    //print_vec(v);
}