// 一个数的阶层是很大的数时，便超出c语言表示范围。
// 可以使用数组来存储这个很大的数。
// 输出：
// 一个很大的数

#include <stdio.h>
#define MAX 1000

int main(int argc, char const *argv[])
{
    // 需要计算的数
    int n;
    // 计算
    while(scanf("%d",&n)==1&&n>=0)
    {
        int i,j;
        // 将数组中元素初始化为0
        int a[MAX] = {0};      
        // p是位数，h是进位
        int p,h;         
        a[1]=1;
        p=1;  
        // 阶层运算
        for(i=2;i<=n;i++)   
        {
            for(j=1,h=0;j<=p;j++) 
            {
                // 每一位完成阶层运算
                a[j]=a[j]*i+h;
                // 如果结果大于10则进位
                h=a[j]/10;
                // 将计算出的新值付给每一位
                a[j]=a[j]%10;
            }
            // 处理最高位的数大于一位数的情况
            while(h>0)        
            {
                a[j]=h%10;
                h=h/10;
                j++;
            }
            // 处理完成后新数(组)的位数(下标)
            p=j-1;       
        }
        // 按倒序打印下标，输出结果
        printf("结果为:\n");
        for(i=p;i>0;i--)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}