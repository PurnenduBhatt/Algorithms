#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    unordered_map<int,pair<int,int>>mp;
    vector<int>ans;
    bool flag=false;
    int sum;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(j!=i)
          {
            if(mp.find(arr[i]-3*arr[j])!=mp.end())
            {
               sum=arr[i]-3*arr[j];
               if(mp[sum].first!=i&&mp[sum].second!=j&&mp[sum].first!=j&&mp[sum].second!=i)
               {
                flag=true;
                
                
                //cout<<sum<<endl;
                
                ans.push_back(mp[sum].first);
                ans.push_back(mp[sum].second);
                ans.push_back(i);
                ans.push_back(j);
                break;
               } 
            }
            mp[arr[i]-2*arr[j]]={i,j};
        }
        if(flag==true)
        break;}
        
    }
    if(flag==true)
    {
        cout<<sum<<" "<<ans[0]<<' '<<ans[1]<<' '<<ans[2]<<' '<<ans[3];
    }
    else
    {
        cout<<"NOT POSSIBLE";
    }
}