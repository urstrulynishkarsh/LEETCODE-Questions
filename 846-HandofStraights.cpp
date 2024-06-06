#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool isNStraightHand(vector<int> &hand, int &n, int groupSize)
{
    if(n%groupSize!=0)
    {
        return 0;
    }
    if(groupSize==1)
    {
        return 1;
    }
    map<int,int> mp;
    for(auto val:hand)
    {
        mp[val]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int card=it->first;
        int count=it->second;
        if(count>0)
        {
            for(int i=0;i<groupSize;i++)
            {
                if(mp[card+i]<count)
                {
                    return 0;
                }
                mp[card+i]-=count;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> hand(n);
    cout<<"Enter the Element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>hand[i];
    }
    int groupSize;
    cout<<"Enter the size of group: ";
    cin>>groupSize;
    cout<<isNStraightHand(hand,n,groupSize);
}