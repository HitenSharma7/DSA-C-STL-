#include <iostream >
using namespace std;
int main(){
    int arr[5]={54,1,2,23,45};
      //Pura array print
    for(int i=0;i<5;i++){
     cout<<arr[i]<<" ";
    }
    cout<<endl;

    int brr[7]={1,3,5,7,9,11,13};
     //Custom printing,Means ki jaha tak meri marzi wahi tak print kruga 
    int n=4;
    for(int j=0;j<=n;j++){
        cout<<brr[j]<<" ";
    }
     

    //Given index n se 1 kam tak print 
    cout<<endl;
    for(int j=0;j<=n-1;j++){
        cout<<brr[j]<<" ";
    }
  cout<<endl;

    //Sum of elements in an array
    int hrr[]={5,1,2,5,6,1};
    int sum=0;
    for(int i=0;i<5;i++){
      sum=sum+hrr[i];
    
     }
     cout<<"Sum of Elements is :"<<sum<<endl;
   
}