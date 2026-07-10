#include<iostream >
using namespace std;
int main (){
    //WHILE LOOP:
    //The while loop is a control flow statement that allows code to be executed repeatedly based on
    
// The while loop is best suited when the condition is evaluated before the code block is executed and is ideal when the number of iterations is not known beforehand.

// The while loop checks its condition before each iteration, making it proficient in scenarios where the loop could have zero iterations.

// Practical Considerations
// Choosing a Loop:

// Use a for loop when the number of iterations is predetermined.
// Opt for a while loop when you require more flexibility or when iteration depends on dynamic conditions or inputs.
// Loop Infinite Caution:

// Be wary of infinite loops by ensuring conditions in while loops will eventually become false, or that for loops have a reachable exit.

  int i=1;
  while(i<=5){
    cout<<i<<""<<endl;
    i++;
  }
    return 0;
}