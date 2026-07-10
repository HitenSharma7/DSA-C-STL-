#include<iostream>
#include<vector>
using namespace std;
int main (){
 //Vector is just an array that can change its size dynamically during runtime
 
 //Creation of Vector 
 vector <int> marks;
 marks.push_back(10);
 marks.push_back(20);
 marks.push_back(30);
 marks.push_back(40);
 
 marks[0]=100;
 cout<<marks[0]<<endl;
 
 
//  cout<<"Size:"<<marks.size()<<endl;
// marks.pop_back();
// cout<<"Size:"<<marks.size()<<endl;
//  cout<<marks.front()<<endl;
//  cout<<marks.back()<<endl;
//  if(marks.empty()==true){
//     cout<<"Vector is empty";
//  }
//  else{
//     cout<<"Vector is not empty";
//  }


//  cout<<*(marks.begin())<<endl; //Begin funcn returns an iterator pointing to the starting point of vector






//  vector <int> miles(10);
//  vector <int> distance(15,0);


}