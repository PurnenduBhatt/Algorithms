#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>arr(2*n+1,-1);
    int c=n;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        c++;
        else
        c--;
        
        if(c>n)
        maxi=i+1;
        if(arr[c]==-1)
        arr[c]=i;
        else
        {
          if(arr[c-1]!=-1)
          maxi=max(maxi,i-arr[c-1]);
         // cout<<maxi<<" "<<i<<" "<<arr[c-1]<<endl;
        }
        
        

    }
    cout<<maxi<<endl;
}