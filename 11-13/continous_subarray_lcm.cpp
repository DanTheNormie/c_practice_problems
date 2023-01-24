#include <bits/stdc++.h>

using namespace std;
  
    // Function to return LCM of two numbers
    long long lcm(int a, int b){
        return (a / __gcd(a, b)) * b;
    }

    int subarray_lcm(vector<int> &)
    
    
    int subarrayLCM(vector<int>& nums, int k) {
        
        int result = 0;
        bool contiguous;
        int temp_result = 0;
        
        if((nums.size()==1)){
            if(nums[0]==k)
                return 1;
            else
                return 0;
        }
        
        for(int i=0; i<nums.size()-1; i++){
            contiguous = false;
            if(nums[i]==k){
                result++;
            }
            
            for(int j = i+1; j<nums.size();j++){
                
                if(contiguous){
                    if(k%nums[j] == 0){
                        result++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    int lcm = (nums[i]*nums[j]) / __gcd(nums[i], nums[j]);
                    if(lcm==k){
                        result++;
                        contiguous = true;
                    }
                    else if(k%nums[j] == 0){
                        continue;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        if(nums[nums.size()-1]==k)
            result++;
        
        return result;
    }


int main(){
    //[5,1,1,1,2]
    vector<int> nums(5);
    nums[0] = 7;
    nums[1] = 1;
    nums[2] = 1;
    nums[3] = 1;
    nums[4] = 1;

    cout<<subarrayLCM(nums,1);

    return 0;
}