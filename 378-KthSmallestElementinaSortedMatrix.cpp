#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int kthSmallest(vector<vector<int> >& matrix, int k) {
        priority_queue<int,vector<int> > pq;
        int n=matrix[0].size();
        int m=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
        }
        return pq.top();
}

int main(){
    int n;
    cout<<"Enter the size of row: ";
    cin>>n;

    int m;
    cout<<"Enter the size of column: ";
    cin>>m;

    vector<vector<int> > martix(n,vector<int>(m,0));
    cout<<"Enter the Element in the array: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>martix[i][j];
        }
    }
    
    int k;
    cout<<"Enter the kth value: ";
    cin>>k;
    cout<<kthSmallest(martix,k);
}