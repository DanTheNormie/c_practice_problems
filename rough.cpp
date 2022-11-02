#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string serialize_arr(int arr[],int length){
    ostringstream oss;

    std::string st = R"({"kind": {"grid": True},"rows": [{"columns": [{"content":")";
    std::string st2 =R"(, "tag": )";
    std::string st3 = R"(],}],})";

    oss<<st<<arr[0]<<st2<<0<<st3;

    return oss.str();
}

int main()
{
    int aloha = 10;
    
    int arr[] = {0,1,2,3};

    std::string visualize = "{\
        \"kind\":{ \"plotly\": true },\
        \"data\":[\
            { \"y\": [1, 2, 4, 8, 16] },\
            { \"y\": [14, 3, 0, 15, 10] }\
        ]\
    }";

     string noice = serialize_arr(arr,4);
    //(char[74])*noice._M_dataplus._M_p
    arr[0] = 4;

}