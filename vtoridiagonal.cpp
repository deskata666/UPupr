#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Number of rows and cols: ";
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<"Number in "<<i+1<<" row  and "<<j+1<<" col ";
cin>>a[i][j];
}
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Glaven diagonal:";
for(int i=0;i<n;i++)
{
    cout<<a[i][n-1-i]<<" ";
}
return 0;
}
