#include<iostream>
using namespace std;
int main(){
   int a=10;
   float b=6.5;
   float result=a+b; // Implicit typecasting
   cout<<"The result of a+b is: "<<result<<endl;

   int c=20;
   float d=3.5;
   float result2=c-(int)d; // Implicit typecasting
   cout<<"The result of c-d is: "<<result2<<endl;
   return 0;
}