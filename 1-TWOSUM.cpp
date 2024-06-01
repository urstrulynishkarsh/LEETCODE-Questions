#include<iostream>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int> &arr, int n,int & target)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
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
    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    vector<int> ans=TwoSum(arr,n,target);

    for(auto val:ans)
    {
        cout<<val<<" ";
    }
}