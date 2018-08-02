#include<stdio.h>

int main()
{
    long long int s,d,i;

    while(scanf("%lld %lld", &s, &d)==2)
    {

        i=s;
        while(s<d)
        {
            i++;
            s=s+i;
        }

        printf("%lld\n", i);

    }

    return 0;

}
