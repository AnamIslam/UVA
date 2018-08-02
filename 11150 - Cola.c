#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d", &a)==1)
    {
        b=a/2;
        c=a+b;
        printf("%d\n", c);
    }
    return 0;
}
