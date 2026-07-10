#include<iostream>
using namespace std;
int getLength(char arr[]){
int count=0;
int index=0;
while(arr[index]!='\0'){
 count++;
 index++;
}
return count;
}

void concat(char a[],char b[]){
   int aIndex=getLength(a);
   int bIndex=0;

   while(b[bIndex]!='\0'){
    a[aIndex]=b[bIndex];
    aIndex++;
    bIndex++;
    //This was copying a string
   }
   //This is ending a string
    a[aIndex]='\0';

}

void copyArray(char ActualArr[],char CopyArr[]){
    int aIndex=0;
    int bIndex=0;
    while(ActualArr[aIndex]!='\0'){
        CopyArr[bIndex]=ActualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    CopyArr[bIndex]='\0';
}

bool compareArray(char a[],char b[]){
    int aIndex=0;
    int bIndex=0;
    int aLength=getLength(a);
    while (a[aIndex]!='\0' && b[bIndex] !='\0' ){
        if(a[aIndex]!=b[bIndex]){
            return false;
        }
        else{
           aIndex++;
        bIndex++;
        }
        
    }
return true;
}
int main(){
    //Finding Length of char array
//     char arr[]="Hiten Sharma";
// cout<<getLength(arr)<<endl;

//Concating an array
// char a[50]="Champak";
// char b[50]="Chacha";

// concat(a,b);
// cout<<"Concated Array is :"<<a<<endl;

//Copying an Array
// char actual[50]="Aalu Gobhi";
// char copied[50];
// copyArray(actual,copied);
// cout<<"Copied Array is:"<<copied<<endl;


//Comparing Arrays
char a[50]="Hiten";
char b[50]="Hiten";

cout<<compareArray(a,b)<<endl;

}