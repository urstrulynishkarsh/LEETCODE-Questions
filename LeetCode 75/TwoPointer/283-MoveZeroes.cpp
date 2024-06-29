#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(int arr[],int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ans.push_back(arr[i]);
        }
    }
     for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    delete[] arr;
}