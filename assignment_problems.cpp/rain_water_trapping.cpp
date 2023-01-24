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

void print_vec(vector<long long> arr, string array_name = "",int start_idx = 0,int end_idx= -1){
    
    int end = arr.size();
    if(end_idx!=-1) end = end_idx+1;
    int start = start_idx;
    if(array_name != "") cout<<array_name<<" : ";
    
    cout<<"[ ";
    for(int i=start; i<end; i++){
        cout<<arr[i];
        if(i != end-1) cout<<", ";
    }
    cout<<" ]"<<endl;
}


int trap(int arr[],int len){
    int ans =0;
    if(len<3){
        cout<<"Mountain needs to be atleast size 3 to hold water"<<endl;
        return 0;
    }
    int i=0;
    while(arr[i+1] >= arr[i]){
        i++;
    }
    int j=len-1;
    while(arr[j-1] >= arr[j]){
        j--;
    }

    if(i>=j){
        cout<<"This structure can't hold water"<<endl;
        return 0;
    }
    
    while(i<j){
        int k=i+2;
        int max = -1;
        int max_index = -1;
        int sum = 0;
        while(k<j){
            sum+= arr[k-1];
            if(arr[k]>max){
                max=arr[k];
                max_index = k;
            }
            if(arr[k]>=arr[i]){
                break;
            }
            
            k++;
        }
        if(k==j){
            sum += arr[k-1];
        }
        
            
        int x=i+1;
        while(arr[x] > arr[k]){
            sum -= arr[x];
            x++;
        }
        cout<<"x became "<< --x<<endl;
        i=x;
        



        cout<<"i == "<<i<<endl;
        cout<<"j == "<<j<<endl;
        cout<<"k == "<<k<<endl;
        cout<<"max_index == "<<max_index<<endl;
        cout<<"max == "<<max<<endl;
        cout<<"sum == "<<sum<<endl;
        
        int index_diff = k-i-1;
        int w_capacity = min(arr[i],arr[k])*index_diff;
        int w_held = w_capacity-sum;

        cout<<"index_diff == "<<index_diff<<endl;
        cout<<"w_capacity == "<<w_capacity<<endl;
        cout<<"w_held == "<<w_held<<endl;

        ans+=w_held;

        i=k;
        while(i+1 < len && arr[i+1]>= arr[i]){
            i++;
        }
    }
    cout<<"ans == "<<ans<<endl;
    return ans;
}

int trap_official(int arr[],int len){

    int ans =0;
    if(len<3){
        return 0;
    }
    int i=0;
    while(arr[i+1] >= arr[i]){
        i++;
    }
    int j=len-1;
    while(arr[j-1] >= arr[j]){
        j--;
    }

    if(i>=j){
       
        return 0;
    }

    

    while(i<j){
        int k=i+2;
        int max = -1;
        int max_index = -1;
        int sum = 0;
        while(k<=j){
            sum+= arr[k-1];
            if(arr[k]>max){
                max=arr[k];
                max_index = k;
            }
            if(arr[k]>=arr[i]){
                break;
            }
            k++;
        }

        int index_diff = k-i-1;
        int w_capacity = min(arr[i],arr[k])*index_diff;
        int w_held = w_capacity-sum;
        ans+=w_held;

        i=k;
        
    }

   cout<<"ans == "<<ans<<endl;
    return ans;
}
//[0,1,0,2,1,0,1,3,2,1,2,1]


int rain_water_trap(vector<long long> v){
    int ans = 0;
    int i=0,j=v.size()-1;
    print_vec(v,"    OG_Arr");
    if(v.size()<3) return 0; // so place to hold water

    //incrementing i till first ditch
    while(i+1 <= v.size() && v[i+1] >= v[i]){
        i++;
    }
    //incr j till first ditch from last
    while(j-1 > -1 && v[j-1]>=v[j]){
        j--;
    }
    if(i>=j) return 0; // can't hold water, literally a mountain structure

    vector<long long> left;
    
    vector<long long> right;

    long long max = v[i]; 
    for(int k=i; k<=j; k++){
        if(v[k] > max) max = v[k];
        left.push_back(max);
    }
    max = v[j];
    for(int k=j; k>=i; k--){
        if(v[k]>max) max = v[k];
        right.push_back(max);
    }
    reverse(right.begin(), right.end());

    print_vec(v," valid_Arr",i,j);
    print_vec(left,"      Left");
    print_vec(right,"     Right");

    int start = i, end = j;
    vector<long long> water_held;
    while(start<=end){
        water_held.push_back(std::min(left[start-i],right[start-i]) - v[start]);
        ans += std::min(left[start-i],right[start-i]) - v[start];
        start++;
    }
    
    
    print_vec(water_held,"water_held");
    cout<<"ans == "<<ans<<endl;


    return ans;
}




int main(){
    vector<long long> v1{1,2,3,4,3,4,3,2,1,2,3,4,3,2,1};

    vector<long long> v2{1000,999,998,997,996,995,994,993,992,991,990,989,988,987,986,985,984,983,982,981,980,979,978,977,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966};

    vector<long long> v3{3,2,1,0,0,4};
    
    vector<long long> v4{1,2,3,2,1};

    vector<long long> v5{5,4,1,2};

    vector<long long> v6{8,2,8,9,0,1,7,7,9};
    
    vector<long long> v7{0,1,0,2,1,0,1,3,2,1,2,1};
    
    rain_water_trap(v7);
    
    
    return 0;
}