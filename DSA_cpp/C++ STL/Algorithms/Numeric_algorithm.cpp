#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main (){ 
vector<int> arr(5);
arr[0]=5;
arr[1]=10;
arr[2]=15;
arr[3]=20;
arr[4]=25;

int totalSum=accumulate(arr.begin(),arr.end(),0);

cout<<"Sum is:"<<totalSum<<endl;

vector<int> first(5);
vector<int> second(5);

first.push_back(2);
first.push_back(4);
first.push_back(6);
first.push_back(8);
first.push_back(10);

second.push_back(3);
second.push_back(6);
second.push_back(9);
second.push_back(12);
second.push_back(15);

int totalProduct=inner_product(first.begin(),first.end(),second.begin(),1);
cout<<"Product is:"<<totalProduct<<endl;

vector<int> ps(5);

ps[0]=1;
ps[1]=2;
ps[2]=3;
ps[3]=4;
ps[4]=5;
vector<int> result(ps.size());

partial_sum(ps.begin(),ps.end(),result.begin());
for(int i:result){
    cout<<i<<" ";
}
cout<<endl;

vector <int> comp(5);
iota(comp.begin(),comp.end(),69);
for(int i:comp){
    cout<<i<<" ";
}
}