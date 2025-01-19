#include<iostream>
#include<utility> // 包含 std::swap 函数的头文件
using namespace std;

int main()
{
    int a[3];
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // 冒泡排序的外层循环，控制排序的轮数，一共需要进行 2 轮
    for (i = 0; i < 3 - 1; i++)
    {
        // 冒泡排序的内层循环，比较相邻元素并交换
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // 使用 std::swap 函数交换元素
                std::swap(a[j], a[j + 1]);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
