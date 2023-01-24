#include<bits/stdc++.h>
using namespace std;

int find(string s, int n){
    if(s.length()== n){
        cout<<s<<endl;
        return 1;
    }
    int ans = 0;
    if(s.length()>0){
        
        if(s[s.length()-1]!='1'){
            s+='1';
            ans+=find(s,n);
            s.pop_back();
            s+='0';
            ans+=find(s,n);
        }else{
            s+='0';
            ans+=find(s,n);
        }
    }else{
        s+='1';
        ans+=find(s,n);
        s.pop_back();
        s+='0';
        ans+=find(s,n);
    }
    return ans;
    
}

int main(){
    
    cout<<find("",3);

}