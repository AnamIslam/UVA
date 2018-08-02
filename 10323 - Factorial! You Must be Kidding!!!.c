#include<stdio.h>

int main()
{
    long long int n,i,r;

    while(scanf("%lld", &n)!=EOF)
    {
        r=1;
        for(i=1;i<=n;i++)
        {
            r=r*i;
            if(r>6227020800)
            {
                printf("Overflow!\n");
                break;
            }
        }
        if(n<0 && n%2==0)
        {
            printf("Underflow!\n");
        }
        else if(n<0 && n%2!=0)
        {
            printf("Overflow!\n");
        }
         else if(r<10000)
        {
            printf("Underflow!\n");
        }
        else if(r<=6227020800)
            {
                printf("%lld\n", r);
            }

    }
    return 0;
}
