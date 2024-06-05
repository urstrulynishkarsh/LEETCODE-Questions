#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cstring>
using namespace std;

int LengthOfLastWord(string &str)
{
    int count=0;
    int j=str.length()-1;
    while(j>=0 && str[j]==' ')
    {
        j--;
    }
    while(j>=0 && str[j]!=' ')
    {
        count++;
        j--;
    }
    return count;

}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<LengthOfLastWord(str);
}