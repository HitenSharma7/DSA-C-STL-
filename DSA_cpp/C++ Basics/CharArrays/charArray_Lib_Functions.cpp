#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char actual[50]="Hiten";
    char ans[50];
    char a[50]="Chacha";
    char b[50]="Chachi";
    strcpy(ans,actual);//It copies 
    if(strcmp(a,b)==0){
        cout<<"Char arrays are same";

    }
    else{
        cout<<"Char arrays are not same";
    }
    
    // cout<<ans<<endl;
    
}