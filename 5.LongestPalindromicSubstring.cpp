#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

bool checkPalindrome(string & str, int i,int j)
{
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string LongestpalindromicSubstring(string &str)
{
    int n=str.length();
    int maxlength=0;
    int startIndex=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(checkPalindrome(str,i,j))
            {
                if(j-i+1>maxlength)
                {
                    maxlength=j-i+1;
                    startIndex=i;
                }
            }
        }
    }
    return str.substr(startIndex,maxlength);
}


int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    cout<<LongestpalindromicSubstring(str);

}