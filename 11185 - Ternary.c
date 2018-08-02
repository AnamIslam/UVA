#include<stdio.h>

int main()
{
    long long int n,r,s,t;

    while(1)
    {
        scanf("%lld", &n);
        s=0;
        r=0;
        t=1;
        if(n>=0)
        {
            while(n>0)
            {
                r=n%3;
                n=n/3;
                s=r*t+s;
                t=t*10;

            }
            printf("%lld\n", s);
        }
        else
            break;

    }
    return 0;
}
