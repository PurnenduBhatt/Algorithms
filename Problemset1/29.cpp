#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
int x;
cin>>x;
int i=0,j=1;
int ans=0;
while(j<n)
{
    while(j<n&&arr[j]-arr[i]<=x)
    j++;
    if(j<n&&arr[j]-arr[i]>x)
    {
        ans+=(n-1)-j+1;
        i++;
    }

}
cout<<ans<<endl;
}