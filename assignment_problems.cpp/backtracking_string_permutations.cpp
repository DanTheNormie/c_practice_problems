#include<bits/stdc++.h>
using namespace std;

int find_numbers(int x,string s,int ans){
    if(s.length()==x){
        //cout<<s<<endl;
        return ans+1;
    } 

    s += 'a';
    ans = find_numbers(x, s, ans);
    s.pop_back();
    if (s.length() == 0 || (s.length() > 0 && s[s.length() - 1] != 'b')){
        s += 'b';
        ans = find_numbers(x, s, ans);
    }

    return ans;
}

int main() {
	cout<<find_numbers(4,"",0)<<endl;
	
	return 0;
}