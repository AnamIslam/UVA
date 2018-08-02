#include<stdio.h>
int main()
{
    int a,i,r,t,n;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &t);

        a=t*315+36962;
        r=a%100;
        r=r/10;
        if(r<0)
        {
            r=r+10;
            r=10-r;
        }
        printf("%d\n",r);
    }
    return 0;
}
