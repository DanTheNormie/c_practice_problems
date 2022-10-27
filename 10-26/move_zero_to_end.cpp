#include <bits/stdc++.h>

using namespace std;

void move_zeros_to_end(int arr[],int length){

	int res_arr[length] = {0};
	int j = 0;
	for(int i = 0; i<length; i++){
		if(arr[i] != 0){
			res_arr[j] = arr[i];
			j++;
		}
	}

	for(int i = 0; i<length; i++){
		cout<<res_arr[i]<<endl;
	}

}



void move_zeros_to_end_in_place(int arr[], int length){

	for (int i = 0; i < length; ++i)
	{
		if (arr[i]==0)
		{
			int j = i;
			while(arr[j]!=0){
				j++;
			}
			arr[i] = arr[j];
			arr[j] = 0;
		}
	}

	for(int i = 0; i<length; i++){
		cout<<res_arr[i]<<endl;
	}
}

int main(){

	int arr[] = {0,1,2,3,0,0,4,0,0,7,6};
	int length = sizeof(arr)/sizeof(arr[0]);

	move_zeros_to_end_in_place(arr,length);

	return 0;
}