#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main (){
    int arr[]={1,2,3,4,5,7,-5};
    //Finding an element in an array

    cout<<"Enter the element you want to search:"<<endl;
    int key;
    cin>>key;

    bool element_found=search(arr,10,key);
    if(element_found){
        cout<<"The Element is present";
    }
    else{
        cout<<"Element is Absent";
    }

}