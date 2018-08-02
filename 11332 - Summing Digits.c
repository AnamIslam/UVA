#include<stdio.h>
int main()
{
    long int n,r;

    while(scanf("%ld", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        r=0;
        while(n>9)
        {
            while(n!=0)
            {
                r=r+n%10;
                n=n/10;
            }
            n=r;
            r=0;
        }
        printf("%ld\n", n);
    }
    return 0;
}
