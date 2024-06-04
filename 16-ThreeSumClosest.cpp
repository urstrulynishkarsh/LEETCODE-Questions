#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int ThreeSumClosest(vector<int> &arr, int &n,int target)
{
    // step 1 Sort 
    sort(arr.begin(),arr.end());
    int result=0;
    int minDifference=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            continue;
        }
        int left=i+1;
        int right=n-1;
        while(left<right)
        {
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==target)
            {
                return target;
            }
            else if(sum<target)
            {
                left++;
            }
            else{
                right--;
            }
            int difference=abs(sum-target);
            if(difference<minDifference)
            {
                result=sum;
                minDifference=difference;
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
    cout<<ThreeSumClosest(arr,n,target);

    


}