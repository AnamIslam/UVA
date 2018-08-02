#include<stdio.h>

int main()
{
    long long int n,i,count;

    while(1)
    {
        scanf("%lld", &n);
        if(n>=0)
        {
            count=1;

            for(i=0;i<=n;i++)
            {
                count=count+i;
            }
            printf("%lld\n", count);
        }

        else
        {
            break;
        }
    }

    return 0;
}
