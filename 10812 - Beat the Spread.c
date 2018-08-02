#include<stdio.h>

int main()
{
    long long int s,d,n,i,wt,lt;

    scanf("%lld", &n);

    for(i=0;i<n;i++)
    {
        scanf("%lld %lld", &s, &d);

        if(s>=d && s%2==d%2)
        {
            wt=(s+d)/2;
            lt=wt-d;

            printf("%lld %lld\n", wt, lt);
        }
        else
            printf("impossible\n");
    }

    return 0;
}
