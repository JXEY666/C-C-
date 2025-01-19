#include<iostream>
using namespace std;
union Data
{
	int i;
	float f;
	char str[20];
 } data;
int main()
{
	data.f =1.1;
	cout<<data.f <<endl;	
	data.i =1;
	cout<<data.i<<endl;
	
	return 0;
} 
