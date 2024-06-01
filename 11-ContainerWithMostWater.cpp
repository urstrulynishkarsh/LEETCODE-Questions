#include<iostream>
#include<vector>
using namespace std;

int MaxArea(vector<int> &height)
{
    int maxarea=0;
    int left=0;
    int right=height.size()-1;
    while(left<right)
    {
        int currentArea=(right-left)*min(height[left],height[right]);
        maxarea=max(maxarea,currentArea);
        if(height[left]<height[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    return maxarea;
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
    
    cout<<MaxArea(arr);
}