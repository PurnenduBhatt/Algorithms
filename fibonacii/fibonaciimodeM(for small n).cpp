#include<bits/stdc++.h>
using namespace std;


int findp(int n,int mod,vector<int>&fib)
{
    fib[0]=0;
    fib[1]=1;
    int p;
    for(int i=2;i<fib.size();i++)
    {
       fib[i]=(fib[i-1]+fib[i-2])%mod;
       if(fib[i]==fib[1]&&fib[i-1]==fib[0])
       {
            p=i-1;
            break;
       }
    }
    return p;
}
int main()
{
    int n,mod;
    cout<<"Enter value of n(should be in integer range)"<<endl;
    cin>>n;
    cout<<"Enter the value of mode(better be prime)"<<endl;
    cin>>mod;
    vector<int>fib(6*mod+3);
    int p=findp(n,mod,fib);
    cout<<p<<endl;
    cout<<fib[n%p]<<endl;
}