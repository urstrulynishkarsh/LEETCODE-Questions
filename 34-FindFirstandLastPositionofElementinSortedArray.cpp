#include<iostream>
#include<vector>
using namespace std;

int firstPosition(vector<int>& nums, int &target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
     int lastPosition(vector<int>& nums, int &target)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=firstPosition(nums,target);
        int j=lastPosition(nums,target);
        vector<int> ans;
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the element in the sorted in non-decreasing order: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    vector<int> ans=searchRange(nums,target);
    cout<<"[";
    for(int i=0;i<ans.size();i++)
    {
        if(i==ans.size()-1)
        {
            cout<<ans[i];
            break;
        }
        cout<<ans[i]<<",";   
    }
    cout<<"]";
}