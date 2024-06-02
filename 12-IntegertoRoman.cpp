#include<iostream>
using namespace std;

string IntegerToRomain(int &n)
{
    string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans="";
    for(int i=0;i<13;i++)
    {
        // apply while loop
        while(n>=value[i])
        {
            ans+=roman[i];
            n=n-value[i];
        }
        if(n==0)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<IntegerToRomain(n);
}