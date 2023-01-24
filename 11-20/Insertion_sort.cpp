#include<bits/stdc++.h>

using namespace std;



void insertion_sort(vector<int> v){

    //considering element at i and placing it in sorted place

    print_vec(v);
    for(int i=1; i<v.size();i++){
        int j=i;
        while((j > 0)&&(v[j] < v[j-1])){
            swap(v[j],v[j-1]);
            j--;
        }
        
    }
    print_vec(v);
}

void selection_sort(vector<int> v){
    //select/find min or max element
    //swap with first or last position respectively

    for(int i=0l i<n-1; i++){
        int minIdx = i;
        for(int j=i+1l j<n; j++){
            if(arr[j] < arr[minIdx])
        }
    }


}

void quick_sort(vector<int> v){
    //pick element to partition array

    // should be in the range of (min,max)
    // and should be from the array.
}


int main(){ 

    vector<int> v {2,3,1,5,4};
    insertion_sort(v);

    return 0;
}