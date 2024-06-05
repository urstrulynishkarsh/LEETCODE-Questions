#include<iostream>
using namespace std;
int AddDigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n%9==0)
    {
        return 9;
    }
    else{
        return n%9;
    }
}
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<AddDigit(n);
}