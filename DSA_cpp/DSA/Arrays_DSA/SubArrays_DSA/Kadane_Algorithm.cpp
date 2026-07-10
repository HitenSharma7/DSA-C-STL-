#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int currSum=0;
    int maxSum=INT_MIN;  //INT MIN matlab -infinity 
    int n=7;
    for(int i=0;i<n;i++){
        currSum=currSum+arr[i];
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
            //Kadane algo assumes that if your current sum is -ve you should reset it into 0........

        }
    }

    cout<<"Maximum Subarray sum is yo:"<<maxSum;
}
