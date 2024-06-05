#include<iostream>
#include<vector>
using namespace std;
 int tribonacciSolution(int n,vector<int> &dp)
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
        dp[2]=1;
        if(n==2)
        {
            return dp[2];
        }

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n]; 
   }
    int tribonacci(int &n) {
        vector<int> dp(n+1,-1);
        return tribonacciSolution(n,dp); 
    }

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<tribonacci(n);
}
