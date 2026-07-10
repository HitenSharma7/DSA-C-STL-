#include <iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int index=0;index<=9;index++){
        sum=sum+arr[index];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
    return 0;
}