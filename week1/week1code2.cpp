#include<iostream>
#include<vector>
using namespace std;
int main()
{
int ch,nu,sear,val,ite,low,high,mid,tru;
cin>>ch;
vector<int>vec;
for(int i=0;i<ch;i++)
{
    cin>>nu;
    vec.clear();
    int ite=0;
    for(int j=0;j<nu;j++)
{
    cin>>val;
    vec.push_back(val);
}
cin>>sear;
low=0;
high=vec.size();
ite=1;
tru=0;
while(low<high)
{
    mid=(low+high)/2;
    if(vec[mid]==sear)
    {
        cout<<"ELEMENT PRESENT AND ITERATIONS TAKEN ARE "<<ite<<endl;
        tru=1;
        break;
    }
    if(vec[mid]<sear)
    low=mid+1;
    if(vec[mid]>sear)
    high=mid;
ite++;1
}
if(tru==0)
cout<<"ELEMENT NOT IN ARRAY \n";
}
}