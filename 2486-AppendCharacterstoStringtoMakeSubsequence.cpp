#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int appendCharacters(string str1,string str2)
{
    int i=0;
    int j=0;
    while(i<str1.length() && j<str2.length())
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
        i++;
    }
    return str2.length()-j;
}

int main(){
    string str1;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string: ";
    getline(cin,str2);

    cout<<appendCharacters(str1,str2);

}