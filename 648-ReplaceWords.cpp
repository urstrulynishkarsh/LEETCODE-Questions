#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<set>
using namespace std;

string ReplaceWord(vector<string> &dictionary,string &sentence)
{
    set<string> st;
    for(auto str:dictionary)
    {
        st.insert(str);
    }
    vector<string> v;
    string ans;
    string temp;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]==' ')
        {
            v.push_back(temp);
            temp.clear();
        }
        else{
            temp.push_back(sentence[i]);
        }
    }
    v.push_back(temp);
    temp.clear();
    for(auto word:v)
    {
        // <= case important
        for(int i=0;i<=word.length();i++)
        {
            temp=word.substr(0,i);
            if(st.find(temp)!=st.end())
            {
                break;
            }
        }
        ans+=temp+" ";
        temp.clear();
    }
    ans.pop_back();
    return ans;
}

int main(){
    string sentence;
    cout<<"Enter the sentence: ";
    getline(cin,sentence);
    int n;
    cout<<"Enter the size of dictionary: ";
    cin>>n;
    vector<string> dictionary(n);
    cout<<"Enter the element in the dictionary: ";
    for(int i=0;i<n;i++)
    {
        cin>>dictionary[i];
    }
  

    cout<<ReplaceWord(dictionary,sentence);
}