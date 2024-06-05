#include<iostream>
#include<vector>
using namespace std;
int fibSolution(int n, vector<int> &dp)
    {
        dp[0]=0;
        if(n==0)
        {
            return dp[0];
        }
        dp[1]=1;
        if(n==1)
        {
            return dp[1];
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=fibSolution(n-1,dp)+fibSolution(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return fibSolution(n,dp);
    }

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fib(n);
}
