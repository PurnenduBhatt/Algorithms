#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int>pge(n,-1);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&arr[i]>arr[st.top()])
        {
            pge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(auto it:pge)
    cout<<it<<" ";
}