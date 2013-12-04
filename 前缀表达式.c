// 输入一个表达式使用递归算法将其转化为前缀表达式

#include <stdio.h>
#include <math.h>

double exp()
{
    char a[10];
    scanf("%s", a);
    switch(a[0])
    {
        case '+': return exp() + exp();
        case '-': return exp() - exp();
        case '*': return exp() * exp();
        case '/': return exp() / exp();

        default: return atof(a);
    }
}

int main(int argc, char const *argv[])
{
    double ans;
    ans = exp();
    printf("%f", ans);
    return 0;
}