#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<int> > ThreeSum(vector<int> &arr, int &n, int &target)
{
    // step 1 Sort 
    sort(arr.begin(),arr.end());
    vector<vector<int> > result;
    // steep two one for loop
    for(int i=0;i<n-3;i++)
    {
        // for distinct
        if(i>0 && arr[i]==arr[i-1])
        {
            continue;
        }
        for(int j=i+1;j<n-2;j++)
        {
            if(j>i+1 && arr[j]==arr[j-1])
            {
                continue;
            }
        int left=j+1;
        int right=arr.size()-1;
        while(left<right)
        {
            int sum=arr[i]+arr[j]+arr[left]+arr[right];
            if(sum==target)
            {
                result.push_back({arr[i],arr[j],arr[left],arr[right]});
                // avoid duplicate
                while(left<right && arr[left]==arr[left+1])
                {
                    left++;
                }
                while(left<right && arr[left]==arr[right])
                {
                    right--;
                }
                left++;
                right--;    
            }
            else if(sum<target)
            {
                left++;
            }
            else{
                right--;
            }
        }
        }
    }
    return result;

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;
    vector<vector<int> > result=ThreeSum(arr,n,target);
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }


}