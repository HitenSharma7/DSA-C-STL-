#include<iostream>
using namespace std;
int main(){
//A 2D array is an array of arrays. It is also known as a matrix. It is a collection of data elements arranged in rows and columns. Each element in a 2D array can be accessed using two indices: one for the row and one for the column.

    //Initializing a 2D array
    //int arr[2][3]={{1,5,7},{2,6,8}};

    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //Accessing elements of a 2D array
    int row=3;
    int col=4;
    for(int row_index=0;row_index<row;row_index++)
    {
        for(int col_index=0;col_index<col;col_index++){
            cout<<arr[row_index] [col_index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}