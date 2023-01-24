#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

bool linear_search(int *arr, int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int find_first_occurence_of_key_with_binary_search(int *arr, int len, int key)
{

    int start = 0;
    int end = len - 1;
    int mid;
    int ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int find_last_occurence_of_key_with_binary_search(int *arr, int len, int key)
{

    int start = 0;
    int end = len - 1;
    int mid;
    int ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int binary_search(int *arr, int len, int key, bool reverse_sorted = false){

    int start = 0, end = len - 1, mid;

    while (start <= end){
        mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        
        else if ((arr[mid] < key) && !reverse_sorted)
            start = mid + 1;
        
        else
            end = mid - 1;
    }
    return -1;
}

void print_arr(int arr[], int len, string array_name = "")
{

    if (array_name != "")
    {
        cout << array_name << " : ";
    }

    cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
        if (i != len - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

int array_is_reverse_sorted(int *arr, int len)
{

    /*

    [-1,-2,-3,-4,-5] === both -ve

    [-1, 0, 1, 2, 3, 4] === both +ve

    [1, 2, 3, 4, 5] === both +ve

    [4, 5, 1, 2, 3] === both +ve

    [5, 1, 2, 3, 4] === not same

    [2, 3, 4, 5, 1] === not same



     */

    int sub1 = arr[1] - arr[0];
    int sub2 = arr[len - 2] - arr[len - 1];

    if (sub1 > 0 && sub2 > 0)
    {
        cout << "array is properly sorted." << endl;
        return 1;
    }
    else if (sub1 < 0 && sub2 < 0)
    {
        cout << "array is reverse sorted." << endl;
        return -1;
    }
    else
    {
        int sub3 = arr[len - 1] - arr[0];
        if (sub3 > 0)
        {
            cout << "array is properly sorted." << endl;

            if (sub1 > 0)
            {
                cout << "breakage is between len-1 and len-2" << endl;
            }
            else
            {
                cout << "breakage is between 0 and 1" << endl;
            }

            return 1;
        }
        else
        {
            cout << "array is reverse sorted." << endl;

            if (sub1 < 0)
            {
                cout << "breakage is between len-1 and len-2" << endl;
            }
            else
            {
                cout << "breakage is between 0 and 1" << endl;
            }

            return -1;
        }
    }
}

int find_key_in_sorted_rotated_array(int *arr, int len, int key)
{

    int start = 0;
    int end = len - 1;
    int mid;

    int sub1 = arr[1] - arr[0];
    int sub2 = arr[len - 1] - arr[len - 2];

    bool reverse_sorted = false;

    if (sub1 > 0 && sub2 > 0) 
    {
        cout << "array is sorted increasingly." << endl;
        while (start + 1 != end)
        {
            mid = (start + end) / 2;

            if (arr[mid] < arr[end])
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
    }
    else if (sub1 < 0 && sub2 < 0)
    {
        cout << "array is sorted decreasingly." << endl;
        reverse_sorted = true;

        while (start + 1 != end)
        {
            mid = (start + end) / 2;

            if (arr[mid] > arr[end])
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
    }
    else
    {
        int sub3 = arr[len - 1] - arr[0];

        if (sub3 < 0)
        {
            cout << "array is sorted increasingly." << endl;

            if (sub1 > 0)
            {
                cout << "breakage is between len-1 and len-2" << endl;
                start = len - 2;
                end = len - 1;
            }
            else
            {
                cout << "breakage is between 0 and 1" << endl;
                start = 0;
                end = 1;
            }
        }
        else
        {
            cout << "array is sorted decreasingly." << endl;
            reverse_sorted = true;

            if (sub1 < 0)
            {
                cout << "breakage is between len-1 and len-2" << endl;
                start = len - 2;
                end = len - 1;
            }
            else
            {
                cout << "breakage is between 0 and 1" << endl;
                start = 0;
                end = 1;
            }
        }
    }

    cout << start << endl;
    cout << end << endl;

    cout << "array 1" << endl;
    print_arr(arr, start + 1);
    cout << "performing binary search in array 1" << endl;
    int ans = binary_search(arr, start + 1, key, reverse_sorted);

    if (ans == -1)
    {
        cout << "array 2" << endl;
        print_arr(arr + end, len - end);
        cout << "performing binary search in array 2" << endl;
        return binary_search(arr + end, len - end, key, reverse_sorted);
    }
    else
    {
        return ans;
    }
}

int find_key_shabbir(int *arr, int len, int key)
    {

        int lo = 0;
        int hi = len - 1; 
        int idx = -1;
        int mid;
        int flag;
        key >= arr[0] ? flag = 1 : flag = 0;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] == key)
            {
                idx = mid;
                hi = mid - 1;
                continue;
            }
            if (flag)
            {
                if (arr[mid] > key)
                {
                    hi = mid - 1;
                }
                else
                {
                    if (arr[mid] < arr[lo])
                        hi = mid - 1;
                    else
                        lo = mid + 1;
                }
            }
            else
            {
                if (arr[mid] > key)
                {
                    if (arr[mid] > arr[hi])
                        lo = mid + 1;
                    else
                        hi = mid - 1;
                }
                else
                {
                    lo = mid + 1;
                }
            }
        }
        return idx;
    }

int find_key_sorted_rotated_array_best(int* arr, int len, int key){

    /* for array that was previously increasingly sorted */

    int start = 0;
    int end = len-1;
    int mid;
    int ans = -1;

    while(start <= end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[start] <= arr[mid]){
            if (key>=arr[start] && key < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else{
            if(key > arr[mid] && key <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return ans;
}

int find_key_sorted_rotated_array_for_duplicates(int* arr, int len, int key){

    /* for array that was previously increasingly sorted */

    int start = 0;
    int end = len-1;
    int mid;
    int ans = -1;

    

    while(start <= end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[start] = arr[mid]){
            
            return ans;
        }
        else if(arr[start] < arr[mid]){
            if (key>=arr[start] && key < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else{
            if(key > arr[mid] && key <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return ans;
}


int main()
{
    //vector<int> nums {2, 3, 4, 5, 1};

    int len = 19;
    int arr[len] = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};

    int key_index = find_key_sorted_rotated_array_for_duplicates(arr, len, 2);

    cout << "key's index = " << key_index;

    return 0;
}
