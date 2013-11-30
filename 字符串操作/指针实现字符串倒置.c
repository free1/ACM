// 输入:
// asdfghjkl
// 输出:
// lkjhgfdsa

#include <stdio.h>
#include <string.h>

void fun(char* str)
{
    char *begin = str;
    char *end = str + strlen(str);
    char *front, *back, tmp;

    // 第一个字符与最后一个字符交换，以此类推
    for (front = begin, back = (end-1); front < back; front++, back--)
    {
        tmp = *front;
        *front = *back;
        *back = tmp;
    }
}

int main(int argc, char const *argv[])
{
    char str[100];
    // 输入字符串
    gets(str);
    // 字符串倒置
    fun(str);
    // 输出
    printf(" %s\n", str );
    return 0;
}