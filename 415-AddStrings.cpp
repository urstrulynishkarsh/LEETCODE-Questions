#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string AddTwoString(string & str1, string & str2)
{
    string ans;
    int i=str1.length()-1;
    int j=str2.length()-1;
    int carry=0;
    while(i>=0 ||j>=0 || carry)
    {
        if(i>=0)
        {
            carry+=str1[i--]-'0'; //string to integer that why we - 0
        }
        if(j>=0)
        {
            carry+=str2[j--]-'0';
        }
        ans.push_back(carry%10 +'0');
        carry/=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string str1;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string: ";
    getline(cin,str2);

    cout<<AddTwoString(str1,str2);

}