#include<iostream>
#include<climits>
using namespace std;
int main (){
    //This is a Brute Force solution.....
    //O(n^2)
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSum=INT_MIN;
    int n=7;
    for(int st=0;st<n;st++){

        int currSum=0;

    for(int end=st;end<n;end++){
      currSum=currSum+arr[end];
       maxSum=max(maxSum,currSum);

        }
    }
    cout<<"Maximum Subarray sum is:"<<maxSum;
}