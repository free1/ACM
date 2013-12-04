// 要求:
// 有序的数组
// 操作:
// 假设表中元素是按升序排列，将表中间位置记录的关键字与查找关键字比较，
// 如果两者相等，则查找成功；否则利用中间位置记录将表分成前、后两个子表，
// 如果中间位置记录的关键字大于查找关键字，则进一步查找前一子表，否则进一步查找后一子表。
// 重复以上过程，直到找到满足条件的记录，使查找成功，或直到子表不存在为止，此时查找不成功。


#include <stdio.h>

int search(int a[], int n, int x)
{
    int mid, low=0, high=n-1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(a[mid] == x)
            return mid + 1;
        else if(a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
void main()
{
    int search(int a[],int n,int x);                                            
    int i,x,z;
    int a[10];
    // 输入
    printf("输入有序数组 :\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("需要查找的数 :\n");
    scanf("%d",&x);    
    // 查找
    z=search(a,10,x);
    // 结果
    if(z==-1)
        printf("没有找到\n");
    else
        printf("数字%d在数组中第%d位\n",x,z);
}
