#include<iostream>
using namespace std;
int main(){
    char str1[12];
    cout<<"Enter your string:";
    cin.getline(str1,12,'$');
    cout<<"Output:"<<str1<<endl;
    for(char ch :str1){
        cout<<ch<<" ";
    }
 cout<<endl;


 string str="Hiten Sharma";//It is Dynamic 
 str="Hitennn!!";

 char chArr[10]={'H','i','t','m','a','n','\0'};//It cant be changed ....
//  chArr="Laaleee";
 cout<<chArr;
cout<<"String is:"<<str;
 return 0;
}
