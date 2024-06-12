#include<iostream>
#include<vector>
#include<map>
using namespace std;

void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[high--]);
            }
        }
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
    sortColors(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}