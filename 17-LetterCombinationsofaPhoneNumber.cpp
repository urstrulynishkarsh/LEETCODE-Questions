#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

void LetterCombinationPhoneNumber(string &str, string output,vector<string> &result,int index, vector<string> &mapping)
{
    if(index>=str.length())
    {
        result.push_back(output);
        return;
    }
    int val=str[index]-'0';
    string curr=mapping[val];
    for(int i=0;i<curr.length();i++)
    {
        char ch=curr[i];
        LetterCombinationPhoneNumber(str,output+ch,result,index+1,mapping);
    }
}

int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    int index=0;
    string output;
    vector<string> result;
    vector<string>  mapping(10);
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    if(str.length()==0)
    {
        cout<<" ";
    }
    LetterCombinationPhoneNumber(str,output,result,index,mapping);
    for(string val: result)
    {
        cout<<val<<" ";
    }
    
}