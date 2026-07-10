#include<iostream>
using namespace std;
int main(){
    //Declaring an array
    int arr[10];
    int nrr[5];
    int arr1[5]={1,2,3,4,5};//Declaring and initializing an array

    int multipleof2[]={2,4,6,8,10,12,14,16,18,20};//Declaring and initializing an array without specifying the size

    //Accessing array elements
    // cout<<arr1[0]<<endl;
    // cout<<multipleof2[0]<<endl;

   for(int i=0;i<10;i++){
    cout<<multipleof2[i]<<endl;
   }
    return 0;
}