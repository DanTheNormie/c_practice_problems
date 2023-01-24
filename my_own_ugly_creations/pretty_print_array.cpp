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