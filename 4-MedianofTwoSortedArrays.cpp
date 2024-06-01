#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

double MedianTwoSortedArray(vector<int> &arr1,vector<int> &arr2,int n,int m)
{
    int total=n+m;
    vector<int> ans(total);
    int i=0;
    int j=0;
    int index=0;
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            ans[index++]=arr1[i++];
        }
        else{
            ans[index++]=arr2[j++];
        }
    }
    while(i<n)
    {
        ans[index++]=arr1[i++];
    }
    while(j<m)
    {
        ans[index++]=arr2[j++];
    }
    if(total&1)
    {
        return (double)(ans[total/2]);
    }
    else{
        return (double)(ans[total/2]+ans[(total/2)-1])/2;
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter the element in the array of First Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of Array: ";
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter the element in the array of Second Sorted Array:";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    cout<<MedianTwoSortedArray(arr1,arr2,n,m);


}