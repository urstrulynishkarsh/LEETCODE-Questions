#include<iostream>
#include<vector>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandidate=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=maxCandidate)
            {
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }

int main(){
    int n;
    cout<<"Enter the size of Candies: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element in the Candies:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the ExtraCandies: ";
    cin>>target;

    vector<bool> ans=kidsWithCandies(arr,target);

    for(auto val:ans)
    {
        cout<<val<<" ";
    }
}