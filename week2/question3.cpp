#include<iostream>
#include<vector>
using namespace std;
int main()
{
int tc,nu,cop,k;
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
cin>>k;
for(int ii=0;ii<vec.size();ii++)
{
    for(int jj=ii+1;jj<vec.size();jj++)
    {
        if(abs(vec[ii]-vec[jj])==k)
        cop++;
    }
}
if(cop==0)
cout<<"No Sequence Found"<<endl;
else
cout<<cop<<endl;
}
}