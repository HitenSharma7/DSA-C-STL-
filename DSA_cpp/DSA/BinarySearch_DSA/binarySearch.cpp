#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int st=0,end=n-1,mid;
    int tar=5;
    while(st<=end){
        mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
          end=mid-1;
        }
        else{
            cout<<mid<<endl;
            return mid;
        }
    }
    return -1;
}