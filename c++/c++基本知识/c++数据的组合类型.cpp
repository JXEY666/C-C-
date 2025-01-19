1.数组：
2.结构体：
3.共用体:
union Data
{
	int i;
	float f;
	char str[20];
 } data;//内存取最大的一个；一次只能输出一个类型的数 
4.枚举类型：(常量)
enum 枚举名{枚举值表};
enum weekday {s,m,t,w,t,f,s}d1,d2,d3; 
#include <stdio.h>

// 定义枚举类型
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
    // 声明枚举类型变量
    enum Weekday today = Wednesday;

    // 输出结果
    printf("Today is %d\n", today);

    return 0;
}
5.类类型：
class(关键字) Point(类名)
{
private:
    // 成员变量，用于存储点的坐标
    int x;
    int y;

public:
    // 构造函数，用于初始化点的坐标
    Point(int a, int b) : x(a), y(b) {}

    // 成员函数，用于移动点的位置
    void move(int a, int b) 
	{
        x += a;
        y += b;
    }

    // 成员函数，用于获取点的x坐标
    int getX() const 
	{
        return x;
    }

    // 成员函数，用于获取点的y坐标
    int getY() const 
	{
        return y;
    }
};
#include <iostream>
int main() {
    // 创建Point类的对象p1，并初始化为(1, 2)
    Point p1(1, 2);

    // 调用p1的move函数，将点移动(3, 4)
    p1.move(3, 4);

    // 调用p1的getX和getY函数，获取点的坐标并输出
    std::cout << "Point p1 coordinates: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;

    return 0;
}
6.typedef	



 
