#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>matrixmultiplication(vector<vector<int>>&a,vector<vector<int>>&b,int mod)
{
     vector<vector<int>>ans(2,vector<int>(2,0));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int ans1=0;
            for(int k=0;k<2;k++)
            {
                ans1=(ans1+(a[i][k]*b[k][j])%mod)%mod;
            }
            ans[i][j]=ans1;
        }
    }
    return ans;
}
vector<vector<int>>solve(int n,int mod,vector<vector<int>>&arr)
{
    vector<vector<int>>y={{1,0},{0,1}};
    while(n!=0)
    {
        if(n%2==1)
        y=matrixmultiplication(arr,y,mod);
        arr=matrixmultiplication(arr,arr,mod);
        n=n/2;
    }
    return y;
}
int main()
{
    int mod,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of mod"<<endl;
    cin>>mod;
    vector<vector<int>>arr={{1,1},{1,0}};
    vector<vector<int>>ans=solve(n,mod,arr);
    cout<< ans[1][0];
}