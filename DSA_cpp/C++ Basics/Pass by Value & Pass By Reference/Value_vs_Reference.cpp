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
solve(a);//Jab solve(a) call hota hai, to a ki copy function ke parameter a me jati hai.
cout<<"Inside Main"<<a<<endl;
}