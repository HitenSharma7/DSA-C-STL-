#include<iostream>
using namespace std;
void Print_Array(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void Swap_Alternate(int arr[],int n){
for(int i =0;i<n;i=i+2){
    if(i<n){
        swap(arr[i],arr[i+1]);
    }
}
}
int main(){
 int even[10]={4,5,6,7,8,14,54,78,99,100};
 int odd[5]={1,3,5,7,9};
 Swap_Alternate(even,10);
 Print_Array(even,10);
}