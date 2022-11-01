#include <bits/stdc++.h>

using namespace std;

int sum(int arr[],int index_1, int index_2){
  if(index_1 == index_2){
    return arr[index_1];
  }
  else{
    
    int sum = 0;
    for(int i = index_1; i <=index_2; i++){
      
      sum += arr[i];
    }
    return sum;
  }
   
}

int max_sum_subarray(int arr[],int len){
  
  int i=0,j=0,k = 0;
  int sum_i_j = 0;
  
  for( int l = 0; l < len; l++){
    int sum_i_l = sum(arr,i,l);
    sum_i_j = sum(arr,i,j);
     
    
    if(sum_i_j < sum_i_l){
      
      j = l; 
      
      sum_i_j = sum_i_l;

      while(k <= l){
      
        if(sum(arr,k,l) > sum_i_l){
        
          i = k; 
        
        }
        k++; 
      }
    }
  }
  
  return sum_i_j;
   
}


int max_sum_subarray_2(int arr[], int len){
    int sum_of_all_elements = 0;    
    int cummulative_sum[10] = {0};

    for(int i = 0; i<len; i++){
        sum_of_all_elements += arr[i];
        cummulative_sum[i] = sum_of_all_elements;
    }

    int i=0,j=0,k = 0;
    int sum_i_j = (i == j ? arr[i] : i-1<0? cummulative_sum[j] : cummulative_sum[j] - cummulative_sum[i-1]);

    for( int l = 0; l < len; l++){
       int sum_i_l = (i == l ? arr[i] : i-1<0? cummulative_sum[l] : cummulative_sum[l] - cummulative_sum[i-1]);
    
     
        if(sum_i_j < sum_i_l){
        
            j = l; 
            
            sum_i_j = sum_i_l;
        }
        while(k <= l){
            
            int sum_k_l = (k==l ? arr[k] : k-1<0? cummulative_sum[l] : cummulative_sum[l] - cummulative_sum[k-1]);

            if(sum_k_l > sum_i_l){
            
            i = k; 

            sum_i_j = sum_k_l;
            
            }
            k++; 
        }
    }
    return sum_i_j;
}


int main() {
  /*
  test_cases
    4,-3,8,9,-7,-3,-8,9
    -8,2,-3,8,-6,7,-4,2
    400,-300,200,80,-100,-30,0,500
    -5,-4,-3,-2,-1
  */

  int arr[] = {-5,-4,-3,-2,-1};
  int len = sizeof(arr)/sizeof(arr[0]);
  
  cout<<max_sum_subarray_2(arr,len);

  return 0;
}