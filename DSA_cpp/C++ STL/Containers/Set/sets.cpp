#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main (){
set<int> s;
s.insert(122);
s.insert(22);
s.insert(12);
s.insert(1);
s.insert(5);
s.insert(9);
set<int>::iterator it=s.begin();

while(it!=s.end()){
    cout<<*it<<" "<<endl;
    it++;
}
s.clear();
if(s.empty()==true){
    cout<<"Set is empty"<<endl;
}
else{
    cout<<"Set is not empty";

    s.size();
}
}