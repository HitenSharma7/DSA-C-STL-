#include <iostream >
using namespace std;
int main(){
    int budget;
    cout<<"Enter your budget: ";
    cin>>budget;

    if(budget>=150000)
    {
        cout<<"I can buy Tata Sierra."<<endl;
    }
    else if(budget>=500000)
    {
        cout<<"I can buy Maruti Suzuki Vitara Brezza."<<endl;
    }
    else
    {
        cout<<"I cannot buy my preferred car."<<endl;
    }
    return 0;
}