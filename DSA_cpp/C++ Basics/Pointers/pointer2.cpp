#include<iostream>
using namespace std;
int main (){
    int a=10;
    int *ptr=&a;//Pointer
    int **parptr=&ptr; //Pointer to pointer
    cout<<parptr<<endl;
    cout<<&ptr<<endl;

    float f=5.2;
    float *ptr1=&f;

    cout<<*(&f)<<endl;//Dereference operator is an operator that returns the value at a particular address...

    int *ptr2=NULL;//Null pointer,It cant be dereferenced..
    int arr[]={1,2,3,4,5,6};//Arr is a constant pointer ,it cant be modified....
    
}