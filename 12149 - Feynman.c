#include<stdio.h>

int main()
{
    int a,i;
    while(1)
    {
        scanf("%d",&a);

        if(a!=0)
        {
            i=a*(a+1)*(2*a+1)/6;

            printf("%d\n",i);
        }

        else
            break;
    }

    return 0;
}
