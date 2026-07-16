#include<iostream>
using namespace std;
class Solution {
public:
   bool IsAlphaNum(char ch){
        if((ch>='0'&& ch<='9')||(tolower(ch)>='a'&& tolower(ch)<='z')){
            return true;
        }
        return false;
   }
    bool isPalindrome(string str) {
        int n =str.length();
        int st=0;
        int end=n-1;
          while(st<end){
         if (!IsAlphaNum(str[st])){
          st++;
         continue;
        }
        if (!IsAlphaNum(str[end])){
           end--;
          continue;
        }
        if(tolower(str[st])!=tolower(str[end])){
            return false;
        }
        st++;
        end--;

      }
      return true;
    }
};