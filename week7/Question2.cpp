//design algorithm using program to solve prev question using bellman ford shortest path
//bellman works in negative edge weights unlike dijkstra
//in negative edge weight ycle it may not work
#include<bits/stdc++.h>
using namespace std;

void bellman(int **graph,int m,int sour)
{
vector<int>dis(m,INT_MAX);
dis[sour]=0;
for(int i=0;i<m-1;i++)
{
for(int j=0;j<m;j++)
{
    if(graph[i][j]!=0)
    {
        if(dis[j]>dis[i]+graph[i][j])
        dis[j]=dis[i]+graph[i][j];
    }
}
}
for(int i=0;i<m;i++)
{
    cout<<dis[i]<<endl;
}
}

int main()
{
int m,source,ed;
cin>>m;
int **graph=(int **)malloc(m*sizeof(int *));
for(int i=0;i<m;i++)
    graph[i]=(int*)malloc(m*sizeof(int));
for(int i=0;i<m;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>graph[i][j];
    }
}
cin>>source;  //entering source from user from where we need to calc path to all other locations
bellman(graph,m,source-1);
}