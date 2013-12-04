// 判断2000年到2500年是否是瑞年

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year, leap = 0;
    for(year = 2000; leap != 1; year++)
    {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d是瑞年\n", year);
            leap = 1;
        }
        else
        {
            printf("%d不是瑞年\n", year);
        }
    }
    
    int p = y;
    while(++year - 2500)
    {
        if((year - p) % 4 == 0)
            printf("%d是瑞年\n", year);
        else
            printf("%d不是瑞年\n", year);
    }
    return 0;
}