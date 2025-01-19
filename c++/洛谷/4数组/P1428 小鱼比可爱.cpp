#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for( i=0;i<n;i++)
	{
		int c=0;
		for( j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				c++;
			}
		}
		cout<<c<<" ";
	}
	return 0;
}

