#include<iostream>
#include<vector>
#include<map>
using namespace std;

 bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1)
            {
                count++;
                if(count==3)
                {
                    return true;
                }
            }
            else{
                count=0;
            }
        }
        return false;
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
    cout<<threeConsecutiveOdds(arr);
    
}