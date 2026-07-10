#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> myList1;
    list<int> myList2;
    myList1.push_back(1);
    myList1.push_back(2);
    myList1.push_back(3);
    myList1.push_back(4);
    myList1.push_back(5);

    myList2.push_back(10);
    myList2.push_back(20);
    myList2.push_back(30);
    myList2.push_back(40);
    myList2.push_back(50);
    myList2.swap(myList1);
    

    cout<<"List 1:"<<endl;
    for(int i:myList1){
      cout<<i<<endl;
    }

    cout<<"List 2:"<<endl;
    for(int i:myList2){
      cout<<i<<endl;
    }
}