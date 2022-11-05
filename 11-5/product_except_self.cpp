#include <bits/stdc++.h>

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


void product_except_self_best(int arr[], int len){

    int res[len] = {0};
    int zero_element_index = -1;
    int zero_counter = 0;
    int cum_prod = 1;

    for(int i=0; i<len;i++){

        if(arr[i] == 0){
            zero_counter += 1;
            zero_element_index = i;
        }
        if(zero_counter > 1){
            print_arr(arr,len,"result if array has 2 zeros");
            return;
        }
    }

    if(zero_element_index != -1){
    
        for (int i = 0; i < len; i++){
            
            if(i != zero_element_index){
                cum_prod *= arr[i];
            }
            
        }
        res[zero_element_index] = cum_prod;

        print_arr(res,len,"result if arr has zero");
        return;
    }
    else{

        print_arr(arr,len,"result after initialization");

        for (int i=1; i<len; i++){
            if(arr[i]==0){
                zero_element_index = i;
                break;
            }
            cum_prod *= arr[i-1];
            res[i] = cum_prod;
        }

        print_arr(res,len,"result after left_side_iteration");

        res[0] = 1;
        cum_prod = 1;
        for(int i=len-2; i > -1; i--){

            cum_prod *= arr[i+1];
            res[i] *= cum_prod;
        }

        print_arr(res,len,"result after right_side_iteration");
    }
}


void product_except_self_optimized(int arr[], int len){

    /*  
        Time Complexity  : O(n)
        Space Complexity : O(2n) -> O(n) 

     */

    int left_cum_product[len] = {1};
    int right_cum_product[len] = {1};
    right_cum_product[len-1] = 1;

    int res[len] = {0};

    int zero_element_index = -1;
    

    /* take cummulative product of 0 .. index-1 and store in left_cum_product[index] */
    /* also update zero counter with no. of zeros */

    int cum_prod = 1;
    for (int i=1; i<len; i++){
        if(arr[i] == 0){
            zero_element_index = i;
            break;
        }

        cum_prod *= arr[i-1];
        left_cum_product[i] = cum_prod;
    }

    print_arr(left_cum_product,len,"left_cum_array");

    /* if zero exists, just get cum_prod for zero_element_index and exit */

    if(zero_element_index != -1 ){
        cum_prod = 1;
        for(int i=0; i<len; i++){
            if(i != zero_element_index){
                cum_prod *= arr[i];
            }
        }
        res[zero_element_index] = cum_prod;
        print_arr(res,len,"result");
        return;
    }

    /* take cummulative product of len-1 .. index+1 and store in left_cum_product[index] */
    cum_prod = 1;
    for(int i = len-2; i > -1; i--){
        cum_prod *= arr[i+1];
        right_cum_product[i] = cum_prod;
    }

    print_arr(right_cum_product,len,"right_cum_array");



    for(int i=0; i<len; i++){
        res[i] = left_cum_product[i]*right_cum_product[i];
    }

    print_arr(res,len,"result_array");
    return;
}


void product_except_self_naive(int arr[], int len){
    /* 
        Time Complexity  : O(n^2)
        Space Complexity : O(n)
    */


    int res[len] = {0};
    for(int i=0; i<len; i++){
        int mult = 1;
        for(int j=0; j<len; j++){
            if(j != i){
                mult *= arr[j];
            }
        }
        res[i] = mult;
    }

    print_arr(res,len);

}


int main(){

    int arr[] = {1,2,3,4,5,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    product_except_self_best(arr,len);

    return 0;
}