1.���飺
2.�ṹ�壺
3.������:
union Data
{
	int i;
	float f;
	char str[20];
 } data;//�ڴ�ȡ����һ����һ��ֻ�����һ�����͵��� 
4.ö�����ͣ�(����)
enum ö����{ö��ֵ��};
enum weekday {s,m,t,w,t,f,s}d1,d2,d3; 
#include <stdio.h>

// ����ö������
enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    // ����ö�����ͱ���
    enum Weekday today = Wednesday;

    // ������
    printf("Today is %d\n", today);

    return 0;
}
5.�����ͣ�
class(�ؼ���) Point(����)
{
private:
    // ��Ա���������ڴ洢�������
    int x;
    int y;

public:
    // ���캯�������ڳ�ʼ���������
    Point(int a, int b) : x(a), y(b) {}

    // ��Ա�����������ƶ����λ��
    void move(int a, int b) 
	{
        x += a;
        y += b;
    }

    // ��Ա���������ڻ�ȡ���x����
    int getX() const 
	{
        return x;
    }

    // ��Ա���������ڻ�ȡ���y����
    int getY() const 
	{
        return y;
    }
};
#include <iostream>
int main() {
    // ����Point��Ķ���p1������ʼ��Ϊ(1, 2)
    Point p1(1, 2);

    // ����p1��move�����������ƶ�(3, 4)
    p1.move(3, 4);

    // ����p1��getX��getY��������ȡ������겢���
    std::cout << "Point p1 coordinates: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;

    return 0;
}
6.typedef	



 
