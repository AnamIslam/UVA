#include<stdio.h>

int main()
{
    //int n;
    long long int n,s;
    while(scanf("%lld", &n)!= EOF)
    {
        s=(1+n)*(1+n)*n*n/4;

        printf("%lld\n", s);
    }

    return 0;
}
