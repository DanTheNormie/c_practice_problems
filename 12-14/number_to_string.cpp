#include<bits/stdc++.h>
using namespace std;

vector<string> num_map{"zero","one","two","three","four","five","six","seven","eight","nine"};

void print_num_as_words_rec(string &s,int i){
    if(i==-1) return;
    print_num_as_words_rec(s,i-1);

    cout<<num_map[s[i]-'0']<<" ";
}

int print_num(string &s,int i){
    if(i==s.length()-1) return s[i]-'0';

    return print_num(s,i+1) + (s[i]-'0');
}

int main(){
    string s = "1234";
    int ans = print_num(s,0);
    cout<<ans<<endl;

    return 0;
}