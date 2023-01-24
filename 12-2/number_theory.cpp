#include<bits/stdc++.h>
using namespace std;
#define print cout<<
#define ll long long
#define M 1000000007

void multiply(vector<int>&v, int num){

    int carry=0;
    for(int i=0;i<v.size();i++){

        int prod = v[i]*num + carry;
        v[i]=prod%10;
        carry = prod/10;
    }

    while(carry){
        v.push_back(carry%10);
        carry/=10;
    }

}

vector<int> factorial(int n){
    vector<int> ans(1,1);

    for(int i=2;i<=n;i++){
        multiply(ans,i);
    }
    return ans;
}

void print_arr_in_reverse(vector<int>v){
    for(int i=v.size()-1;i>-1;i--){
        print v[i]<<" ";
    }
    print endl;
}

int divisible_subarrays(vector<int> v, int k){

    v[0] %= k; 
    for(int i=1; i<v.size();i++){
        v[i] += v[i-1]%k;
    }
    vector<int>

}

int main(){
    
    print_arr_in_reverse(factorial(1000));

    return 0;
}