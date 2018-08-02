#include<stdio.h>

int main()
{
    int a,b;

    while(1)
    {
        scanf("%d",&a);
        if(a!=0)
        {
            b=a/2;
            printf("%d\n",b);
        }
        else
            break;

    }

    return 0;
}
