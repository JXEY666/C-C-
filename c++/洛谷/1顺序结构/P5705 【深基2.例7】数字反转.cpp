#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	std::string s;
	cin>>s;
	int len=s.length();
	for(int i=len-1;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
} 
