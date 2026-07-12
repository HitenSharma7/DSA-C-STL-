#include<iostream>
#include<string>
using namespace std;
int main (){
    string str1="Hiten";
    string str2="Sharma";

    string str3;
    str3=str1+" "+str2;//Concatenation
    cout<<str3<<endl;
    cout<<(str1==str2)<<endl;//Comparison

    string str4;
    cout<<"Enter a string:";
    getline(cin,str4);
    cout<<str4;

}