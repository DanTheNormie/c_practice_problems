#include<bits/stdc++.h>
using namespace std;

bool is_cb_number(int n){
    vector<int> cb{2,3,5,7,11,13,17,19,23,29};

    if(n==0 || n==1){
        return false;
    }

    if(n<30){
        for(int i=0; i<cb.size(); i++){
            if(n==cb[i]){
                return true;
            }
        }
        return false;
    }else{
        for(int i=0; i<cb.size(); i++){
            if(n%cb[i]==0){
                return false;
            }
        }
        return true;
    }
}


void calculate_cb_numbers(string s){
    int ans = 0;
    int start = 0;
    for(int i=0; i<s.length(); i++){ 
        int j = start,k=(i+1)-start;
        
        while(j<=i){
            int num = stoi(s.substr(j,k));
            if(is_cb_number(num)){
                cout<<num<<" CB"<<endl;
                ans++;
                start = i+1;
                break;
            }else{
                cout<<num<<" X"<<endl;
            }
            j++;
            k--;
        }
    }
    
    cout<<"ans == "<<ans<<endl;
}

int main() {

    calculate_cb_numbers("9137");

	return 0;
}