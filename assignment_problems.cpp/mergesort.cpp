#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s, int m, int e){

    int i = s;
    int j = m+1;
    vector<int> temp;
    while(i<=m && j<=e){
        if(v[i]>v[j]){
            temp.push_back(v[j++]);
        }else{
            temp.push_back(v[i++]);
        }
    }
    while(i<=m){
        temp.push_back(v[i++]);
    }
    while(j<=e){
        temp.push_back(v[j++]);
    }
    for(int i=s;i<=e;i++){
        v[i] = temp[i-s];
    }
} 


void mergesort(vector<int> &v,int s, int e){
    if(s>=e) return;

    int m = (s+e)/2;
    mergesort(v,s,m);
    mergesort(v,m+1,e);

    merge(v,s,m,e);
}

int main(){

    vector<int> v{5,5,5,5,5,4,3,2,1,1,1,1};

    mergesort(v,0,v.size()-1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}