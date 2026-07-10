#include<iostream>
using namespace std;
void solve(int a){
   cout<<"Inside Function"<<a<<endl;
   a++;
   cout<<"Inside Function"<<a<<endl;

}

int main (){
int a=5;
cout<<"inside main"<<a<<endl;
solve(a);
cout<<"Inside Main"<<a<<endl;
}