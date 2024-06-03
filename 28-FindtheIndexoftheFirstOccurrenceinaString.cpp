#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int strStr(string &haystack,string &needle)
{
    // return haystack.find(needle);

    int n=haystack.length();
    int m=needle.length();
    for(int i=0;i<=n-m;i++)
    {
        for(int j=0;j<m;j++){
            if(needle[j]!=haystack[i+j])
            {
                break;
            }
            if(j==m-1){
                return i;
            }
        }
    }
    return -1;

}
int main(){
    string haystack;
    cout<<"Enter the string: ";
    getline(cin,haystack);
    string needle;
    cout<<"Enter the search string: ";
    getline(cin,needle);
    cout<<strStr(haystack,needle);
}