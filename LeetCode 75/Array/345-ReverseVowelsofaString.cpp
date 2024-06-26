#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<limits.h>
#include<cstring>
using namespace std;

  bool isvowel(char ch)
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(!isvowel(s[i]))
            {
                i++;
                continue;
            }
            if(!isvowel(s[j]))
            {
                j--;
                continue;
            }
            if(isvowel(s[i])==isvowel(s[j]))
            {
                swap(s[i++],s[j--]);
            }
        }
        return s;
    }
int main(){
    string word1;
    cout<<"Enter word1: ";
    getline(cin,word1);
  
    cout<<reverseVowels(word1);

}