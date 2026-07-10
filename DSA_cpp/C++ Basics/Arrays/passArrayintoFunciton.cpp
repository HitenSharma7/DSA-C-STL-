#include<iostream>
using namespace std;
void printArray(int arr[],int size){
for(int index=0;index<=size-1;index++){
 cout<<arr[index]<<" ";
}
}
int main (){
    int arr[]={10,20,30,40,50};
    int size=5;
    printArray(arr,size);
    return 0;
}