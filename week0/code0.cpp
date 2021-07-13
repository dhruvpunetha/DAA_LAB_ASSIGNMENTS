#include<iostream>
using namespace std;
int main()
{
    int siz,el;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>siz;
    int arr[siz];
    cout<<"Enter Array Elements"<<endl;
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER ELEMENT TO SEARCH"<<endl;
    cin>>el;
    for(int i=0;i<siz;i++)
    {
        if(arr[i]==el)
        {
            cout<<"ELEMENT AT "<<i<<" index"<<endl;
        cout<<"Total comparisions "<<(i+1)<<endl;
        break;
        }
    }
}
