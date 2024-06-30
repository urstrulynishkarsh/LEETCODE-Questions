#include<iostream>
#include<vector>
using namespace std;
int maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
        int count=0;
        int s=0;
        int e=nums.size()-1;
        while(s<e)
        {
            if(nums[s]+nums[e]==k)
            {
                s++;
                e--;
                count++;
            }
            else if( nums[s]+nums[e]>k)
            {
                e--;
            }
            else{
                s++;
            }
        }
        return count;
       
}

int main(){
    int n;
    cout<<"Enter the size of Candies: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element in the Candies:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the ExtraCandies: ";
    cin>>target;

    cout<<maxOperations(arr,target);

}