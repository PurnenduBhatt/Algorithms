#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);
    }
    cout<<maxi;

}