#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map <string,string> table;
 //insertion
 table["in"]="India";
 table["au"]="Australia";
 table["us"]="USA";

 table.insert(make_pair("br","Brazil"));
 table.insert(make_pair("pk","Pakistan"));
 table.insert(make_pair("bd","Bangladesh"));

 pair <string,string> p;
 p.first="en";
 p.second="England";
 table.insert(p);
 unordered_map<string,string>::iterator it=table.begin();
while(it!=table.end()){
    pair<string,string> p=*it;
    cout<<p.first<<" "<<p.second<<endl;
    it++;
}

 cout<<table.at("in")<<endl;
 cout<<table.size()<<endl;
}