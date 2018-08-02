#include<stdio.h>

int main()
{
    int n,i,j,x,c;

    int a[101];

    while(scanf("%d", &n)==1)
    {

        if(n==0)
        {
            break;
        }
        for(i=1;i<101;i++)
        {
            a[i]=0;
        }
        c=0;

        for(i=0;i<n;i++)
        {
            scanf("%d", &x);
            a[x]++;
        }

        for(i=1;i<101;i++)
        {
            if(a[i]>0)
            {
                for(j=0;j<a[i];j++)
                {
                    printf("%d", i);
                    c++;
                    if(c!=n)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");

    }
    return 0;
}
