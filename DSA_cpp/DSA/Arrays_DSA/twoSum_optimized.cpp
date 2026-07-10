#include<iostream>
#include<vector>
using namespace std;
vector<int>TwoSum(vector <int> nums,int target){
int i=0;
int n=nums.size();
int j=n-1;
vector<int> ans;
while(i<j){
    int pairSum=nums[i]+nums[j];
    if(pairSum<target){
      i++;
    }
    else if(pairSum>target){
     j--;
    }
    else{
     ans.push_back(i);
     ans.push_back(j);
     return ans ;
    }
   
}
 return ans;
}

int main(){
  vector<int>nums={2,7,11,15};
 TwoSum(nums,9);
}