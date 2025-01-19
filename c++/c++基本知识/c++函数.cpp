1.有参，无参
2.形参只在函数中调用 
3.int&b=a;&引用声明符，只声明
4.函数的返回值：return ;(只有一个)
5.函数的调用：
嵌套：
#include<stdio.h>
int main()
{
	int max5(int a,int b,int c,int d,int e);
	int a,b,c,d,e,max;
	scanf("%d%d%d%d%d",a,b,c,d,e);
	max=max5(a,b,c,d,e);
	printf("max=%d",max5);
	return 0;
}
int max5(int a,int b,int c,int d,int e)
{
	int max2(int a,int b);//函数里面声明； 
	int m;
	m=max2(a,b);
	m=max2(m,b);
	m=max2(m,d);
	m=max2(m,e);
	return (m);
}
int max2(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
递归调用： 
6.函数指针；
7. 函数模板：
template<class 类型参数1，class 类型参数2...>//class==typename
返回值类型 模板名(形参表)
{
	函数体; 
} 
template<class T>
void swap(T&x,T&y)
{
	T tmp=x;
	x=y;
	y=tmp;
} 
T:类型参数，可被任意参数代替 















 
