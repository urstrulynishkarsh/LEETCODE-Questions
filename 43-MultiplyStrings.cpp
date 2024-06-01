#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string MultiplyTwoString(string & str1, string & str2)
{
    int n=str1.length();
    int m=str2.length();
    vector<int> result(n+m,0);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            int digit1=str1[i]-'0';
            int digit2=str2[j]-'0';
            int sum=(digit1*digit2)+result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]+=sum/10;
        }
    }

    string resultstring;
    for(int val:result)
    {
        if(!(resultstring.empty() && val==0))
        {
            resultstring.push_back(val+'0');
        }
    }
    return resultstring.empty()?"0": resultstring;
}

int main(){
    string str1;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string: ";
    getline(cin,str2);

    cout<<MultiplyTwoString(str1,str2);

}