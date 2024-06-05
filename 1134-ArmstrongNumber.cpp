#include<iostream>
using namespace std;
bool ArmStrongNumber(int &n)
{
    int res=0;
    int val=n;
    while(n!=0)
    {
        int digit=n%10;
        res+=digit*digit*digit;
        n/=10;
    }
    if(res==val)
    {
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<ArmStrongNumber(n);
}