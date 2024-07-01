#include<iostream>
#include<vector>
using namespace std;

  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0))
            {
                count++;
                flowerbed[i]=1;
                if(count>=n)
                {
                    break;
                }
            }
        }
        return count>=n?true:false;
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
    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    cout<<canPlaceFlowers(arr,target);
}