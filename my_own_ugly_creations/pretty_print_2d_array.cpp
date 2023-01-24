#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

void print_2d_array(int* arr,int rows, int columns){

    /* The mystery lies here */
    _setmode(_fileno(stdout), _O_U16TEXT);

    int spacing = 1;
    int max = INT_MIN;
    /*find max*/
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            int num = *((arr+i*columns)+j);
            if(num > max){
                max = num;
            }
        }
    }

    /*find decimal_place of max and set spacing*/
    while(max/10 > 0){
        max /= 10;
        spacing ++;
    }

    //wcout<<"spacing = "<<spacing<<endl;

    /* print column headers */
    wcout<<"   ";
    for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
    for (int i = 0; i < columns; i++)
    {
        
        wcout<<L"\u2502"<<"["<<i<<"]";

        for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
    }
    wcout<<L"\u2502";
    wcout<<endl;


    /* for each row, print [row] and row elements */

    for(int i=0;i<rows;i++){
        
        /* line above [row] and row elements */
        for(int k=0; k<columns+1; k++){
            for(int l=0; l<3+spacing-1; l++){
                wcout<<L"\u2500";
            }
            wcout<<L"\u253c";
        }
        wcout<<L"\u2500";
        wcout<<endl;

        /* print[row] and row elements */
        
        for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
        wcout<<"["<<i<<"]";

        for(int j=0; j<columns;j++){

            wcout<<L"\u2502"<<" ";

            int num = *((arr+i*columns)+j);

            wcout<<num;

            int decimal_places = 0;
            while(num/10 > 0){
                num /= 10;
                decimal_places ++;
            }

            for(int j=1;j<=spacing-decimal_places;j++){
                wcout<<" ";
            }
        }
        wcout<<L"\u2502";
        wcout<<endl;
    }

    /* print end line for posterity */
    
    for(int k=0; k<columns+1; k++){
        for(int l=0; l<3+spacing-1; l++){
            wcout<<L"\u2500";
        }
        wcout<<L"\u253c";
    }
    wcout<<L"\u2500";
    wcout<<endl<<endl;

    _setmode(_fileno(stdout), _O_TEXT);
}

void print_2d_array(vector<vector<int>> &arr){
    int rows = arr.size();
    int columns = arr[0].size();

    /* The mystery lies here */
    _setmode(_fileno(stdout), _O_U16TEXT);

    int spacing = 1;
    int max = INT_MIN;
    /*find max*/
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            int num = *((arr+i*columns)+j);
            if(num > max){
                max = num;
            }
        }
    }

    /*find decimal_place of max and set spacing*/
    while(max/10 > 0){
        max /= 10;
        spacing ++;
    }

    //wcout<<"spacing = "<<spacing<<endl;

    /* print column headers */
    wcout<<"   ";
    for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
    for (int i = 0; i < columns; i++)
    {
        
        wcout<<L"\u2502"<<"["<<i<<"]";

        for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
    }
    wcout<<L"\u2502";
    wcout<<endl;


    /* for each row, print [row] and row elements */

    for(int i=0;i<rows;i++){
        
        /* line above [row] and row elements */
        for(int k=0; k<columns+1; k++){
            for(int l=0; l<3+spacing-1; l++){
                wcout<<L"\u2500";
            }
            wcout<<L"\u253c";
        }
        wcout<<L"\u2500";
        wcout<<endl;

        /* print[row] and row elements */
        
        for(int j=1;j<spacing;j++){
            wcout<<" ";
        }
        wcout<<"["<<i<<"]";

        for(int j=0; j<columns;j++){

            wcout<<L"\u2502"<<" ";

            int num = *((arr+i*columns)+j);

            wcout<<num;

            int decimal_places = 0;
            while(num/10 > 0){
                num /= 10;
                decimal_places ++;
            }

            for(int j=1;j<=spacing-decimal_places;j++){
                wcout<<" ";
            }
        }
        wcout<<L"\u2502";
        wcout<<endl;
    }

    /* print end line for posterity */
    
    for(int k=0; k<columns+1; k++){
        for(int l=0; l<3+spacing-1; l++){
            wcout<<L"\u2500";
        }
        wcout<<L"\u253c";
    }
    wcout<<L"\u2500";
    wcout<<endl<<endl;

    _setmode(_fileno(stdout), _O_TEXT);
}