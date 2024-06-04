#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int LongestPalindrome(string &str)
{
   vector<int> freq(128,0);
   for(char ch: str)
   {
        freq[ch]++;
   }
   int res=0;
   for(int i=0;i<128;i++)
   {
        int val=freq[i];
        res+=(val/2)*val;
        if(res%2==0 && val%2==1)
        {
            res++;
        }
   }
   return res;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<LongestPalindrome(str);
}