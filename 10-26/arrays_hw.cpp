#include <bits/stdc++.h>

using namespace std;


int max(int arr[], int length){
	
	int max = INT_MIN;
	for(int i = 0;i<length;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

int min(int arr[],int length){
	int min = INT_MAX;
	for(int i = 0;i<length;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}

int sum(int arr[],int length){
	int sum = 0;
	for(int i = 0;i<length;i++){
		sum += arr[i];
	}
	return sum;
}

int main(){

	int a[5] = {1,2,3,4,5};

	cout<<max(a,5)<<endl;
	cout<<min(a,5)<<endl;
	cout<<sum(a,5)<<endl;

	return 0;
}