#include<stdio.h>

int main()
{
    int a[101];
    int i,j,n,t,mn,temp;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &t);

        for(j=0;j<t;j++)
        {
            scanf("%d",&a[j]);
        }
        mn = t/2;

        printf("Case %d: %d\n", i, a[mn]);
    }

    return 0;
}
