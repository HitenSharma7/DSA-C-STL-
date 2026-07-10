#include<iostream >
using namespace std; 
int main (){
    for(int i=1;i<=8;i++)
    {
        if(i==4){
            break; //The break statement is used to exit from a loop or switch case prematurely. When the break statement is encountered, the control flow immediately exits the loop or switch case, and the program continues with the next statement after the loop or switch case.

            //In this example, when i is equal to 4, the break statement will be executed, causing the loop to terminate immediately. As a result, the output will include only the numbers 1, 2, and 3, and the loop will not continue to execute for values of i greater than 4.
        }
        cout<<i<<""<<endl;
    }
    return 0;
}