// 指针数组实现,s[1]是char *类型的，指向第2个****的第一个char。
// 开始时，strlen(s[1]) = 4，printf输出的是s[0] + 3，所以是一个*再换行。
// 然后s[1]++，s[1]指向第二个****的第二个char。
// 于是strlen(s[1]) = 3，printf输出的是s[0] + 2，所以是两个*再换行，以此类推。
// 输出:
// *
// **
// ***
// ****

#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
    char *s[2] = { "****", "****" };
    // *s[1]用来计数, 根据*s[0]所指位置输出
    while(*s[1] != '\0')
    {
        printf("%s\n", s[0]+strlen(s[1])-1);
        s[1]++;
    }
}