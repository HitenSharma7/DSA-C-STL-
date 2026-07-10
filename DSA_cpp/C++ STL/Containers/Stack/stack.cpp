#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st1;
    st1.push(4);
    st1.push(5);
    st1.push(6);
    st1.push(7);

    st1.pop();
    cout<<st1.size()<<endl;
    if(st1.empty()==true){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    // for(int i:st1){
    //     cout<<i;
    // }


}