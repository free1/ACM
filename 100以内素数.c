// 输出:
// 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 1; i <= 100; i++)
        for (j = 2; j < i; j++)
        {
            if((i%j) == 0)
                break;
            else if(j == i-1)
                printf("%d ", i);
        }
        printf("\n");
    return 0;
}