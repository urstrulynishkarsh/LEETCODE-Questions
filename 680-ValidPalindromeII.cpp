#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

  bool palindrome(string s,int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j]){
                return palindrome(s,i+1,j)||palindrome(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<validPalindrome(str);
}