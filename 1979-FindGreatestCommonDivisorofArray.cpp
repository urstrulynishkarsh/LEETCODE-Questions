#include<iostream>
#include<vector>
using namespace std;

int findGCD(vector<int> &nums)
{
    int minimumNumber=*min_element(nums.begin(),nums.end());
    int maximumNumber=*max_element(nums.begin(),nums.end());
    if(minimumNumber==0)
    {
        return maximumNumber;
    }
    if(maximumNumber==0)
    {
        return minimumNumber;
    }
    while(minimumNumber>0 && maximumNumber>0)
    {
        if(minimumNumber>maximumNumber)
        {
            minimumNumber=minimumNumber-maximumNumber;
        }
        else{
            maximumNumber=maximumNumber-minimumNumber;
        }
    }
    return minimumNumber==0?maximumNumber:minimumNumber;
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
    
    cout<<findGCD(arr);
}