#include<iostream>
#include<vector>
using namespace std;

int countPrime(int &n)
{
    if(n==0)
    {
        return 0;
    }
    vector<bool> prime(n,true);
    prime[0]=prime[1]=false;
    int ans=0;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            ans++;
            for(int j=i*2;j<n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<countPrime(n);
}