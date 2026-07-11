#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr,int n,int m,int maxPagesAllowed){
    int students=1; 
    int pages=0;
    for(int i=0;i<n;i++){
      if(arr[i]>maxPagesAllowed){
        return false;
      }
      if(pages+arr[i]<=maxPagesAllowed){
        pages+=arr[i];
      }
      else{
        students++;
        pages=arr[i];
      }
    }
    return students>m? false:true;

}
int allocateBooks(vector<int>&arr,int n,int m){
    int sum=0;
    if(m>n){
        return -1;
    }
    for(int i=0;i<n;i++){//Sum
        sum+=arr[i];
    }  
    int ans=-1;
        int st=0;
        int end=sum;
        int mid;
        while(st<=end){
         mid= st+(end-st)/2;
           if (isValid(arr, n, m, mid)) //If valid go to left
        {
            ans=mid;
            end=mid-1;
        }      
        else{//if not valid go to right
          st=mid+1;
        }
     }
     return ans;
    
}
int main(){
vector <int> arr={2,1,3,4};
int n=4,m=2;
cout<<allocateBooks(arr,n,m);
return 0;
}