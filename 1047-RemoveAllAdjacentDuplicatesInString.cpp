#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string removeDuplicates(string s) {
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(ans.length()>0 && ans[ans.length()-1]==s[i])
            {
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<removeDuplicates(str);
}