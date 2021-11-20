#include<bits/stdc++.h>
using namespace std;
int mca(int p[],int i,int j)
{
    if(i==j)
    return 0;
    int min=INT_MAX;
    int cou;
    for(int k=i;k<j;k++)
    {
        cou=mca(p,i,k)+mca(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(cou<min)
        min=cou;
    }
    return min;
}
int main()
{
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