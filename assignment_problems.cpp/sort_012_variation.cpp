#include<bits/stdc++.h>
using namespace std;

void sort_pcm(string &v){
    int i=0,j=0,k=v.length()-1;
    while(j<k){
        if(v[j]=='P'){
            swap(v[i],v[j]);
            i++;
            j++;
        }else if(v[j]=='M'){
            swap(v[j],v[k]);
            k--;
            
        }else{
            j++;
        }
        for(int i=0; i<v.length(); i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    
}

int main(){
    
    string v = "MPMXPXCXPMCPXCMMMXPPCXPM";
    
    sort_pcm(v);

    for(int i=0; i<v.length(); i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    
}