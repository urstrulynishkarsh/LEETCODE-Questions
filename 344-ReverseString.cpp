#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string ReverseString(string &str)
{
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        swap(str[i++],str[j--]);
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<ReverseString(str);
}