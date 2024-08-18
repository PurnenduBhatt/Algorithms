#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //sort(arr.begin(),arr.end());
    bool flag=false;
    int ind1=0,ind2=0,ind3=0;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        unordered_map<int,int>mp;
        
        for(int j=i+1;j<n;j++)
        {
            if(mp.find(arr[j]-arr[i])!=mp.end())
            {
                //cout<<i<<" "<<mp[arr[j]-arr[i]]<<" "<<j<<endl;
                ans.push_back(i);
                ans.push_back(mp[arr[j]-arr[i]]);
                ans.push_back(j);
                flag=true;
                break;
            }
            mp[arr[j]]=j;
        }
        if(flag==true)
        break;
    }
    //sort(ans.begin(),ans.end());
    if(flag==true)
    {
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    }
    else
    cout<<"NOT POSSIBLE";
}