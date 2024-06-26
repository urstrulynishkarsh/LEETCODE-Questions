#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<limits.h>
#include<cstring>
using namespace std;

string mergeAlternately(string &word1,string &word2)
{
    string ans;
    int n=word1.length();
    int m=word2.length();
    int i=0;
    int j=0;
    while(i<n || j<m)
    {
        if(i<n)
        {
            ans.push_back(word1[i++]);
        }
        if(j<m)
        {
            ans.push_back(word2[j++]);
        }
    }
    return ans;
}
int main(){
    string word1;
    cout<<"Enter word1: ";
    getline(cin,word1);
    string word2;
    cout<<"Enter word2: ";
    getline(cin,word2);
    cout<<mergeAlternately(word1,word2);

}