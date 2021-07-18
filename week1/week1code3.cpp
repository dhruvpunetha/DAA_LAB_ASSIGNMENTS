#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
int ch,nu,sear,val,k=0,ite;
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
k=0;
ite=0;
cin>>sear;
if(vec[0]==sear)
{
cout<<vec[0]<<" WAS FOUND IN "<<ite<<" ITERATIONS"<<endl;

}
else
{
while(true)
{
    ite++;
    if(vec[pow(2,k)]==sear)
    {cout<<sear<<" WAS FOUND IN "<<ite<<" ITERATIONS"<<endl;
    break;
    }
    if(vec[pow(2,k)]>sear||pow(2,k)>vec.size())
    {
        for(int j=pow(2,(k-1));j<pow(2,k);j++)
        {
            ite++;
            if(vec[j]==sear)
            {
            cout<<sear<<" WAS FOUND IN "<<ite<<" ITERATIONS"<<endl;
            break;
            }
            if((j==vec.size()-1)||(j==(pow(2,k)-1)))
            {
                cout<<"NOT FOUND"<<endl;
                break;
            }
        }
        break;
    }
k=k+1;
}
}
}
}