#include<iostream>
#include<vector>
#include<map>
using namespace std;

int MajorityElement(vector<int> &nums, int &n)
{
    // O(LOGN)
    // sort(nums.begin(),nums.end());
    // return nums[n/2];

    // O(N)+(N) time and space complexity
    unordered_map<int,int> hashmap;
    for(int i=0;i<n;i++)
    {
        hashmap[nums[i]]++;
        if(hashmap[nums[i]]>n/2)
        {
            return nums[i];
        }
    }
    return -1;
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
    cout<<MajorityElement(arr,n);
}