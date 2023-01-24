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

void r_bubble_sort(vector<int> &v,int i, int j, int n){
    /* back to front */
    
    if(n<1) return;

    if(v[j]>v[j+1]) swap(v[j],v[j+1]);

    if(j==v.size()-i-2) r_bubble_sort(v,i,i,n-1);
    else r_bubble_sort(v,i,j+1,n);
}

void r_bubble_sort_2(vector<int> &v,int i, int j){
    /* front to back */
    
    if(i>=v.size()-1) return;

    if(v[i]>v[j]) swap(v[i],v[j]);

    if(j==v.size()-1) r_bubble_sort_2(v,i+1,i+2);
    else r_bubble_sort_2(v,i,j+1);
}

void r_merge_sort(vector<int>&v,int i, int j){

    int mid = (i+j)/2;
    if(i-j>0){
        r_merge_sort(v,i,mid);
        r_merge_sort(v,mid+1,j);
    }
    while(i<j){
        if(v[i]<v[j]) swap(v[i],v[j]);
    }
}


int main(){

    vector<int> v{5,4,3,2,1};

    r_bubble_sort_2(v,0,1);

    print_vec(v);

}