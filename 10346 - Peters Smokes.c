#include<stdio.h>

int main()
{
    int n1,n2,n3,r;

    while(scanf("%d %d", &n1, &n2)==2)
    {
        r=n1;
        n3=0;
        while(n1>=n2)
        {
            n3=n1%n2;
            n1=n1/n2;
            r=r+n1;
            n1=n1+n3;
        }

        printf("%d\n", r);
    }
    return 0;
}
