#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<limits.h>
#include<cstring>
using namespace std;
int GCD(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        if(b==0)
        {
            return a;
        }
       while(a>0 && b>0)
        {
            if(a>b)
            {
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a==0?b:a;

    }
    string gcdOfStrings(string str1, string str2) {
        return (str1+str2==str2+str1)?str1.substr(0,GCD(str1.length(),str2.length())):"";
    }
int main(){
    string word1;
    cout<<"Enter word1: ";
    getline(cin,word1);
    string word2;
    cout<<"Enter word2: ";
    getline(cin,word2);
    cout<<gcdOfStrings(word1,word2);

}