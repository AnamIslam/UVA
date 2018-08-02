#include<stdio.h>

int main()
{
    int t,n,i,j,r,count;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        count=0;
        printf("Case #%d: %d ", i+1, n);
        for(j=2;j<=n;j++)
        {
            r=n/j;
            if(r*j==n)
            {
                count=count+1;
                printf("= %d * %d ",j,r);
                if(count==2)
                    break;
            }
        }
        printf("\n");
    }

    return 0;
}
