#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string LongestCommonPrefix(vector<string> &v)
{
    sort(v.begin(),v.end());
    string str1=v[0];
    string str2=v[v.size()-1];
    string ans;
    for(int i=0;i<str2.length();i++)
    {
        if(str1[i]==str2[i])
        {
            ans.push_back(str2[i]);
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of string vector: ";
    cin>>n;
    vector<string> v(n);
    cout<<"Enter the string in the vector: ";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    string ans=LongestCommonPrefix(v);
    cout<<"The longest common prefix is: "<<ans<<endl;
}