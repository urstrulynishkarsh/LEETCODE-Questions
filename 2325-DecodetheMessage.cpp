#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<unordered_map>
using namespace std;

string decodeMessage(string key, string message) {
        unordered_map<char,char> mp;
        char start='a';
        int index=0;
        char space=' ';
        mp[space]=space;
        while(start<='z' && index<key.length())
        {
            char keycurrchar=key[index];

            if(mp.find(keycurrchar)!=mp.end())
            {
                index++;
            }
            else{
                mp[keycurrchar]=start;
                start++;
                index++;
            }
        }
        string ans;
        for(int i=0;i<message.length();i++)
        {
            char msgchar=message[i];
            char realchar=mp[msgchar];
            ans.push_back(realchar);
        }
        return ans;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    string part;
    cout<<"Enter the part string: ";
     getline(cin,part);

    cout<<decodeMessage(str,part);
}