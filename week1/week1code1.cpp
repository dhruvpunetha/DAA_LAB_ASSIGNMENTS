#include<iostream>
#include<vector>
using namespace std;
int main()
{
int ch,nu,sear,val;
cin>>ch;
vector<int>vec;
for(int i=0;i<ch;i++)
{
    cin>>nu;
    vec.clear();
    for(int j=0;j<nu;j++)
{
    cin>>val;
    vec.push_back(val);
}
cin>>sear;
for(int k=0;k<nu;k++)
{
    if(vec[k]==sear)
    {
        cout<<"Present "<<(k+1)<<endl;
        break;
    }
    if(k==nu-1&&vec[k]!=sear)
    cout<<"Not Present "<<(k+1)<<endl;
}
}
}