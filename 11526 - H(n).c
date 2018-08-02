#include<stdio.h>

int main()
{
    unsigned long long int t,n,r,i,j;

    scanf("%lld", &t);

    for(i=0;i<t;i++)
    {
        scanf("%lld", &n);
        r=0;
        for(j=1;j<=n/2;j++)
        {
            r=r+n/j;
        }
        r=r+n/2;
        printf("%lld\n",r);
    }

    return 0;
}
