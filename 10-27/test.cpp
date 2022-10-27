#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end_in_place(int arr[], int length)
{
    int j = 0;
    for (int i = 0; i < length; ++i)
    {

        if (j >= length-1) break;

        //only goes through here if ith element is zero
        if (arr[i] == 0){

           if(j==0) j = i+1; // only happens the first time

            //increment j till its at a non-zero elements index (or) end of array
            while (arr[j] == 0 && j < length - 1){
                j++;
            }

            if (arr[j]==0) break; // ?? Doubt ??

            //swap ith element and jth element
            arr[i] = arr[j];
            arr[j] = 0;
        }
    }
}

int main()
{

    int arr[] = {0, 1, 2, 0, 0, 0, 4, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    move_zeros_to_end_in_place(arr, length);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
