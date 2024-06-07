#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int CountPalindromicSubstring(string s, int i, int j)
    {
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int center=0;center<s.length();center++)
        {
            // odd
            int i=center;
            int j=center;
            int oddcount=CountPalindromicSubstring(s,i,j);

            // even
             i=center;
             j=center+1;
            int evencount=CountPalindromicSubstring(s,i,j);

            totalcount=totalcount+oddcount+evencount;
        }
        return totalcount;
    }

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<countSubstrings(str);
}