#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void flipArray(int arr[],int size){
    for (int i=0;i<size;i++){
        if(arr[i]==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
}

int main(){
    int arr[]={1,0,1,0,0,1,0,1,1,0};
    int size=10;
    cout<<"Original Array: ";
    printArray(arr,size);
    cout<<endl;

    cout<<"Flipped Array: ";
    cout<<endl;
    flipArray(arr,size);
    printArray(arr,size);
   
}