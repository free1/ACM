// 稳定排序算法。
// 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
// 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
// 针对所有的元素重复以上的步骤，除了最后一个。
// 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int i,j,tmp;
    printf("需要排序的数组: \n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    // 排序方法
    for(i = 0; i < 9; i++)
        for(j = 0; j < 9 - i; j++)
            // 比较数组相邻元素
            if(a[j]>a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }

    printf("数组排好序后: \n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}