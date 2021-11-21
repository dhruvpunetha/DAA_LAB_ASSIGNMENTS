#include<bits/stdc++.h>
using namespace std;
//dhruv punetha ml 23 2014639
int dp[100][100];
int mca(int p[],int i,int j)
{
    if(i==j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    dp[i][j]=INT_MAX;
    int cou;
    for(int k=i;k<j;k++)
    {
        cou=mca(p,i,k)+mca(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(cou<dp[i][j])
        dp[i][j]=cou;
    }
    return dp[i][j];
}
int main()
{
    memset(dp,-1,sizeof dp);
    int n,a,b;
    cin>>n;
    int ar[n+1];
    int it=0,k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(it==0)
        {
            it=1;
            ar[k]=a;
            k++;
        }
ar[k]=b;
k++;   
    }
    int ans=mca(ar,1,n);
    cout<<ans;
}