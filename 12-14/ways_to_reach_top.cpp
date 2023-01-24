#include<bits/stdc++.h>
using namespace std;

#define M 100000007

int f(int n, int k,vector<int>&dp){
    //base case
    if(n<0) return 0;
    if(n==0) return 1;

    //memoized case
    if(dp[n]!=-1) return dp[n];

    //recursive case
    int ans = 0;
    for(int i=1; i<=k; i++) ans=ans+(f(n-i,k,dp)%M);
    return dp[n]=ans%M;  
}


int main(){

    int n=372;
    vector<int> dp(n+1,-1);
    cout<<f(n,3,dp);

    return 0;
}