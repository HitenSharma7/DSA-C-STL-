#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr(6);
    arr[0]=10;
    arr[1]=12;
    arr[2]=15;
    arr[3]=19;
    arr[4]=45;
    arr[5]=9;
    //Right Rotating
    cout<<"Before Rotating"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
rotate(arr.begin(),arr.begin()+3,arr.end());
   cout<<"After Rotating"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
      cout<<endl;
      cout<<endl;

     //Left Rotating
      cout<<"Before Rotating"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
rotate(arr.begin(),arr.end()-3,arr.end());
   cout<<"After Rotating"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }

}