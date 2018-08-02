#include<stdio.h>

int main()
{
    int t,a,b,r,i;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a, &b);

        r=(a/3)*(b/3);

        printf("%d\n",r);
    }

    return 0;
}
