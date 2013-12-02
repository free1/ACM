// 以空格为一个单词的结束符，统计文章有多少英文单词

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[100];
    int i,word=0,num=0;
    char c;
    gets(s);

    for(i = 0; (c = s[i]) != '\0'; i++)
    {
        // word为标志位来判断是否遇到单词
        if (c == ' ')
        {
            word = 0;
        }
        else
        {
            if (word == 0)
            {
                word = 1;
                // 单词数量加一
                num++;
            }
        }
    }
    printf("%d\n", num);
    return 0;
}