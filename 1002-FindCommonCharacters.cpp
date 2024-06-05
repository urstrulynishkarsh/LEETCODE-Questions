#include<string>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<string> FindCommonCharacter(vector<string> &words)
{
    vector<string> ans;
    vector<int> common(26,INT_MAX);
    for(auto str:words)
    {
        vector<int> count(26,0);
        for(auto ch:str)
        {
            count[ch-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            common[i]=min(common[i],count[i]);
        }
    }
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<common[i];j++)
        {
            ans.push_back(string(1,i+'a'));
            // cout<<string(1,i+'a')<<" ";
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<string> words(n);
    cout<<"Enter the element in the string: ";
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    vector<string> result=FindCommonCharacter(words);
    for(auto str:result)
    {
        cout<<str<<" ";
    }
}

