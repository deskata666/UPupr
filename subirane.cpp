#include<iostream>
using namespace std;

int main()
{
int m,n;
cout<<"Number of rows:";
cin>>n;
cout<<"Number of cols:";
cin>>m;
int a[n][m],b[m][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]:";
cin>>a[i][j];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<"b["<<i<<"]["<<j<<"]:";
cin>>b[i][j];
}
}
cout<<"a+b:"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<a[i][j]+b[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
