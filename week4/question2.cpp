#include<iostream>
using namespace std;
//quicksort
int comp=0,inversion=0;
int main()
{
    int t,siz;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {

        cin>>siz;
        int ar[siz];
        for(int j=0;j<siz;j++)
        cin>>ar[j];
        mSort(ar,0,(siz-1));
        for(int j=0;j<siz;j++)
        cout<<ar[j]<<" ";
        cout<<endl;
        cout<<"COMPARISION: "<<comp<<endl;
        cout<<"INVERSION: "<<inversion<<endl;
    }
    return 0;
}