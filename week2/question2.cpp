#include<iostream>
#include<vector>
using namespace std;
int main()
{
int tc,nu,cop;
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
for(int ii=0;ii<vec.size()-2;ii++)
{
    for(int jj=ii+1;jj<vec.size()-1;jj++)
    {
        for(int kk=jj+1;kk<vec.size();kk++)
        {
            if(vec[kk]==vec[ii]+vec[jj])
            {
                cop++;
                cout<<(ii+1)<<","<<(jj+1)<<","<<(kk+1)<<endl;
            }
            if(vec[ii]+vec[jj]<vec[kk])
            break;
        }
    }
}
if(cop==0)
cout<<"No Sequence Found"<<endl;
}
}