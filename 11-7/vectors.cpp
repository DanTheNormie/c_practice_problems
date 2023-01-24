#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> v; // declaration

    int size = 100;
    vector <int> v1(size); //declaration with size

    int value = 11;
    vector <int> v2(size,value); // declaration and initialization with value


    vector<int> vec;
    vec.size();     // returns no_of_elements (int)
    vec.capacity(); // returns size_of_array (int)

    vec.push_back(1); // appends 1 to vec
    
    vec.pop(); // deletes last element, decreases size, capacity stay

    vec.resize(10); // truncates vec if param < size else inits elements from size+1 to param with init value received in constructor  or 0.

    vec.clear(); //  erase all elements, size =0, capacity=0

    

    return 0;
}