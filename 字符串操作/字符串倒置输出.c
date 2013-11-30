// 输入:
// asdfghjkl
// 输出:
// lkjhgfdsa

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100];
    // 输入字符串
    scanf("%s", a);
    for (int i = strlen(a)-1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}