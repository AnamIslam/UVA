#include<stdio.h>

int main()
{
    int r,c,m;

    while(scanf("%d %d", &r, &c)==2)
    {
        m=r*c-1;

        printf("%d\n", m);
    }

    return 0;
}
