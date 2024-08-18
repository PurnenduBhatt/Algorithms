#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int maxi=INT_MIN;
    for(int i=0,j=k;j<n;j++,i++)
    {
        maxi=max(maxi,arr[j]-arr[i]);
    }
    cout<<maxi;
}