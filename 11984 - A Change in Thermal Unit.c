#include<stdio.h>

int main()
{
    int n,c,i;
    float c2,x,f1, c3;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d ", &c);
        scanf("%f", &f1);

        c2=f1*5.00/9.00;

        x=c+c2;

        printf("Case %d: %.2f\n", i, x);
    }

    return 0;
}
