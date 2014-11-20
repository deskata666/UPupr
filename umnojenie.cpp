#include<iostream>
using namespace std;

int main()
{
int m,n;
float c;
cout<<"Number of rows:";
cin>>n;
cout<<"Number of cols:";
cin>>m;
double a[n][m];
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
cout<<"Change: ";
cin>>c;
cout<<"Result:"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j]*c<<" ";
    }
    cout<<endl;
}
return 0;
}
