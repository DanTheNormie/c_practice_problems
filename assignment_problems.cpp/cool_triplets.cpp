#include <bits/stdc++.h>
using namespace std;

int no_of_cool_triplets(vector<int> v){
    int ans = 0;
    vector<int> fc(1000,0);
    vector<int> unique;
    for(int i=0; i<v.size(); i++){
        if(fc[v[i]]==0){
            fc[v[i]]++;
            unique.push_back(v[i]);
        }
        else{
            fc[v[i]]++;
        }
    }

    int unique_size = unique.size();
    for(int i=0; i<unique_size-2; i++){
        for(int j=i+1; j<unique.size()-1; j++){
            for(int k=j+1; k<unique.size(); k++){
                if(unique[i]+unique[j]>unique[k] && unique[j]+unique[k]>unique[i] && unique[i]+unique[k]>unique[j]){
                   ans+= fc[unique[i]]*fc[unique[j]]*fc[unique[k]];
                } 
            }
        }
    }

    for(int i=0; i<unique_size-1; i++){
        for(int j=i+1; j<unique.size(); j++){
            if(fc[unique[i]]>1 && unique[i]*2>unique[j]){
                ans+=((fc[unique[i]]*fc[unique[i]]-1)/2)*fc[unique[j]];
            }
            if(fc[unique[j]]>1 && unique[j]*2>unique[i]){
                ans+=((fc[unique[j]]*fc[unique[j]]-1)/2)*fc[unique[i]];
            }
        }
    }

    for(int i=0; i<unique_size; i++){
        if(fc[unique[i]]>2){
            ans+= (fc[unique[i]] * (fc[unique[i]]-1) * (fc[unique[i]]-2))/6;
        }
    }
    
    return ans;
}

int cool_triplets(vector<int> &v){
    int ans = 0;
    sort(v.begin(),v.end());
    int arr_size = v.size();

    for(int i=arr_size-1; i>0; i--){
        for(int j=i-1; j>-1; j--){
            int k = j-1;
            while(v[i]+v[j]>v[k] && v[j]+v[k]>v[i] && v[i]+v[k]>v[j] && k > -1){
                ans++;
                k--;
            }
        }
    }

    return ans;
}

int main() {
    int n,input;
    //cin>>n;
    vector<int> v{2,4,2,3};
    // while(n--){
    //     cin>>input;
    //     v.push_back(input);
    // }

    cout<<cool_triplets(v);
}
