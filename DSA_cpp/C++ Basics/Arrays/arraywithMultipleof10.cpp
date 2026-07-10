#include<iostream>
using namespace std;


void PopulateArray(int arr[],int size){
    for(int index=0;index<=size-1;index++){
        arr[index]= (index+1)*10;
    }
}
void printMultiplesOf10(int arr[], int size) {
for(int index=0;index<=size-1;index++){
  cout<<arr[index]<<" ";
}
}
int main(){
    int arr[10];
    int size=10;
    PopulateArray(arr,size);
    printMultiplesOf10(arr,size);
    return 0;
}
