#include <bits/stdc++.h>
using namespace std;
void print_squares_sorted(vector<long long> v){

    long long j=-1;
    for(long long i=0; i<v.size(); i++){
        if(v[i]<=-1) j=i;
        v[i]*=v[i];
    }

    long i=j+1;
    while(i < v.size() && j > -1){
        if(v[i] < v[j]){
            cout<<v[i]<<" ";
            i++;
        }else if(v[i] > v[j]){
            cout<<v[j]<<" ";
            j--;
        }else{
            cout<<v[i]<<" "<<v[j]<<" ";
            i++;
            j--;
        }
    }
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    while(j>-1){
        cout<<v[j]<<" ";
        j--;
    }
}


int main() {
    long long n,input;
    cin>>n;
    vector<long long> v;
    for(int i=0; i<n; i++){
        cin>>input;
        v.push_back(input);
    }

    print_squares_sorted(v);
}
