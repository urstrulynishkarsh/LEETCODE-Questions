#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int> ,greater<int> > pq;
        for(auto val:nums)
        {
            pq.push(val);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
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
    cout<<findKthLargest(arr,k);
}