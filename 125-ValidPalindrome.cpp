#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

 bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
            {
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;

    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<isPalindrome(str);
}