#include<bits/stdc++.h>

using namespace std;


   

/* 
// Function to partition the input array around the pivot
int partition1(int arr[], int low, int high)
{
    // Choose a random pivot point
    int pivotIndex = high;
    int pivot = arr[pivotIndex];

    // Use pivot to partition the array
    int i = low;
    int j = high;
    while (i <= j)
    {
        // Find a value in the left subarray that is greater than or equal to the pivot
        while (arr[i] < pivot) i++;

        // Find a value in the right subarray that is less than or equal to the pivot
        while (arr[j] > pivot) j--;

        // If we have found values on the wrong side of the pivot, swap them
        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return i;
}

// Recursive function to sort the input array using quicksort
void quicksort1(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex, high);
    }
} */

/* 
int partition (int a[], int start, int end){
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(a[i],a[j]);
        }  
    }  
    swap(a[i+1],a[end]); 
    return (i + 1);
} 

void quickSort(int v[], int s, int e){
    if(s>=e) return;
        
    int p = partition(v,s,e);

    quickSort(v,p+1,e);
    quickSort(v,s,p-1);
} 
*/

int partition(vector<int> &v, int s, int e){

    /* Keep j as a counter for items less than v[e] */

    int pivot = v[e];
    int j = s;
    for(int i=s; i < e; i++){
        if(v[i]<pivot){
            swap(v[j],v[i]);
            j++;
        }
    }
    swap(v[j],v[e]);
    return j;

}

void quicksort(vector<int> &v, int s, int e){
    if(s>=e) return;
    int pivot = partition(v,s,e);
    quicksort(v,s,pivot-1);
    quicksort(v,pivot+1,e);

}
   


int main(void){
    //{24,18,38,43,14,40,1,54}
    //{}
    vector<int> v{1,-1,55};
    int n = v.size();

    quicksort(v,0,n-1); 

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}