#include<bits/stdc++.h>
using namespace std;


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

void merge(vector<int> &v,int s, int m, int e){

    vector<int> temp;
    int i=s,j=m+1;
    while(i<=m && j<=e){
        if(v[i]<v[j])
            temp.push_back(v[i++]);
        else
            temp.push_back(v[j++]);
    }
    while(i <= m) temp.push_back(v[i++]);
    while(j <= e) temp.push_back(v[j++]);
    for(int i=s,k=0;i<=e; i++,k++){
        v[i] = temp[k];
    }

}

void mergesort(vector<int> &v, int s, int e){

    if(s==e) return;

    int m = (s+e)/2;
    mergesort(v,s,m);
    mergesort(v,m+1,e);

    merge(v,s,m,e);
}




int main(){

    vector<int> v{5,4,3,2,1};

    mergesort(v,0,v.size()-1);

    print_vec(v);

    return 0;
}