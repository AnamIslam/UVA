#include<stdio.h>
int main()
{
    int a,b,c,ln,sn,mn,n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        ln=(a>b)?a:b;
        ln=(ln>c)?ln:c;
        sn=(a<b)?a:b;
        sn=(sn<c)?sn:c;
        mn=a+b+c-ln-sn;
        printf("Case %d: %d\n", i, mn);
    }
    return 0;
}
