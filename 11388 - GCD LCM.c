#include<stdio.h>
int main()
{
    int g,l,n,t,i;
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d", &g, &l);
        n=l%g;
        if(n==0)
        {
            printf("%d %d\n", g, l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
