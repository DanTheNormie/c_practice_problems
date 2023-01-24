#include<bits/stdc++.h>
using namespace std;

/* string decimalToBinary(int n){
    
    string s = "";

    while(n){
        s+=(char)((n%2)+'0');
        n/=2;
    }

    return s;
} */

vector<int> decimalToBinary(int n){

    vector<int> v;

    while(n){
        v.push_back(n%2);
        n/=2;
    }
    reverse(v.begin(),v.end());
    return v;
}

int binaryToDecimal(string s){
    int ans =0,mult=1;

    for(int i=s.length()-1; i> -1; i--){
        ans += (s[i]-'0')*mult;
        mult*=2;
    }

    return ans;
}

string decToBinaryUsingRightShift(int n){
    string ans ="";

    while(n){
        ans += n&1;
        n>>1;
    }
    return ans;
}


string add2BinaryNumbers(string s1, string s2){

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    if(s1>s2) swap(s1,s2);

    string ans = "";
    
    int loop_length = max(s1.size(),s2.size())
    
    for(int i=0; i<loop_length; i++ ){
        if(i >= min(s1.size(),s2.size())){
            ans+=s1[i];
        }else{

        }
    }

}

int main(){

    string s;1
    cin >> s;

    binaryToDecimal(s);
    return 0;
}