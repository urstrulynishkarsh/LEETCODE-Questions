#include<iostream>
#include<unordered_map>
using namespace std;

int ROMANTOINTEGER(string &str)
{
    int num=0;
    unordered_map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;

    for(int i=0;i<str.length();i++)
    {
        if(mp[str[i]]<mp[str[i+1]])
        {
            num-=mp[str[i]];
        }
        else{
            num+=mp[str[i]];
        }
    }
    return num;




}
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<ROMANTOINTEGER(str);
}