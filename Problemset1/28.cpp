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
    for(int i=0;i<n;i++)
    cin>>arr[i];
    deque<int>dq;
    pref(n+1,0);
    for(int i=0;i<n;i++)
    {
        pref[i+1]=pref[i]+arr[i];
    }
    deque<int>dq;
    int maxi=INT_MIN;
    int len=0;
    for(int i=0;i<=n;i++)
    {
        while(!dq.empty()&&dq.front()<i-k)
        dq.pop_front();
        if(!dq.empty()&&arr[i]-arr[dq.front()]>=maxi)//>=because we are printing max len of max sum subarray whose len is atmost k
        {
            maxi=max(maxi,arr[i]-arr[dq.front()])
            len=i-dq.front();
        }
        while(!dq.empty()&&arr[i]<=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push(i);

    }
}