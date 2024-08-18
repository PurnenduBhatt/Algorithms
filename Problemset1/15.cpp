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
    int j=0;
    for(int i=1;i<=n;i++)
    {
        st.push(i);
        while(!st.empty()&&arr[j]==st.top())
        {
            st.pop();
            j++;
        }
    }
    if(st.empty())
    cout<<"POSSIBLE"<<endl;
    else
    cout<<"NOT POSSIBLE"<<endl;
}