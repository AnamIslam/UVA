#include<stdio.h>

int main()
{
    int n,m,i,r;

    while(scanf("%d", &n)!= EOF)
    {
        r=0;
        for(i=0;i<5;i++)
        {
            scanf("%d", &m);
            if(m==n)
            {
                r++;
            }
        }
        printf("%d\n", r);
    }
    return 0;
}
