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
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        if(!dq.empty()&&dq.front()<i-k)
        dq.pop_front();
    while(!dq.empty()&&arr[dq.back()]>=arr[i])
    dq.pop_back();
    dq.push_back(i);
    if(i>=k)
    {
        maxi=max(maxi,arr[i]-arr[dq.front()]);
    }
    }
    cout<<maxi<<endl;

}