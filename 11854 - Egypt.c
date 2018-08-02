#include<stdio.h>
int main()
{
    int a,b,c,n;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c==0)
        {
            break;
        }
        else if(a*a+b*b == c*c || b*b+c*c==a*a || a*a+c*c ==b*b)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
