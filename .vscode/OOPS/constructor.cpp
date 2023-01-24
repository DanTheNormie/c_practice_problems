#include<bits/stdc++.h>
using namespace std;

class User2{
    int var3;
    int var4;
    public:
    User2(int var1, int var2){
        var3 = var1+2;
        var4 = var2+2;
    }
    noice(){
        cout<<var3<<endl;
        cout<<var4<<endl;
    }
};

class User{
    int var1 = 5;
    int var2 = 10;
    public:
    User2 u(var1,var2);
    void modify(){
        var1+=2;
        var2+=3;
    }
    void display(){
        cout<<var1<<endl;
        cout<<var2<<endl;
    }
};

int main(){
    User a;
    a.display();
    a.modify();
    User b(a);
    a.u.noice();
    b.u.noice();

    return 0;
}