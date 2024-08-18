#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ind=0;
    int maxi=INT_MIN;
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            len=i-ind+1;
        }
        if(sum<0)
        {
            sum=0;
            ind=i+1;

        }
    }
    cout<<len<<endl;
}