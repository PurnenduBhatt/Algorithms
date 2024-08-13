#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixmultiplication(vector<vector<int>>x,vector<vector<int>>y)
{
    vector<vector<int>>ans(2,vector<int>(2,0));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int ans1=0;
            for(int k=0;k<2;k++)
            {
                ans1+=x[i][k]*y[k][j];
            }
            ans[i][j]=ans1;
        }
    }
    return ans;
}
int Fibonaciii(vector<vector<int>>&A,int n)
{
    vector<vector<int>>B={{1,0},{0,1}};
    while(n!=0)
    {
        if(n%2==1)B=matrixmultiplication(B,A);
        A=matrixmultiplication(A,A);
        n=n/2;
    }
    return B[1][0];
}

int main()
{
    vector<vector<int>>A={{1,1},{1,0}};

    //[fib[n]]=  [{1,1}]^n-1* [fib[1]]
    //[fib[n-1]] [{1,0}]      [fib[0]]
    int n;
    cout<<"Enter the value of N";
    cin>>n;
    int ans=Fibonaciii(A,n);
    cout<<ans<<endl;

}
