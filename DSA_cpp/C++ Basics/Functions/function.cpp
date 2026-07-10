#include<iostream>
using namespace std;

int sum(int a,int b)//function declaration
{ 
    //function definition
    int totalSum=a+b;
    return totalSum;
}//sum is a function which takes two integer parameters and returns their sum.
int main(){

int ans=sum(24,25);//function call
cout<<"The sum of 24 and 25 is: "<<ans<<endl;
return 0;

}