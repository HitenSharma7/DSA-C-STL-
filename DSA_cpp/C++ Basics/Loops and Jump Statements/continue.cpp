#include<iostream>
using namespace std;
int main (){
    for(int i=1;i<=10;i++)
    {
        if(i==6){
            continue; //The continue statement is used to skip the current iteration of a loop and move to the next iteration. When the continue statement is encountered, the remaining code within the loop for that iteration is skipped, and the loop proceeds to the next iteration.

            //In this example, when i is equal to 6, the continue statement will be executed, causing the loop to skip printing the number 6 and move on to the next iteration (i=7). As a result, the output will include all numbers from 1 to 15 except for 6.
        }
        cout<<i<<" "<<endl;
    }
    return 0;
}