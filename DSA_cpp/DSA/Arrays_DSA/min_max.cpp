#include <iostream>
#include<climits>
using namespace std;

int countOdd(int arr[],int n){

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
       count++;
        }
    }
    return count;
   
}

int countEven(int arr[],int n){

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
       count++;
        }
    }
    return count;
   
}
int PrintSum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
 sum=sum+arr[i];
}
return sum;
}
int printMin(int arr[],int n){
    int min=INT_MAX;
     //Traversing and comparing ,Finding min
    for(int i =0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
    }
    return min;
}
int printMax(int arr[],int n){
    int max=INT_MIN;

    //Traversing and comparing ,Finding max
    for(int i =0;i<n;i++){
        if(arr[i]>max){
           max=arr[i];
        }
    }
    return max;
}

int main(){
    int size;
   cout << "Enter size: ";
cin >> size;

cout << "Size = " << size << endl;
    int arr[100];//Array
     
    //For filling the array for traversing
    for(int i=0; i<size;i++){
     cin>> arr[i];
    }

    int ans_max=printMax(arr,size);
    cout<<"Maximum Number:"<<ans_max<<endl;

    int ans_min=printMin(arr,size);
    cout<<"Minimum number:"<<ans_min<<endl;

    int ans_sum=PrintSum(arr,size);
    cout<<"Sum is:"<<ans_sum<<endl;
    int ans_even=countEven(arr,size);
    cout<<"Number of even elements are:"<<ans_even<<endl;

    int ans_Odd=countOdd(arr,size);
    cout<<"Number of odd elements are:"<<ans_Odd<<endl;
}