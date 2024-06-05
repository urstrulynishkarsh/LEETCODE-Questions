#include<iostream>
#include<vector>
using namespace std;

void MovesZeroes(vector<int> &arr, int n)
{
    vector<int> num;
    for(auto val:arr)
    {
        if(val!=0)
        {
            num.push_back(val);
        }
    }
    for(auto val:arr)
    {
        if(val==0)
        {
            num.push_back(val);
        }
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=num[i];
    }

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
    
    MovesZeroes(arr,n);
    for(auto val:arr)
    {
        cout<<val<<" ";
    }

}