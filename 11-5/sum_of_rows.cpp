#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

void print_2d_array(int* arr,int rows, int columns){

    /* The mystery lies here */
    _setmode(_fileno(stdout), _O_U16TEXT);

    int spacing = 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            int num = *((arr+i*columns)+j);
            int decimal_places = 1;
            while(num/10 > 0){
                num /= 10;
                decimal_places ++;
                if(decimal_places > spacing){
                    spacing = decimal_places;
                }
            }
        }
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

    /* print end line for looks */
    
    for(int k=0; k<columns+1; k++){
            for(int l=0; l<3+spacing-1; l++){
                wcout<<L"\u2500";
            }
            wcout<<L"\u253c";
        }
        wcout<<L"\u2500";
        wcout<<endl;
}


 void sum_of_row(int* arr, int rows, int columns){
    int res[columns] = {0};

    int sum;
    for(int i =0; i < rows; i++ ){
        sum = 0;
        for(int j=0; j<columns; j++){
            sum += *((arr+i*columns)+j);
        }
        res[i] = sum;
    }

    print_2d_array(res,1,columns);

} 


int main(){

    
       /*  int row, col;
        cin>>row>>col;

        int arr[row][col];
        for(int i=0; i<row;i++){
            for (int j = 0; j < col; j++){
                cin>>arr[i][j];
            }
        } 
     */


    int row=3,col=3;
    int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};

    sum_of_row((int*)arr,row,col);

    return 0;
}