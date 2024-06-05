#include<iostream>
#include<vector>
using namespace std;
 int climnStairsSolution(int n,vector<int> &dp)
   {
        dp[0]=1;
        dp[1]=1;
        if(n==0)
        {
            return dp[0];
        }
        if(n==1)
        {
            return dp[1];
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=climnStairsSolution(n-1,dp)+climnStairsSolution(n-2,dp);
        return dp[n];
   }
    int climbStairs(int &n) {
        vector<int> dp(n+1,-1);
        return climnStairsSolution(n,dp); 
    }

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<climbStairs(n);
}
