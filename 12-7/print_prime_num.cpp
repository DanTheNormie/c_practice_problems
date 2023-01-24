#include<bits/stdc++.h>
using namespace std;

void print_prime_numbers_between_0_to_(int n){

    vector<bool> prime(n+1,true);

    for(int i=2; i<=n; i++){
        if(prime[i]){
            cout<<i<<" ";
            for(int j = i+i; j<=n; j+=i){
                prime[j] = false;
            }
        }
    }
}

void print_prime_factors_of_numbers_between_1_to_(int n){
    vector<int> spf(n+1,0);
    for(int i=1; i<=n; i++){
        spf[i]=i;
    }

    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            if(spf[j]>i)
                spf[j] = i;
        }
    }

    for(int i=2; i<=n; i++){
        
        int j=i;
        cout<<i<<"\t";
        while(j>1){
            cout<<spf[j]<<" ";
            j /= spf[j];
        }
        cout<<endl;
    }
}

int main(void){

    print_prime_factors_of_numbers_between_1_to_(100);
}