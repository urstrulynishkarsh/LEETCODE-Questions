#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            {
                result.push_back(nums2[i]);
                mp[nums2[i]]--;
                if (mp[nums2[i]] == 0) 
                {
                    mp.erase(nums2[i]);  // Remove the element when count is zero
                }
            }
        }
        return result;
    }


int main(){
    int n,m;
    cout<<"Enter the size of array1: ";
    cin>>n;
    vector<int> nums1(n);
    cout<<"Enter the element in the first array: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
    cout<<"Enter the size of array2: ";
    cin>>m;
    vector<int> nums2(m);
    cout<<"Enter the element in the second array: ";
    for(int i=0;i<m;i++)
    {
        cin>>nums2[i];
    }
    vector<int> ans=intersect(nums1,nums2);

    for(auto val:ans)
    {
        cout<<val<<" ";
    }

}