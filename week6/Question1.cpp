#include<bits/stdc++.h>
using namespace std;/*
void tes(int** ar);
{
    cout<<ar[1][1];
}*/
bool bipar(int **ar,int n)
{
    queue<int> q;
    q.push(0);
    return false;
}
int main()
{
    int n,s,d;
    cin>>n;
    int **arr;
    arr=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    arr[i]=(int *)malloc(n*sizeof(int));  
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    cout<<"Enter the values for which path is to be checked"<<endl;
    cin>>s>>d;
    if(bipar(arr,n))
    cout<<"Bipartite";
    else
    cout<<"Not Bipartite";
}