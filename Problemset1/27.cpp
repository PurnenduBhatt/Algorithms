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
    //pair for storing index of first and last element of the maximum sum subarray.
    pair<int,int>p;
    int maxi=INT_MIN;
    int sum=0;
    int sum1=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
        
    }
    if(sum>maxi)
    {
        maxi=sum;
        p={0,k-1};
    }
    for(int i=k;i<n;i++)
    {
        sum+=arr[i];
        sum1+=arr[i-k];
        if(sum1<0)
        {
            sum=sum-sum1;
            sum1=0;
            
            maxi=max(maxi,sum);
            p={i-k+1,i};

        }
        if(sum>maxi)
        {
          maxi=sum;
          p.second=i;
        }
    }
    cout<<p.second-p.first+1<<endl;
}