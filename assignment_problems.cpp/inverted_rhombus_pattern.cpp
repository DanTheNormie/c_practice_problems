#include <bits/stdc++.h>

using namespace std;

void print_inverted_diamond()
{
    int n = 10;

    for (int j = 0; j < (n * 2 - 1); j++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < (n); i++)
    {

        for (int j = i; j < (n); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n - 1; i++)
    {

        for (int j = 1; j < i + 2; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < ((2 * n - 1) - (2 * i + 2)); j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i + 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int j = 0; j < (n * 2 - 1); j++)
    {
        cout << "*";
    }
    cout << endl;
}

void print_inverted_diamond_2(){
    int n = 3;
    
    for (int i = -1; i < (2*n - 2); i++){

        if(i == -1 || i == (2*n - 1)){
            for (int j = 0; j < (n * 2 - 1); j++){

                cout << "*";
            }
        }else{
            for (int j = 0; j < (2 * n - 1); j++){

                if ((i <= n-2)&&(j >= ((2 * n - 1) - (n + i)) && j <= ((2 * n - 1) - (n - i)))){
                    cout << " "; 
                }
                else if ((i > n-2)&&(j >= (((i+1) % (n)) + 2) && j <=  (2 * n - 1) - (((i+1) % (n)) + 3))){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}


void print_inverted_diamond_3(int n){

    for(int i=1;i<n;i++){
        
    }
}

int main()
{

    print_inverted_diamond_2();

    return 0;
}