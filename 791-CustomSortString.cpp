#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<unordered_map>
using namespace std;

string str;

static bool cmp(char a,char b)
    {
        return str.find(a)<str.find(b);
    }
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    string part;
    cout<<"Enter the part string: ";
     getline(cin,part);

    cout<<customSortString(str,part);
}