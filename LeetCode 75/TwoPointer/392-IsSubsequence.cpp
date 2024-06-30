#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<limits.h>
#include<cstring>
using namespace std;

bool isSubsequence(string &word1, string &word2)
{
    int count=0;
    for(int i=0;i<word2.length();i++)
    {
        if(word1[count]==word2[i])
        {
            count++;
        }
    }
    if(word1.length()==count)
    {
        return true;
    }
    return false;
}
int main(){
    string word1;
    cout<<"Enter word1: ";
    getline(cin,word1);
    string word2;
    cout<<"Enter word2: ";
    getline(cin,word2);
    cout<<isSubsequence(word1,word2);

}