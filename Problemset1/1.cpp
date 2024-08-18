#include<bits/stdc++.h>
using namespace std;


int findp(vector<int>&fib,int mod)
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
 int findfibn(string n,int mod)
{
     int number=0;
    for(int i=0;i<n.size();i++)
    {
      //cout<<n[i]<<endl;
      int curr=(n[i]-'0');
        number=(number*10+curr)%mod;
        

    }
    return number;
}
int main()
{
    string n;
    int mod;
    cout<<"Give the value of n  (Can be greater 10^9)"<<endl;
    cin>>n;
    
    cout<<"enter the value of m(should be less than 10^9)"<<endl;
    cin>>mod;
    vector<int>fib(6*mod+3);
    int p=findp(fib,mod);
    int ans=findfibn(n,p);
    cout<<ans<<endl;
    cout<< fib[ans];

}