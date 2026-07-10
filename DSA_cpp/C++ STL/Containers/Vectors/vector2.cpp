#include<iostream>
#include<vector>
using namespace std; 
int main (){
    vector <int> first;
    vector <int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    //Traversing by using an iterator 
    
    //Creating an iterator
    vector<int>::iterator it = first.begin();
 while(it !=first.end()){
    cout<<*it<<" "<<endl;
    it++;
 }

//     first.swap(second);

// cout<<"First Vector:"<<endl;
// for (int i:first){
//     cout<<i<<" "<<endl;
// }
// cout<<"Second Vector:"<<endl;
// for(int i:second){
    
//     cout<<i<<" "<<endl;
// }

}