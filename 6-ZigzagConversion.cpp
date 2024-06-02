#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

string zigzagConversion(string &str, int numrow)
{
    if(numrow==1)
    {
        return str;
    }
    int i=0;
    int row=0;
    bool direction=1;
    vector<string> zigzag(numrow);
    while(true){
        if(direction)
        {
            while(row<numrow && i<str.length())
            {
                zigzag[row++].push_back(str[i++]);
            }
            row=numrow-2;   
        }
        else{
            while(row>=0 && i<str.length())
            {
                zigzag[row--].push_back(str[i++]);
            }
            row=1;
        }
        if(i>=str.length())
        {
            break;
        }
        direction=!direction;
    }
    string ans;
    for(int i=0;i<zigzag.size();i++)
    {
        ans+=zigzag[i];
    }
    return ans;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int numrow;
    cout<<"Enter the numRow: ";
    cin>>numrow;
    cout<<zigzagConversion(str,numrow);

}