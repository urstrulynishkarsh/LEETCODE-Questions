#include<iostream>
#include<vector>
#include<map>
using namespace std;

int containerMostWater(vector<int> &nums, int &n)
{
    int left=0;
    int right=n-1;
    int maxArea=0;
    while(left<right)
    {
        int currArea=(right-left)*min(nums[left],nums[right]);
        maxArea=max(maxArea,currArea);
        if(nums[left]<nums[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    return maxArea;
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
    cout<<containerMostWater(arr,n);
}