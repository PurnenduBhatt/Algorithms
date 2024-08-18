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
    int i=0;
    int mini=INT_MAX;
    for(int j=0;j<n;j++)
    {
        if(j-i>=k)
        {
            mini=min(mini,arr[i]);
            i++;
        }
        maxi=max(maxi,arr[j]-mini);

    }
    cout<<maxi<<endl;
}