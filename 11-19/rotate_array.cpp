#include<bits/stdc++.h>

using namespace std;

void print_arr(int arr[],int len, string array_name = ""){
    
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

void rotate(vector<int>& a, int k) {
       
        k %= a.size();
        if(k){
            int i=0,j=a.size()-1;
            
            while(i<j){
                swap(a[i],a[j]);
            }
            
            print_vec(a);
            
            reverse(a.begin(),a.begin()+k);
            reverse(a.begin()+k,a.end());
        }
    }

void rotate_array_naive(int* arr,int len,int k){

    k = k%len;
    if(k==0){
        cout<<"Done :)"<<endl;
        return;
    }

    while(k--){
        int temp = arr[len-1];
        for(int i=len-1;i > 0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = temp;

        print_arr(arr,len);
    }

}

void rotate_array_2(int* arr,int len,int k){

    k = k%len;
    if(k==0){
        cout<<"Done :)"<<endl;
        return;
    }

    int res[len] = {0};

    int j=0;

    for(int i=len-k;i<len;i++,j++){
        res[j] = arr[i];
    }
    print_arr(res,len);

    for(int i=0;i<len-k;i++,j++){
        res[j]=arr[i];
    }

    print_arr(res,len);

}

void rotate_array_3(int* arr,int len,int k){

    k = k%len;
    if(k==0){

        cout<<"Done :)"<<endl;
        return;
    }

    int res[len] = {0};

    int j=0;

    for(int i=len-k;i<len;i++,j++){
        res[j] = arr[i];
    }
    print_arr(res,len);

    for(int i=0;i<len-k;i++,j++){
        res[j]=arr[i];
    }

    print_arr(res,len);

}

void rotate_once(int* arr, int len){

    for(int i=0; i<len-1;i++){
        swap(arr[i],arr[len-1]);
    }
    print_arr(arr,len);
}

int main(){

    int arr[] = {1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    rotate_once((int*)arr,len);

    return 0;
}