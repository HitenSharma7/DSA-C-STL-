#include<iostream>
#include<list>
using namespace std;
int main (){
     list <int> myList;
     myList.push_front(20);
     myList.push_front(40);
     myList.push_front(60);
     myList.push_front(80);
     myList.push_front(100);
     myList.push_back(60);
    //  myList.pop_back();
     list<int>::iterator it= myList.begin();
     cout<<"Before removing"<<endl;
     while(it!=myList.end())  
        {
          cout<<*it<<" "<<endl;
         it++;
        }
     cout<<endl;


     myList.remove(60);//removes the selected elemnt from all places
     cout<<"After Removing"<<endl;
     
list<int>::iterator it2=myList.begin();
while(it2!=myList.end()){
  cout<<*it2<<" "<<endl;
  it2++;
}

// cout<<myList.size()<<endl;;
// myList.clear();
// cout<<myList.size()<<endl;
// if(myList.empty()==true){
//     cout<<"List is empty";
// }
// else{
//     cout<<"List is not empty";
// }
}