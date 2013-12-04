// 操作:
// 让关键字与队列中的数从第一个开始逐个比较，直到找出与给定关键字相同的数为止，它的缺点是效率低下。

#include <stdio.h>

int search(int a[], int x)
{
    int i, f;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            f = i + 1;
            break;
        }
        else
            f = -1;
    }
    return (f);
}
void main()
{
    int search(int a[], int x);                                            
    int a[10];
    int x, i, y;
    // 输入
    printf("输入数组\n");
    for (i = 0;i < 10; i++)
        scanf("%d",&a[i]);
    printf("需要查找的数\n");
    scanf("%d", &x);
    // 查找
    y=search(a, x);
    // 结果
    if(y == -1)
        printf("没有找到\n");
    else
        printf("数字%d在数组中第%d个位置\n",x,y);
}              