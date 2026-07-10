#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printDouble(int a){
    cout<<2*a<<" ";
}

bool check_Even(int a){
    return a%2==0;
}
int main (){
    vector<int> arr(5);
    arr[0]=90;
    arr[1]=4540;
    arr[2]=544548540;
    arr[3]=4;
    arr[4]=7;

    sort(arr.begin(),arr.end());

for(int i:arr){
    cout<<i<<" ";
    
}
    //   auto it=find_if(arr.begin(),arr.end(),check_Even);
    // cout<<*it<<endl;
    // for_each(arr.begin(),arr.end(),printDouble);
   int target=69;
//    auto it=find(arr.begin(),arr.end(),target);
//     cout<<*it<<endl;
}