#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin>>r;
    double ans=0;
    for(double i=0;i<r;i++)
    {

            ans+=floor(sqrt(r*r-i*i))+1;
    }
    
    ans=4*ans-4*r+1;
    cout<<ans<<endl;
}