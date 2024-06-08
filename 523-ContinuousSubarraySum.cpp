#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

bool checkSubarraySum(vector<int> &nums,int k)
{
    int mod=0;
    map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        mod=(mod+nums[i])%k;
        if(mod==0 && i>0)
        {
            return true;
        }
        else if(mp.find(mod)!=mp.end() && i-mp[mod]>=2)
        {
            return true;
        }
        if(mp.find(mod)==mp.end())
        {
            mp[mod]=i;
        }
    }
   return false;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the kth value: ";
    cin>>k;
    cout<<checkSubarraySum(arr,k);
}