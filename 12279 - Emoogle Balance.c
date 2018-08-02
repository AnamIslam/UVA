#include<stdio.h>

int main()
{
    int a,n,i,count=0,r;

    while(scanf("%d", &a)==1)
    {
        if(a==0)
        {
            break;
        }
        count++;
        r=0;
        for(i=0;i<a;i++)
        {
            scanf("%d", &n);

            if(n==0)
            {
                r--;
            }
            else if(n<100 && n>0)
            {
                r++;
            }
        }
        printf("Case %d: %d\n", count, r);
    }
    return 0;
}
