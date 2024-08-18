#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    stack<int>st;
    vector<int>nse(n,n);
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&arr[st.top()]>arr[i])
        {
            nse[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(auto it:nse)
    cout<<it<<' ';
    
}