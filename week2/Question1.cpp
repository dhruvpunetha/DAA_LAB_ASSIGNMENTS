//find key present and duplicate copies
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int tc,nu,sear,low,high,mid,tru,cop,temp;
vector<int>vec;
cout<<"Enter number of test cases"<<endl;
cin>>tc;
int siz;
for(int i=0;i<tc;i++)
{
vec.clear();
cop=0;
cout<<"Enter size of array: "<<endl;
cin>>siz;
for(int j=0;j<siz;j++)
{
    cin>>nu;
    vec.push_back(nu);
}
cin>>sear;
low=0;
high=vec.size();
while(low<high)
{
    tru=0;
    mid=(low+high)/2;
    if(vec[mid]==sear)
    {
        cop++;
        temp=mid+1;
        while(temp<vec.size()&&vec[temp]==sear)
        {
            cop++;
            temp++;
        }
        temp=mid-1;
        while(temp>=0&&vec[temp]==sear)
        {
            cop++;
            temp--;
        }
        cout<<"ELEMENT FOUND AND its occurence is : "<<cop<<endl;
        tru=1;
        break;
    }
    if(vec[mid]<sear)
    low=mid+1;
    if(vec[mid]>sear)
    high=mid;
}
if(tru==0)
cout<<"ELEMENT NOT IN ARRAY \n";
}
}