#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


int a=15;
int b=45;
cout<<"Max of a and b is :"<<max(a,b)<<endl;

    vector<int>arr(6);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    arr[5]=60;

    int target =40;
   bool it = binary_search(arr.begin(),arr.end(),target);
  cout<<it<<endl;


   auto it1 =upper_bound(arr.begin(),arr.end(),30);
   cout<<*it1<<endl;

   auto it2=lower_bound(arr.begin(),arr.end(),50);
   cout<<*it2<<endl;
}