#include<bits/stdc++.h>
using namespace std;

void f(int n, char src, char dest, char a1, char a2){
    if(n==1) {
        cout<<"from "<<src<<" to "<<dest<<endl;
        return;
    }
    if(n<1) return;

    f(n-2,src,a2,a1,dest);
    f(1,src,a1,a2,dest);
    f(1,src,dest,a1,a2);
    f(1,a1,dest,src,a2);
    f(n-2,a2,dest,src,a1);
}

int main(void){

    f(4,'A','D','C','B');
}