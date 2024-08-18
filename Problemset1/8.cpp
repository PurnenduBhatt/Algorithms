#include<bits/stdc++.h>
using namespace std;
long long int merge(vector<int>&arr,long long int l,long long int mid,long long int r)
    {
    long long int left=l,right=mid+1;
    long long arr1[r-l+1];
    long long int ans=0;
    int i=0;
    while(left<=mid&&right<=r)
    {
        if(arr[left]<arr[right])
        {
          
            arr1[i]=arr[left];
            ans+=r-right+1;
            left++;
            i++;
        }
        else if(arr[left]>=arr[right])
        {
            //cout<<arr[left]<<" "<<arr[right]<<endl;
           arr1[i]=arr[right];
           right++;
           i++;
           
           //cout<<right<<endl;
           
        }
        
    }
    while(left<=mid)
    {
    arr1[i]=arr[left];
    i++;
    left++;
    
    }
    while(right<=r)
    {
    arr1[i]=arr[right];
    i++;
    right++;
    }
    int ind=l;
    i=0;
    while(ind<=r)
    {
        arr[ind]=arr1[i];
        ind++;
        i++;
    }
    return ans;
    }
    long long int mergesort(vector<int>&arr,long long int l,long long int r)
    {
        if(l>=r)
        return 0;
        long long int mid=(l+r)/2;
        long long int ans=0;
        ans+=mergesort(arr,l,mid);
        ans+=mergesort(arr,mid+1,r);
        ans+=merge(arr,l,mid,r);
        return ans; 
    }
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    vector<int>arr(n);
    int c=0;
    //int ans1=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(str[i]=='1')
            {
                arr[i]=1;
                //ans1++;
            }
            else
            arr[i]=-1;
        }
        else
        {
             if(str[i]=='1')
            {
                arr[i]=arr[i-1]+1;
                //ans1++;
            }
            else
            arr[i]=arr[i-1]-1;
        }
    }
    
    arr.insert(arr.begin(),0);//appending zero because single 1 is not able to count if 
   long long int ans=mergesort(arr,0,n);
   cout<<ans<<endl;
    
}