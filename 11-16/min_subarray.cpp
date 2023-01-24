#include <bits/stdc++.h>

using namespace std;




int find_min_contiguous_subarray(int* arr, int len){

    

    int sum_of_all_elements=0;    
    int cummulative_sum[len];

    for(int i = 0; i<len; i++){
        sum_of_all_elements += arr[i];
        cummulative_sum[i] = sum_of_all_elements;
    }

    int i=0,j=0,x=0;
    int ans = arr[0];
    int sum_i_y;
    int sum_x_y;

    for(int y=1;y<len;y++){

        sum_i_y = (i == y ? arr[i] : i-1<0 ? cummulative_sum[y] : cummulative_sum[y] - cummulative_sum[i-1]);

        if(sum_i_y < ans){
            j=y;
            ans = sum_i_y;
        }
        for(;x <= y;x++){
            sum_x_y = (x == y ? arr[x] : x-1<0 ? cummulative_sum[y] : cummulative_sum[y] - cummulative_sum[x-1]);

            if(sum_x_y < sum_i_y){
                i = x;
                ans = sum_x_y;
            }
        }
    }

    cout<<"i == "<<i<<",j == "<<j<<endl;
    return ans;

}

void minsubarray(int arr[],int len){

    int ans = arr[0];
    int currentsum = arr[0];
    for(int i=1;i<len;i++){
        currentsum += arr[i];
        if(currentsum > 0){
            currentsum = 0;
        }
        if(currentsum < ans){
            ans = currentsum;
        }
        
    }
    cout<<"min sum subbarray is : "<<ans<<endl;
}


void min_subarray_circular(int arr[], int len){

    int ans = arr[0];
    int currentsum = arr[0];
    int totalsum = arr[0];
    for(int i=1;i<len;i++){
        currentsum += arr[i];
        if(currentsum > 0){
            currentsum = 0;
        }
        if(currentsum < ans){
            ans = currentsum;
        }
    }

    cout<<ans<<endl;
}

int max_subarray_sum(vector<int> &v){
	int max = INT_MIN;
	int sum = 0;

	for(int i=0; i<v.size(); i++){
		sum+=v[i];
		if(sum>max) 
			max = sum;
		
		if(sum<0)
			sum = 0;
        
		cout<<"["<<i<<"] "<<max<<" "<<sum<<endl;
	}
	return max; 
}



int main(){
    // {-9,8,-1,7,-6,-10}
    // {-1,-2,-3,-4,-5}
    // {2,-5,4,8,-9}
    // int arr[] = {2,-5,4,8,-9};
    // int len = sizeof(arr)/sizeof(arr[0]);
    
    // min_subarray_circular(arr, len);

    vector<int> v{-1,-2,-3,-4,-5};
    cout<<max_subarray_sum(v);
    return 0;
}