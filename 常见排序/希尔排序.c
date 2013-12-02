// 将需要排序的序列划分成为若干个较小的子序列，对子序列进行插入排序，
// 通过则插入排序能够使得原来序列成为基本有序。这样通过对较小的序列进行插入排序，
// 然后对基本有序的数列进行插入排序，能够提高插入排序算法的效率。

#include <stdio.h>

//对单个组插入排序
int SortGroup(int* pnData, int nLen, int nBegin,int nStep)
{
    for (int i = nBegin + nStep; i < nLen; i += nStep)
    {
        //寻找i元素的位置
        for (int j = nBegin; j < i; j+= nStep)
        {
            //如果比他小，则这里就是他的位置了
            if (pnData[i] < pnData[j])
            {
                int nTemp = pnData[i];
                for (int k = i; k > j; k -= nStep)
                {
                    pnData[k] = pnData[k - nStep];
                }
                pnData[j] = nTemp;
            }
        }
    }
    return 1;
}
//希尔排序, pnData要排序的数据， nLen数据的个数
int ShellSort(int* pnData, int nLen)
{
    //以nStep分组，nStep每次减为原来的一半。
    for (int nStep = nLen / 2; nStep > 0; nStep /= 2)
    {
        //对每个组进行排序
        for (int i = 0 ;i < nStep; i++)
        {
            SortGroup(pnData, nLen, i, nStep);
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int i;
    int a[10];
    printf("需要排序的数组: \n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    // 排序方法
    ShellSort(a, 10);

    printf("数组排好序后: \n");
    for(i=0;i<10;i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}