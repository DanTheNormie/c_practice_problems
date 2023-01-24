#include <bits/stdc++.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

void print_2D_array(int* arr,int rows, int columns){

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


void print_2D_array_diagonally_zigzag(vector<vector<int>> arr, int row, int col){
    
    int r = 0;
    int c = 0;
    
    for(int i=0; i<((row+col)-1); i++){
        

        if(!(i%2==0)){

            if(i>row-1){
                r = row-1;
                c = i-(row-1);
            }else{
                r = i;
                c = 0;
            } 

            while (true){
                if(r < 0 || c < 0 || c > col-1 || r > row-1){
                    break;
                }
                //cout<<"("<<r<<","<<c<<") ";
                cout<<arr[r][c]<<" ";
                r--;
                c++;
            }
            cout<<endl;

        }else{

            if(i>col-1){
                c = col-1;
                r = i-c;
            }else{
                r = 0;
                c = i;
            }

            while (true){
                if(r < 0 || c < 0 || c > col-1 || r > row-1){
                    break;
                }
                //cout<<"("<<r<<","<<c<<") ";
                cout<<arr[r][c]<<" ";
                r++;
                c--;
            }
            cout<<endl;

        }

        
    }

}

void print_2D_array_diagonally_zigzag_2(vector<vector<int>> arr, int row, int col){
    
    int r = 0;
    int c = 0;
    
    for(int i=0; i<((row+col)-1); i++){

        if(!(i%2==0)){

            if(i>col-1){
                c = col-1;
                r = i-c;
            }else{
                r = 0;
                c = i;
            }
            while (r > -1 && c > -1 && c < col && r < row){
                //cout<<"("<<r<<","<<c<<") ";
                cout<<arr[r][c]<<" ";
                r++;
                c--;
            }

        }else{
            
            if(i>row-1){
                r = row-1;
                c = i-(row-1);
            }else{
                r = i;
                c = 0;
            } 
            while (r > -1 && c > -1 && c < col && r < row){
                //cout<<"("<<r<<","<<c<<") ";
                cout<<arr[r][c]<<" ";
                r--;
                c++;
            }
        }
        cout<<endl;
        
    }

}



void print_2D_array_diagonally_l_r_b_t(int* arr, int row, int col){

    int r = 0;
    int c = 0;
    
    for(int i=0; i<((row+col)-1); i++){
        
        if(i>row-1){
            r = row-1;
            c = i-(row-1);
        }else{
            r = i;
            c = 0;
        }

        while (true){
            if(r < 0 || c > col-1){
                break;
            }
            cout<<"("<<r<<","<<c<<") ";
            r--;
            c++;
        }
        cout<<endl;
    }
}

/* void swap_adjacent_elements(int* arr, int len){

    for(int i=1;i<len;i+=2){
        swap(*(arr+i), *(arr+i-1));
    }

} */

/* void swap_adjacent_elements(int* arr, int len){

    for(int i=0;i<len-1;i+=2){
        swap(*(arr+i), *(arr+i+1));
    }

} */

void swap_adjacent_elements(int* arr, int len){

    for(int i=0;i<len;i+=2){
        if(i+1 < len)
            swap(*(arr+i), *(arr+i+1));
    }

}

bool find_element_in_array(int* arr, int len, int key){
    for(int i=0; i<len; i++){
        if(arr[i] == key){
            return true;
        }
    }   
    return false;
}

int main(){

    int row=3,col=3;
    vector<vector<int>> arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };

    print_2D_array_diagonally_zigzag_2(arr, row, col);

    //swap_adjacent_elements((int*)arr1,len);

    /* int len = 6;
    int arr1[len] = {1,2,3,4,5,6};
    
    if(find_element_in_array((int*)arr, len,8)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    print_2D_array((int*)arr1, 1, len); */

}