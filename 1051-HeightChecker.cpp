#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int> &expected)
    {
        vector<int> count(101,0);
        for(int val:expected)
        {
            count[val]++;
        }
        int j=0;
        for(int i=0;i<101;i++)
        {
            if(count[i]!=0)
            {
                while(count[i]>0)
                {
                    expected[j]=i;
                    j++;
                    count[i]--;
                }
            }
        }
    }
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected=heights;
        // sort(expected.begin(),expected.end());
        countSort(expected);
        int count=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != expected[i])
            {
                count++;
            }
        }
        return count;
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
    
    cout<<heightChecker(arr);
}