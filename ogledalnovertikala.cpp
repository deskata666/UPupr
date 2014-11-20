#include<iostream>
using namespace std;

int main()
{
int m,n;
cout<<"Number of rows:";
cin>>n;
cout<<"Number of cols:";
cin>>m;
int a[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<"Number in "<<i+1<<" row  and "<<j+1<<" col ";
cin>>a[i][j];
}
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Mirror A:"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=m-1;j>=0;j--)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
