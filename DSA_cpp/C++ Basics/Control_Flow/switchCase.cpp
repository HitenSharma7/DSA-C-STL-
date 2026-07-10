#include<iostream>
using namespace std;   
int main(){
    int day;
    cout<<"Enter day";
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;    
        break;  
        case 4:
        cout<<"Thursday"<<endl; 
        break;
        case 5:
        cout<<"Friday"<<endl;   
        break;
        case 6:
        cout<<"Saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"Invalid day"<<endl;

}
//SOME IMPORTANT POINTS ABOUT SWITCH CASE:
    // We cant insert some things in switch case like double, float, string, bool etc. We can only insert int,enum and char in switch case.

    // We can also insert some expressions in switch case like 1+2, 3*4 etc. But we cant insert some expressions like 1.5+2.5, "Hello"+"World" etc.

   //Case values must be always unique. We cant insert same case value more than once in switch case. If we do that then it will give us error.

   //We must use break statement in switch case to terminate the switch case. If we dont use break statement then it will execute all the cases after the matched case until it finds a break statement or the end of the switch case. This is called fall through.
}