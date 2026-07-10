#include<iostream>
using namespace std;
int main(){
    //FOR LOOP:
    //The for loop is a control flow statement that allows code to be executed repeatedly based on a given boolean condition. It consists of three parts: initialization, condition, and increment/decrement.

    //The for loop is best suited when the number of iterations is known beforehand. It provides a concise syntax for iterating over a range of values or a collection.

    //The for loop is ideal for scenarios where you need to execute a block of code a specific number of times, such as iterating through an array or performing a task a certain number of times.

    //Practical Considerations
    //Choosing a Loop:

    //Use a for loop when the number of iterations is predetermined.
    //Opt for a while loop when you require more flexibility or when iteration depends on dynamic conditions or inputs.
    //Loop Infinite Caution:

    //Be wary of infinite loops by ensuring conditions in while loops will eventually become false, or that for loops have a reachable exit.

    for(int i=1;i<=30;i++)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}