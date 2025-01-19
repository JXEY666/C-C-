#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1001][1001];//c++必须为常量； 
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i)
			{
				a[i][j]=1;
			}
			else 
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
