#include<iostream>
using namespace std;
int main( )
{
    int a[10],b[10],m,n,i,j;
    cout<<"How many elements do you want in set a:"<<endl;
    cin>>m;
    cout<<"Enter the"<<m<<"elements in set a:"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"How many elements do you want in set b:"<<endl;
    cin>>n;
    cout<<"Enter the"<<n<<"elements in set b:"<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    cout<<"Cartesian Product:"<<endl;
    cout<<"{";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"("<<a[i]<<","<<b[j]<<")"<<",";

        }
    }
    cout<<"}";
    return 0;
}