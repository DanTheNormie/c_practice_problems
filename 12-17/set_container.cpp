#include<bits/stdc++.h>
using namespace std;


int main(void){

    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        
        s.insert(x);
        s.erase(3);

        vector<int> v{1,2,3,4,5,6};
        int arr[] = {1,2,3,4,5};
        set<int> s1(arr,arr+n);
        set<int> s2(v.begin(),v.end());


    }
}