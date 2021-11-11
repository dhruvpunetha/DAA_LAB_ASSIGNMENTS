//min computation path
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t,ans;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        vec.push_back(t);
    }
    sort(vec.begin(),vec.end());
    ans=0;
    for(int i=1;i<vec.size();i++)
    {
        vec[i]=vec[i-1]+vec[i];
        ans+=vec[i];
    }
    cout<<ans;
}