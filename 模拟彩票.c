// 从1到33中，随即挑出6个不重复的数字

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int redarray[34] = {0};
    int red[6];
    int i = 0;
    int j = 0;
    int num;
    srand(time(NULL));
    // 随机不重复挑选出大数组中的下标，将其中的值变为1
    for(i = 0; i < 6; i++)
    {
        num = rand() % 33 + 1;
        // 重复则重新随机
        if(redarray[num])
            i--;
        else
            redarray[num] = 1;
    }
    // 将数值为1的元素找出并把下标给小数组
    for (i = 1; i < 34; i++)
    {
        if (redarray[i])
        {
            red[j] = i;
            j++;
        }
    }
    // 输出
    for(i = 0; i < 6; i++)
        printf("%d   ", red[i]);
    printf("\n");
    return 0;
}