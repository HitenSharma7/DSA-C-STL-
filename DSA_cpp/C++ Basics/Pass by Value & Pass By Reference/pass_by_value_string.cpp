#include<iostream>
#include<cstring>
using namespace std;
void solve(string str){
cout<<"Inside function"<<str<<endl;
str[0]='N';
cout<<"Inside function"<<str<<endl;
}
int main(){
    string str="Hiten";
    cout<<"Inside Main"<<str<<endl;
    solve(str);
    cout<<"Inside Main"<<str<<endl;

}