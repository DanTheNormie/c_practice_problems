#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &v, int s, int m, int e){

    int i = s;
    int j = m+1;
    vector<int> temp;
    int ans=0;
    while(i<=m && j<=e){
        if(v[i]>v[j]){
            temp.push_back(v[j++]);
            ans++;
        }
        else
            temp.push_back(v[i++]);
        
    }
    while(i<=m)
        temp.push_back(v[i++]);
    
    while(j<=e)
        temp.push_back(v[j++]);
    
    for(int i=s;i<=e;i++)
        v[i] = temp[i-s];

    return ans;
    
} 


void mergesort(vector<int> &v,int s, int e){
    if(s>=e) return;

    int m = (s+e)/2;
    int ans = 0;
    ans += mergesort(v,s,m);
    ans += mergesort(v,m+1,e);

    ans += merge(v,s,m,e);
    return ans;
}

int main(){

    vector<int> v{5,5,5,5,5,4,3,2,1,1,1,1};

    mergesort(v,0,v.size()-1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}