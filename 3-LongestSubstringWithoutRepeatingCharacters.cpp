#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int LongestSubstrWithoutRepeating(string &str)
{
    int n=str.length();
    vector<int> dict(256,-1);
    int maxlength=0;
    int starting=-1;
    for(int i=0;i<n;i++)
    {
        if(dict[str[i]]>starting)
        {
            starting=dict[str[i]];
        }
        dict[str[i]]=i;
        // update this
        maxlength=max(maxlength,i-starting);
    }
    return maxlength;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<LongestSubstrWithoutRepeating(str);



}