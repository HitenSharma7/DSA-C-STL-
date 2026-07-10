#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ReverseArray(int brr[],int n){
int start=0;
int end=n-1;

while(start<=end){
    swap(brr[start],brr[end]);
    start++;
    end--;
    }
     }
void PrintArray(int brr[],int n){
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

}

int main(){
    vector<int>arr={4,7,5,89,6};
   reverse(arr.begin(),arr.end());
   int brr[120]={1,2,3,4,5,6};

   ReverseArray(brr,5);
   PrintArray(brr,5);

//   int size=5;
//    for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//    }
   
}