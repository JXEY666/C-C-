#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for( i=0;i<n;i++)
	{
		int c=1;
		for(j=0;j<=i;j++)
		{
			cout<<c<<" ";
			c=c*(i-j)/(j+1);
			
		}
		cout<<endl;
	}
	return 0;
}
