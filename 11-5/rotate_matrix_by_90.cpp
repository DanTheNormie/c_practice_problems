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

void MATRIX_DEREFERENCE(int* arr, int row, int col){

    /*  
            *( ( arr+i * col) +j ); 

                addr +i*col+j

          J|    0     |     1     |    2     |    3     |
        I__|__________|___________|__________|__________|
        0  |  addr    |  addr+1   |  addr+2  |  addr+3  |
        1  |  addr+4  |  addr+5   |  addr+6  |  addr+7  | 
        2  |  addr+8  |  addr+9  |  addr+10  |  addr+11 | 
        3  |  addr+12  |  addr+10  |  addr+11 |  addr+11 |
    */


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"(addr"<<" + "<<i<<" * "<<col<<" + "<<j<<" = "<<"addr + "<<i*col+j <<" ) | --- | ";
        }
        cout<<endl<<endl;
    }
}

void rotate_matrix_anitclockwise(int* arr, int row, int col){

    cout<<"Matrix received :"<<endl<<endl;
    print_2d_array(arr,row,col);

    for(int i=0; i<row; i++){
        int p1 = 0,p2=col-1;
        while(p1<p2){
            swap(*(arr+i*col+p1),*(arr+i*col+p2));
            p1++;
            p2--;
        }
    }

    cout<<"Matrix after reversing rows : "<<endl<<endl;

    print_2d_array(arr,row,col);

    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(*(arr+i*col+j),*(arr+j*col+i));
        }
    }

    cout<<"Matrix after transposing : "<<endl<<endl;

    print_2d_array(arr,row,col);

}

void rotate_matrix_clockwise(int* arr, int row, int col){

    
    print_2d_array((int*)arr,row,col);
    for(int i=0; i<col; i++){
        int p1 = i, p2 = (row*(col-1))+i;
        while(p1<p2){
            swap(*(arr+p1),*(arr+p2));
            p1 += col;
            p2 -= col;
        }
        
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(*(arr+i*col+j),*(arr+j*col+i));
        }
    }

    print_2d_array((int*)arr,row,col);
}
int main(){
    int row=4,col=4;
    int arr[row][col] ={{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};
    
    rotate_matrix_clockwise((int*)arr,row,col);

    return 0;
}