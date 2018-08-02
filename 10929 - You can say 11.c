#include<stdio.h>

int main()
{
    long int a;

    while(scanf("%ld", &a)==1)
    {
        if(a==0)
            break;

        else if(a%11==0)
            printf("%ld is a multiple of 11.\n", a);

        else
            printf("%ld is not a multiple of 11.\n",a);
    }
    return 0;
}
