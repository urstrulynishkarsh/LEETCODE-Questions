#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int minIncrementForUnique(vector<int> &nums)
{
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int res=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>maxi)
        {
            maxi=nums[i];
        }
        else{
            res+=maxi-nums[i]+1;
            maxi++;
        }
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<minIncrementForUnique(arr);
}