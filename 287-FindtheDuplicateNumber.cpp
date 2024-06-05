#include<iostream>
#include<vector>
using namespace std;

int DuplicateNumber(vector<int> &arr, int n)
{
    while(arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
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
    
    cout<<DuplicateNumber(arr,n);
}