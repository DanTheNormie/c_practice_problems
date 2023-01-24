#include <bits/stdc++.h>
using namespace std;

int find_upper_bound(vector<int> &v, int key){
    int s = 0;
    int e = v.size()-1;
    if(v[e]==key) return e;

    while(s<e){
        int mid = (s+e)/2;
        if(v[mid]==key && v[mid+1]>key){
            return mid;
        }
        else if(v[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    if(v[s]==key)return s;
    else return -1;
}
int find_lower_bound(vector<int> &v, int key){
    int s = 0;
    int e = v.size()-1;
    if(v[s]==key) return s;
    while(s<e){
        int mid = (s+e)/2;
        if(v[mid]==key && v[mid-1]<key){
            return mid;
        }
        else if(v[mid]<key){
            s=mid+1;
            
        }
        else{
            e = mid-1;
        }
    }
    if(v[s]==key)return s;
    else return -1;
}

void find_meeting_place(vector<int> &v, int x){
    int start = find_lower_bound(v,x);
    int end = find_upper_bound(v,x);
    cout<<start<<" "<<end;
}
int main() {
    
    
    vector<int> v{-2,-1,-1,3,3,4,7,8,9,10,22};
    int n = v.size()-1;
    int x = 3;
    find_meeting_place(v,x);
}
