#include<iostream>
#include<vector>
using namespace std;

int MissingNumber(vector<int> &arr, int n)
{
    int total=(n*(n+1)/2);
    int sum=0;
    for(int val:arr)
    {
        sum+=val;
    }
    return total-sum;
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
    
    cout<<MissingNumber(arr,n);
}