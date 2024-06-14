#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

bool isAnagram(string & str1, string & str2)
{
      vector<int> freq(26,0);
        for(char ch:str1)
        {
            freq[ch-'a']++;
        }
        for(char ch:str2)
        {
            freq[ch-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                return false;
            }
        }
        return true;
}

int main(){
    string str1;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string: ";
    getline(cin,str2);

    cout<<isAnagram(str1,str2);

}