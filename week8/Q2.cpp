//kruskal algo
#include<bits/stdc++.h>
using namespace std;
int krus(vector<vector<int>>&v,int n)
{
    
}
int main()
{
    int n,t;
    cin>>n;
    vector<vector<int>>v;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        vec.clear();
        for(int j=0;j<n;j++)
        {
            cin>>t;
            vec.push_back(t);
    }
    v.push_back(vec);
    }
    cout<<"Minimum spanning weight : "<<krus(v,n);
}