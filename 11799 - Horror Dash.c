#include<stdio.h>

int main()
{
    int a[10000],n,t,i,j,m;

    scanf("%d", &t);

    for(i=1;i<=t;i++)
    {
        scanf("%d", &n);
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        }
        m=a[0];
        for(j=1;j<n;j++)
        {
            if(a[j]>m)
            {
                m = a[j];
            }
        }

        printf("Case %d: %d\n", i, m);
    }

    return 0;
}
