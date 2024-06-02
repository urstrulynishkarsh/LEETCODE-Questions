#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;



int ScoreOfString(string &str)
{
    int result=0;
    for(int i=0;i<str.length()-1;i++)
    {
        result+=abs(str[i]-str[i+1]);
    }
    return result;
}


int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<ScoreOfString(str);

}