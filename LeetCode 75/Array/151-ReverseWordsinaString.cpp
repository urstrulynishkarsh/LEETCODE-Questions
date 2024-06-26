#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<limits.h>
#include<cstring>
using namespace std;

string reverseWords(string s) {
        vector<string> words;
        string temp;
        for(char ch:s)
        {
            if(ch==' '){
                if(!temp.empty())
                {
                    words.push_back(temp);
                    temp.clear();
                }
            }
            else{
                temp.push_back(ch);
            }
        }
        if(!temp.empty())
        {
            words.push_back(temp);
            temp.clear();
        }
        reverse(words.begin(),words.end());
        for(string str:words)
        {
            temp+=str+" ";
        }
        if(!temp.empty())
        {
            temp.pop_back();
        }
        return temp;
    }
int main(){
    string word1;
    cout<<"Enter word1: ";
    getline(cin,word1);
  
    cout<<reverseWords(word1);

}