#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrixmultiplication(vector<vector<int>>&a,vector<vector<int>>&b,int mod)
{
     vector<vector<int>>ans(4,vector<int>(4,0));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int ans1=0;
            for(int k=0;k<3;k++)
            {
                ans1=(ans1+(a[i][k]*b[k][j])%mod)%mod;
            }
            
            
            ans[i][j]=ans1;
            
        }
    }
    return ans;
}
vector<vector<int>>matrixexponentiation(string n,int mod,vector<vector<int>>&arr)
{
    vector<vector<int>>base=arr;
    vector<vector<int>>result={{1,0,0},{0,1,0},{0,0,1}};
    for(int i=n.size()-1;i>=0;i--)
    {
        int current=n[i]-'0';
        for(int i=0;i<current;i++)
        {
            result=matrixmultiplication(base,result,mod);
        }
        vector<vector<int>>base2={{1,0,0},{0,1,0},{0,0,1}};
        for(int i=0;i<10;i++)
        {
            base2=matrixmultiplication(base,base2,mod);
        }
        base=base2;
    }
    return result;
}
int main()
{
    string n;
    int mod;
    cout<<"Enter the value of n(can be a large number)"<<endl;
    cin>>n;
    cout<<"Enter the value of mod"<<endl;
    cin>>mod;
    /*[f(n)]  =  {{2,0,-3}}*[f(n-1)]
      [f(n-1)]   {{1,0,0}}   [f(n-2)]
      [f(n-2)]   {{0,1,0}}   [f(n-3)] */
      vector<vector<int>>arr2={{2},{1},{0},{1}};
    vector<vector<int>>arr={{2,0,-3},{1,0,0},{0,1,0}};
    vector<vector<int>>ans=matrixexponentiation(n,mod,arr);
    ans=matrixmultiplication(ans,arr2,mod);
    cout<<ans[2][0]<<endl;
}