#include<iostream>
using namespace std;
void solve(int &a){
   cout<<"Inside Function"<<a<<endl;
   a++;
   cout<<"Inside Function"<<a<<endl;

}

int main (){
int a=50;
cout<<"inside main"<<a<<endl;
solve(a);// Jab solve(a) call hota hai, to function ko original variable ka reference milta hai.
// Function me ki gayi changes original variable par reflect hoti hain.
cout<<"Inside Main"<<a<<endl;
}