#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //Creation
    unordered_map <string,int> m;
    //Insertion

    //1 Method 1: make_pair()
    pair<string,int> p= make_pair("Hiten",1);
     m.insert(p);

    //2 Direct Pair Constructor
    pair <string,int > pair2("Arthur",2);
    m.insert(pair2);

    //3 Method 3: Using []
    m["John"]=3;
//For every key there will be unique entry.There will be updation but not duplication


//Searching the keys now 

cout<<m["Hiten"]<<endl;
cout<<m.at("Arthur")<<endl;

// cout<<m.at("Vaibhav")<<endl; //Out of bound because it doesnt exist

cout<<m["Vaibhav"]<<endl;

//To check presence of a value:
//1 if present , 0 if absent
cout<<m.count("Hiten")<<endl;

cout<<m.size()<<endl; //Size

//Now let's traverse it using iterator 

unordered_map<string,int> ::iterator it=m.begin();

while(it!=m.end()){
    cout<< it->first<<" "<<it->second<<endl;
    it++;
}

}