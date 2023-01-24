#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);

        vector<int> ans(nums.size());

        for(int i=1; i<nums.size(); i++){
            left[i] = left[i-1] * nums[i-1];
        }

        for(int i=nums.size()-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }

        for(int i=0; i<nums.size(); i++){
            ans[i] = left[i] * right[i];
        }

        return ans;
        
    }

int max_subbary_sum(vector<int> &v){
    int max=0, max_so_far =0;

    for(int i=0; i<v.size(); i++){
        max_so_far += v[i];
        if(v[i] > max_so_far){
            max_so_far = v[i];
        }
        if(max_so_far > max){
            max = max_so_far;
        }
    }
    return max;
}

int min_subbary_sum(vector<int> &v){
    int min=INT_MAX, min_so_far=0;

    for(int i=0; i<v.size(); i++){
        min_so_far += v[i];
        if(v[i] < min_so_far){
            min_so_far = v[i];
        }
        if(min_so_far < min){
            min = min_so_far;
        }
    }
    return min;
}

int main(){
    vector<int> v{-1,-2,6,-3,-4,-5,2,-4};

    cout<<min_subbary_sum(v);



    return 0;
}