1.�вΣ��޲�
2.�β�ֻ�ں����е��� 
3.int&b=a;&������������ֻ����
4.�����ķ���ֵ��return ;(ֻ��һ��)
5.�����ĵ��ã�
Ƕ�ף�
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
	int max2(int a,int b);//�������������� 
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
�ݹ���ã� 
6.����ָ�룻
7. ����ģ�壺
template<class ���Ͳ���1��class ���Ͳ���2...>//class==typename
����ֵ���� ģ����(�βα�)
{
	������; 
} 
template<class T>
void swap(T&x,T&y)
{
	T tmp=x;
	x=y;
	y=tmp;
} 
T:���Ͳ������ɱ������������ 















 
