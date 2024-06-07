#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        while(s.find(part)!=string::npos)
        {
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    string part;
    cout<<"Enter the part string: ";
     getline(cin,part);

    cout<<removeOccurrences(str,part);
}