#include<iostream>
#include<utility> // ���� std::swap ������ͷ�ļ�
using namespace std;

int main()
{
    int a[3];
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // ð����������ѭ�������������������һ����Ҫ���� 2 ��
    for (i = 0; i < 3 - 1; i++)
    {
        // ð��������ڲ�ѭ�����Ƚ�����Ԫ�ز�����
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // ʹ�� std::swap ��������Ԫ��
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
